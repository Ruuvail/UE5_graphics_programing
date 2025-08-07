

#include "TargetDummy.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

ATargetDummy::ATargetDummy()
{
	// Tick no
	PrimaryActorTick.bCanEverTick = false;

	// Mesh 
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);

	
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Mesh->SetCollisionResponseToAllChannels(ECR_Block);
	Mesh->SetNotifyRigidBodyCollision(true);  // 

	// 
	Mesh->BodyInstance.bUseCCD = true;

	// 
	Mesh->OnComponentHit.AddDynamic(this, &ATargetDummy::OnHit);
}

void ATargetDummy::BeginPlay()
{
	Super::BeginPlay();
}

void ATargetDummy::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse,
	const FHitResult& Hit)
{
#if WITH_EDITOR
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.2f, FColor::Green, TEXT("Target Hit! +1"));
	}
#endif
	Destroy();
}

float ATargetDummy::TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	if (DamageAmount > 0.f)
	{
#if WITH_EDITOR
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.2f, FColor::Yellow, TEXT("Target Damaged! +1"));
		}
#endif
		Destroy();
	}
	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}
