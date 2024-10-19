// Ullian Yunakh

#pragma once

#include "CoreMinimal.h"
#include "UWRadialMenu.h"
#include "DishonoredRadialMenu.generated.h"

/**
 * 
 */
UCLASS()
class RADIALMENU_API UDishonoredRadialMenu : public UUWRadialMenu
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	float InnerRingAngle = 0;

	UPROPERTY(BlueprintReadOnly)
	float OuterRingAngle = 0;
	
protected:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	virtual void CalculateRingAngles();
};
