// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakeBase.h"
#include "DeathLine.h"

// Sets default values
ADeathLine::ADeathLine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADeathLine::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeathLine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DeathZone();
}

void ADeathLine::DeathZone()
{
	TArray<AActor*> CollecteActors;
	GetOverlappingActors(CollecteActors);
	for (int i = 0; i < CollecteActors.Num(); i++) //CollecteActors.Num()
	{
		CollecteActors[i]->Destroy();

	}
}




