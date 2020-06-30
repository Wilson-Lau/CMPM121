// Fill out your copyright notice in the Description page of Project Settings.


#include "Basic_unit.h"

// Sets default values for this component's properties
UBasic_unit::UBasic_unit()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UBasic_unit::BeginPlay()
{
	Super::BeginPlay();
	int health = 0;
	int attack = 0;
	int defense = 0;
	double movement = 0;
	// ...
	
}


// Called every frame
void UBasic_unit::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

