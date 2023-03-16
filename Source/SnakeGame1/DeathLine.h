// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeathLine.generated.h"

UCLASS()
class SNAKEGAME1_API ADeathLine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADeathLine();
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf <ADeathLine> Newline;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void DeathZone();
};
