// Fill out your copyright notice in the Description page of Project Settings.


#include "PoisonApple.h"
#include "SnakeBase.h"
#include "PlayerPawnBase.h"

// Sets default values
APoisonApple::APoisonApple()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APoisonApple::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APoisonApple::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void APoisonApple::Interact(AActor* Interactor, bool bIsHead)
{
	if (bIsHead)
	{
		auto Snake = Cast<ASnakeBase>(Interactor);

		if (IsValid(Snake))
		{
			//Snake->
			DestroySnake();
			SpawnPoisonFood();
			this->Destroy();
		}

	}
}

void APoisonApple::SpawnPoisonFood()
{
	float MinY = -1000.f, MaxY = 1000.f;
	float MinX = -520.f, MaxX = 520.f;
	float SpawnZ = 70.f;
	float SpawnX = FMath::FRandRange(MinX, MaxX);
	float SpawnY = FMath::FRandRange(MinY, MaxY);

	FVector NewFoodLocation(SpawnX, SpawnY, SpawnZ);
	FTransform FoodTransform(NewFoodLocation);
	APoisonApple* NewSpawnedFood = GetWorld()->SpawnActor<APoisonApple>(NewPoisonApple, FoodTransform);
	
}

void APoisonApple::DestroySnake()
{
	TArray<ASnakeElementBase*> SnakeElement;
	//GetOverlappingActors(SnakeElement);
	for (int i = 0; i < SnakeElement.Num(); i++) //CollecteActors.Num()
	{
		

	}
}

