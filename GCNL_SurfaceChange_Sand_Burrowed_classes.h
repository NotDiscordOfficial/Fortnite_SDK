// BlueprintGeneratedClass GCNL_SurfaceChange_Sand_Burrowed.GCNL_SurfaceChange_Sand_Burrowed_C
// Size: 0x970 (Inherited: 0x900)
struct AGCNL_SurfaceChange_Sand_Burrowed_C : AFortGameplayCueNotifyLoop_SandBurrow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x900(0x08)
	struct FVector FX_Attached_Scale; // 0x908(0x0c)
	char pad_914[0x4]; // 0x914(0x04)
	struct UFXSystemAsset* FX_BurstRemoval; // 0x918(0x08)
	struct FVector FX_BurstRemoval_Scale; // 0x920(0x0c)
	float AttachedFX_DistanceInFrontOfPawn; // 0x92c(0x04)
	float AttachedFX_HeightOffsetFromGround; // 0x930(0x04)
	float RemovalFX_HeightOffsetFromGround; // 0x934(0x04)
	struct AEmitterCameraLensEffectBase* LensEffect_SpeedLines; // 0x938(0x08)
	struct AEmitterCameraLensEffectBase* LensEffect; // 0x940(0x08)
	float PercentOfMaxSpeedToShowSpeedLines; // 0x948(0x04)
	char pad_94C[0x4]; // 0x94c(0x04)
	struct UFXSystemAsset* FX_Speed_Lines; // 0x950(0x08)
	struct USoundBase* Sound_FirstPerson; // 0x958(0x08)
	struct USoundBase* Sound_ThirdPerson_Ally; // 0x960(0x08)
	struct USoundBase* Sound_ThirdPerson_Enemy; // 0x968(0x08)

	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_SurfaceChange_Sand_Burrowed.GCNL_SurfaceChange_Sand_Burrowed_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_SurfaceChange_Sand_Burrowed.GCNL_SurfaceChange_Sand_Burrowed_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SetLoopingAudioSound(); // Function GCNL_SurfaceChange_Sand_Burrowed.GCNL_SurfaceChange_Sand_Burrowed_C.SetLoopingAudioSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_SurfaceChange_Sand_Burrowed(int32_t EntryPoint); // Function GCNL_SurfaceChange_Sand_Burrowed.GCNL_SurfaceChange_Sand_Burrowed_C.ExecuteUbergraph_GCNL_SurfaceChange_Sand_Burrowed // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

