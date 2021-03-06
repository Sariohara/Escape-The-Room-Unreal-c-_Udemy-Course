// copyright © Michael Eaton 2017

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "Components/MeshComponent.h"
#include "Components/ActorComponent.h"
#include "Material_Change.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPETHEROOM_API UMaterial_Change : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMaterial_Change();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetupInputComponent();

	//UFUNCTION()
		//void OnPlayerTrigger();

	void OnSetMaterial();

private:

	UPROPERTY(EditAnywhere)
	ATriggerVolume* TriggerPanel = nullptr;

	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* CubePanel1 = nullptr;

	UInputComponent* InputComponent = nullptr;

	UMaterial* Material = nullptr;

	AActor* owner;

	//UPROPERTY(EditAnywhere)


};
