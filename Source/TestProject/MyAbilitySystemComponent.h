#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "MyAbilitySystemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TESTPROJECT_API UMyAbilitySystemComponent : public UAbilitySystemComponent
{
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category="GAS")
    void BP_InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor);
};
