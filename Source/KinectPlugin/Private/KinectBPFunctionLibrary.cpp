#include "KinectBPFunctionLibrary.h"
#include "KinectPluginPrivatePCH.h"

UKinectManager* UKinectBPFunctionLibrary::KinectManager(UObject* WorldContextObject)
{
	FStaticConstructObjectParameters Params(UKinectManager::StaticClass());
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	UKinectManager* tempObject = Cast<UKinectManager>(StaticConstructObject_Internal(Params));

	return tempObject;

}