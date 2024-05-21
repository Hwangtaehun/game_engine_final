// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyFSM.generated.h"

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	Idle,
	Move,
	Attack,
	Damage,
	Die,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FINALPROJECT_API UEnemyFSM : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyFSM();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=FSM)
	EEnemyState mState = EEnemyState::Idle;
	UPROPERTY(EditDefaultsOnly, Category=FSM)
	float idleDelayTime = 2.0f;
	UPROPERTY(VisibleAnywhere, Category=FSM)
	class ATPSPlayer* target;
	UPROPERTY()
	class AEnemy* me;
	UPROPERTY(EditAnywhere, Category = FSM)
	float attackRange = 150.0f;
	UPROPERTY(EditAnywhere, Category = FSM)
	float attackDelayTime = 2.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category=FSM)
	int32 hp = 3;
	UPROPERTY(EditAnywhere, Category=FSM)
	float damageDelayTime = 2.0f;
	UPROPERTY(EditAnywhere, Category=FSM)
	float dieSpeed = 50.0f;
	UPROPERTY()
	class UEnemyAnim* anim;
	UPROPERTY()
	class AAIController* ai;
	float currentTime = 0.0f;
	FVector randomPos;
	bool GetRandomPositionInNavMesh(FVector centerLocation, float radius, FVector& dest);

	void IdleState();
	void MoveState();
	void AttackState();
	void DamageState();
	void DieState();
	void OnDamageProcess(float damage);
};
