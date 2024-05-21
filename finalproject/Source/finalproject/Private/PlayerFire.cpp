// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerFire.h"
#include "PlayerAnim.h"
#include "EnemyFSM.h"
#include "Bullet.h"
#include <Blueprint/UserWidget.h>
#include <Kismet/GameplayStatics.h>
#include <Camera/CameraComponent.h>

UPlayerFire::UPlayerFire()
{
	ConstructorHelpers::FObjectFinder<USoundBase> tempSound(TEXT("/Script/Engine.SoundWave'/Game/SniperGun/Rifle.Rifle'"));
	if (tempSound.Succeeded())
	{
		bulletSound = tempSound.Object;
	}
}

void UPlayerFire::BeginPlay()
{
	Super::BeginPlay();

	tpsCamComp = me->tpsCamComp;
	gunMeshComp = me->gunMeshComp;
	sniperGunComp = me->sniperGunComp;

	_sniperUI = CreateWidget(GetWorld(), sniperUIFactory);
	_crosshairUI = CreateWidget(GetWorld(), crosshairUIFactory);
	_crosshairUI->AddToViewport();

	ChangeToSniperGun();
}

void UPlayerFire::SetupInputBinding(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &UPlayerFire::InputFire);
	PlayerInputComponent->BindAction(TEXT("GrenadeGun"), IE_Pressed, this, &UPlayerFire::ChangeToGrenadeGun);
	PlayerInputComponent->BindAction(TEXT("SniperGun"), IE_Pressed, this, &UPlayerFire::ChangeToSniperGun);
	PlayerInputComponent->BindAction(TEXT("Sniper"), IE_Pressed, this, &UPlayerFire::SniperAim);
	PlayerInputComponent->BindAction(TEXT("Sniper"), IE_Released, this, &UPlayerFire::SniperAim);
}

void UPlayerFire::InputFire()
{
	UGameplayStatics::PlaySound2D(GetWorld(), bulletSound);
	auto controller = GetWorld()->GetFirstPlayerController();
	controller->PlayerCameraManager->StartCameraShake(cameraShake);
	auto anim = Cast<UPlayerAnim>(me->GetMesh()->GetAnimInstance());
	anim->PlayAttackAnim();

	if (bUsingGrenadeGun) {
		FTransform firePosition = gunMeshComp->GetSocketTransform(TEXT("FirePosition"));
		GetWorld()->SpawnActor<ABullet>(bulletFactory, firePosition);
	}
	else {
		bool bHit;
		FHitResult hitInfo;
		FVector startPos = tpsCamComp->GetComponentLocation();
		FVector endPos = tpsCamComp->GetComponentLocation() + tpsCamComp->GetForwardVector() * 5000;
		FCollisionQueryParams params;

		params.AddIgnoredActor(me);
		bHit = GetWorld()->LineTraceSingleByChannel(hitInfo, startPos, endPos, ECC_Visibility, params);

		if (bHit) {
			FTransform bulletTrans;
			bulletTrans.SetLocation(hitInfo.ImpactPoint);
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), bulletEffectFactory, bulletTrans);

			auto hitComp = hitInfo.GetComponent();
			if (hitComp && hitComp->IsSimulatingPhysics()) {
				FVector force = -hitInfo.ImpactNormal * hitComp->GetMass() * 500000;
				hitComp->AddForce(force);
			}

			checkEnemy(hitInfo, 3.0f);
		}
	}
}

void UPlayerFire::ChangeToGrenadeGun()
{
	_crosshairUI->RemoveFromParent();
	bUsingGrenadeGun = true;
	sniperGunComp->SetVisibility(false);
	gunMeshComp->SetVisibility(true);
	me->OnUsingGrenade(bUsingGrenadeGun);
}

void UPlayerFire::ChangeToSniperGun()
{
	_crosshairUI->AddToViewport();
	bUsingGrenadeGun = false;
	sniperGunComp->SetVisibility(true);
	gunMeshComp->SetVisibility(false);
	me->OnUsingGrenade(bUsingGrenadeGun);
}

void UPlayerFire::SniperAim()
{
	if (bUsingGrenadeGun) {
		return;
	}

	if (bSniperAim == false) {
		bSniperAim = true;
		_sniperUI->AddToViewport();
		tpsCamComp->SetFieldOfView(45.0f);
		_crosshairUI->RemoveFromParent();
	}
	else {
		bSniperAim = false;
		_sniperUI->RemoveFromParent();
		tpsCamComp->SetFieldOfView(90.0f);
		_crosshairUI->AddToViewport();
	}
}

void UPlayerFire::checkEnemy(FHitResult hitInfo, float damage)
{
	auto enemy = hitInfo.GetActor()->GetDefaultSubobjectByName(TEXT("FSM"));
	if (enemy) {
		auto enemyFSM = Cast<UEnemyFSM>(enemy);
		enemyFSM->OnDamageProcess(damage);
	}
}