// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AidenCharacter.generated.h"

struct FInputActionValue;
class UInputAction;
class UInputMappingContext;
UCLASS()
class AISLASH_API AAidenCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AAidenCharacter();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	UPROPERTY(EditAnywhere, Category = "Input | Mappings")
	UInputMappingContext* AidenMappingContext;

	UPROPERTY(EditAnywhere, Category = "Input | Actions")
    UInputAction* MovementAction;

	UPROPERTY(EditAnywhere, Category = "Input | Actions")
	UInputAction* LookingAction;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
};

