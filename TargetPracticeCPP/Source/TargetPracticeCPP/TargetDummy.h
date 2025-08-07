
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TargetDummy.generated.h"

UCLASS()
class TARGETPRACTICECPP_API ATargetDummy : public AActor
{
	GENERATED_BODY()

public:
	ATargetDummy();

protected:
	virtual void BeginPlay() override;

	
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
		AController* EventInstigator, AActor* DamageCauser) override;

private:
	
	UPROPERTY(VisibleAnywhere, Category = "Target")
	class UStaticMeshComponent* Mesh;

	//
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, FVector NormalImpulse,
		const FHitResult& Hit);
};
