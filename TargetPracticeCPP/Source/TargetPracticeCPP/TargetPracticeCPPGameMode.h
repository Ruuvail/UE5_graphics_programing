
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TargetPracticeCPPGameMode.generated.h"

UCLASS(minimalapi)
class ATargetPracticeCPPGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATargetPracticeCPPGameMode();

protected:
	virtual void BeginPlay() override;

	
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> MainMenuClass;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> GameUIClass;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> GameOverUIClass;

private:
	//screen
	UPROPERTY()
	class UUserWidget* CurrentWidget;

public:
	// UI pass
	UFUNCTION(BlueprintCallable)
	void ShowMainMenu();

	UFUNCTION(BlueprintCallable)
	void StartGame();

	UFUNCTION(BlueprintCallable)
	void ShowGameOver();
};


