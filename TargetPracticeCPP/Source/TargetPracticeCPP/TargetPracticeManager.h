
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TargetPracticeManager.generated.h"

class UUserWidget;
class UBoxComponent;


UENUM(BlueprintType)
enum class ETPFlow : uint8
{
	MainMenu,
	Playing,
	GameOver
};

UCLASS()
class TARGETPRACTICECPP_API ATargetPracticeManager : public AActor
{
	GENERATED_BODY()

public:
	ATargetPracticeManager();

	/** UI classes  */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> MainMenuClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> GameUIClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> GameOverClass;

	/** Target to spawn (e.g., your BP_TargetDummy) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
	TSubclassOf<AActor> TargetClass;

	/** Spawn area volume (random points generated inside this box) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
	UBoxComponent* SpawnArea;

	/** Spawn settings */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (ClampMin = "0.05"))
	float SpawnInterval = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (ClampMin = "1"))
	int32 SpawnPerTick = 1;

	/** Game rules */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game", meta = (ClampMin = "1"))
	int32 RoundSeconds = 60;

	/** Read-only accessors for UI bindings */
	UFUNCTION(BlueprintCallable, Category = "Game")
	int32 GetScore() const { return Score; }

	UFUNCTION(BlueprintCallable, Category = "Game")
	int32 GetTimeRemaining() const { return TimeRemaining; }

	/** Called by targets (or hit logic) to add points */
	UFUNCTION(BlueprintCallable, Category = "Game")
	void AddScore(int32 Delta);

	/** UI entry points */
	UFUNCTION(BlueprintCallable, Category = "UI")
	void ShowMainMenu();

	UFUNCTION(BlueprintCallable, Category = "UI")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "UI")
	void ShowGameOver();

protected:
	virtual void BeginPlay() override;

private:
	/** Internal helpers */
	void SwitchTo(TSubclassOf<UUserWidget> WidgetClass, ETPFlow NewState);
	void GameTick();      // 1-second countdown
	void SpawnTick();     // periodic target spawns
	FVector GetRandomPointInArea() const;

private:
	/** Runtime state */
	UPROPERTY()
	UUserWidget* CurrentWidget = nullptr;

	UPROPERTY()
	APlayerController* PlayerControllerRef = nullptr;

	ETPFlow State = ETPFlow::MainMenu;

	FTimerHandle TimerHandle_GameTick;
	FTimerHandle TimerHandle_SpawnTick;

	int32 TimeRemaining = 0;
	int32 Score = 0;
};
