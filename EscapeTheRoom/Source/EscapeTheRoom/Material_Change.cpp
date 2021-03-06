// copyright © Michael Eaton 2017

#include "Material_Change.h"
#include "Engine/World.h"
#include "Containers/Array.h"
#include "Containers/UnrealString.h"
#include "Components/MeshComponent.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/PlayerController.h"


// Sets default values for this component's properties
UMaterial_Change::UMaterial_Change()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMaterial_Change::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UMaterial_Change::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMaterial_Change::SetupInputComponent()
{
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (InputComponent)
	{
		InputComponent->BindAction("Interact", IE_Pressed, this, &UMaterial_Change::OnSetMaterial);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s component is not on"), *GetOwner()->GetName())
	}
}

void UMaterial_Change::OnSetMaterial()
{
	UE_LOG(LogTemp, Warning, TEXT("This a test!!"))
}

