// Fill out your copyright notice in the Description page of Project Settings.


#include "Food.h"
#include "SnakeBase.h"
#include "PlayerPawnBase.h"


// Sets default values
AFood::AFood()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

// Called when the game starts or when spawned
void AFood::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	BuferTime += DeltaTime;
	if (BuferTime > StepDelay)
	{
		SpawnFood();
		BuferTime = 0;
		Destroy(true, true);
	}
	
}

void AFood::Interact(AActor* Interactor, bool bIsHead)
{
	if (bIsHead)
	{
		auto Snake = Cast<ASnakeBase>(Interactor);
	   
		if (IsValid(Snake))
		{
			Snake->AddSnakeElement();
		    SpawnFood();
			this->Destroy();
		}
	
	}
}

void AFood::SpawnFood()
{
	float MinY = -1000.f, MaxY = 1000.f;
	float MinX = -520.f, MaxX = 520.f;
	float SpawnZ = 70.f;
	float SpawnX = FMath::FRandRange(MinX, MaxX);
	float SpawnY = FMath::FRandRange(MinY, MaxY);
	
	FVector NewFoodLocation(SpawnX,SpawnY, SpawnZ);
	FTransform FoodTransform(NewFoodLocation);
	AFood* NewSpawnedFood = GetWorld()->SpawnActor<AFood>(NewFood, FoodTransform);
	
	

	
}
