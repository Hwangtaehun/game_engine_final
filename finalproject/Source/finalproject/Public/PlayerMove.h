// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerBaseComponent.h"
#include "PlayerMove.generated.h"

/**
 *
 */
UCLASS()
class FINALPROJECT_API UPlayerMove : public UPlayerBaseComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float walkSpeed = 200.0f;
	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float runSpeed = 600.0f;
	FVector direction;

	UPlayerMove();
	void Turn(float value);
	void LookUp(float value);
	void InputHorisontal(float value);
	void InputVertical(float value);
	void InputJump();
	void Move();
	void InputRun();

	virtual void SetupInputBinding(class UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
