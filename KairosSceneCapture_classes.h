// Class KairosSceneCapture.KairosCaptureStatics
// Size: 0x28 (Inherited: 0x28)
struct UKairosCaptureStatics : UBlueprintFunctionLibrary {

	void ToggleAutoRotate(bool bIsAutoRotateAllowed); // Function KairosSceneCapture.KairosCaptureStatics.ToggleAutoRotate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3e5aab0
	void PauseOrResumeSnippet(struct FKairosSnippetParams Params, struct FWebJSResponse Response); // Function KairosSceneCapture.KairosCaptureStatics.PauseOrResumeSnippet // (Net|NetReliableNative|Event|NetResponse|Public) // @ game+0x3e5a928
	struct AKairosSceneManagerActor* GetSceneManager(struct UObject* WorldContextObject); // Function KairosSceneCapture.KairosCaptureStatics.GetSceneManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3e5a778
};

// Class KairosSceneCapture.KairosConfig
// Size: 0x40 (Inherited: 0x30)
struct UKairosConfig : UDataAsset {
	float DefaultHeroScale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct AKairosHeroBase* AvatarCaptureBlueprint; // 0x38(0x08)
};

// Class KairosSceneCapture.KairosGameModeBase
// Size: 0x2c8 (Inherited: 0x2c0)
struct AKairosGameModeBase : AGameModeBase {
	struct UKairosConfig* DefaultConfig; // 0x2c0(0x08)

	struct UKairosConfig* GetDefaultConfig(); // Function KairosSceneCapture.KairosGameModeBase.GetDefaultConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x3e5a6ac
};

// Class KairosSceneCapture.KairosHeroBase
// Size: 0x250 (Inherited: 0x220)
struct AKairosHeroBase : AActor {
	struct FString PlayerID; // 0x220(0x10)
	bool bIsBeingCaptured; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x238(0x08)
	enum class EKairosHeroAnimationState CurrentAnimationState; // 0x240(0x01)
	enum class EKairosHeroSkeletonType SkeletonType; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct AFortPlayerPawn* CapturePawn; // 0x248(0x08)

	bool EndCapture(); // Function KairosSceneCapture.KairosHeroBase.EndCapture // (Final|Native|Public|BlueprintCallable) // @ game+0x1db0504
	bool BeginCapture(struct FKairosAnimationFramingInfo FramingInfo, struct FKairosCaptureParams CaptureParams); // Function KairosSceneCapture.KairosHeroBase.BeginCapture // (Final|Native|Public|BlueprintCallable) // @ game+0x3e5a3e8
};

// Class KairosSceneCapture.KairosPawn
// Size: 0x280 (Inherited: 0x280)
struct AKairosPawn : APawn {
};

// Class KairosSceneCapture.KairosPlayerController
// Size: 0x698 (Inherited: 0x698)
struct AKairosPlayerController : APlayerController {
};

// Class KairosSceneCapture.KairosSceneManagerActor
// Size: 0x3a0 (Inherited: 0x220)
struct AKairosSceneManagerActor : AActor {
	struct TMap<struct FString, struct FKairosAvatarDisplayInfo> DisplayAvatars; // 0x220(0x50)
	struct FTransform SpawnedPawnHeadCaptureTransform; // 0x270(0x30)
	struct UAudioComponent* SnippetAudioComponent; // 0x2a0(0x08)
	struct UUserWidget* ActiveGroupWidget; // 0x2a8(0x08)
	bool bIsSnippetPaused; // 0x2b0(0x01)
	char pad_2B1[0x1f]; // 0x2b1(0x1f)
	struct FKairosSceneInfo ActiveSceneInfo; // 0x2d0(0x20)
	char pad_2F0[0xb0]; // 0x2f0(0xb0)

	void StopAR(); // Function KairosSceneCapture.KairosSceneManagerActor.StopAR // (Final|Native|Public|BlueprintCallable) // @ game+0x3e5aa9c
	void PauseOrResumeSnippet(struct FString PlayerID, bool bShouldPase); // Function KairosSceneCapture.KairosSceneManagerActor.PauseOrResumeSnippet // (Final|Native|Public|BlueprintCallable) // @ game+0x3e5a810
	void OLD_OnSceneSetupComplete(struct FKairosSceneInfo CompleteSceneInfoCopy); // Function KairosSceneCapture.KairosSceneManagerActor.OLD_OnSceneSetupComplete // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	struct FKairosSceneInfo GetSceneInfo(); // Function KairosSceneCapture.KairosSceneManagerActor.GetSceneInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x3e5a6c4
	void BeginEmotePlaybackForPlayer(struct FString PlayerID, struct FString EmoteId); // Function KairosSceneCapture.KairosSceneManagerActor.BeginEmotePlaybackForPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x3e5a570
};

