// Ullian Yunakh


#include "DishonoredRadialMenu.h"

void UDishonoredRadialMenu::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	CalculateRingAngles();
}

void UDishonoredRadialMenu::CalculateRingAngles()
{
	InnerRingAngle = FMath::Wrap<float>(InnerRingAngle + AngleDiff * 0.25f, 0, PI * 2);
	OuterRingAngle = FMath::Wrap<float>(OuterRingAngle - AngleDiff * 0.1f, 0, PI * 2);
}
