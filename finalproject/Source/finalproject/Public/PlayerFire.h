// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerBaseComponent.h"
#include "PlayerFire.generated.h"

/**
 *
 */
UCLASS()
class FINALPROJECT_API UPlayerFire : public UPlayerBaseComponent
{
	GENERATED_BODY()

public:
	UPlayerFire();

	virtual void BeginPlay() override;
	virtual void SetupInputBinding(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditDefaultsOnly, Category = BulletFactory)
	TSubclassOf<class ABullet> bulletFactory;
	UPROPERTY(EditDefaultsOnly, Category = SniperUI)
	TSubclassOf<class UUserWidget> sniperUIFactory;
	UPROPERTY(EditAnywhere, Category = BulletEffect)
	class UParticleSystem* bulletEffectFactory;
	UPROPERTY(EditDefaultsOnly, Category = SniperUI)
	TSubclassOf<class UUserWidget> crosshairUIFactory;
	UPROPERTY(EditDefaultsOnly, Category = CameraMotion)
	TSubclassOf<class UCameraShakeBase> cameraShake;
	UPROPERTY(EditDefaultsOnly, Category = Sound)
	class USoundBase* bulletSound;
	UPROPERTY()
	class UCameraComponent* tpsCamComp;
	UPROPERTY()
	class USkeletalMeshComponent* gunMeshComp;
	UPROPERTY()
	class UStaticMeshComponent* sniperGunComp;

	class UUserWidget* _sniperUI;
	class UUserWidget* _crosshairUI;
	bool bUsingGrenadeGun = true;
	bool bSniperAim = false;

	void InputFire();
	void ChangeToGrenadeGun();
	void ChangeToSniperGun();
	void SniperAim();

private:
	void checkEnemy(FHitResult hitInfo, float damage);
};
