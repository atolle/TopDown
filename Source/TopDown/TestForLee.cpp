// Fill out your copyright notice in the Description page of Project Settings.


#include "TestForLee.h"

// Sets default values
ATestForLee::ATestForLee()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");

}

// Called when the game starts or when spawned
void ATestForLee::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestForLee::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

