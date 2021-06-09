// BlueprintGeneratedClass GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C
// Size: 0x898 (Inherited: 0x870)
struct AGCNL_RollingEffects_Parent_C : AFortGameplayCueNotifyLoop_PhysicsObjectRolling {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x870(0x08)
	struct USoundBase* SoundAssetDefault; // 0x878(0x08)
	struct USoundBase* SoundAssetSmall; // 0x880(0x08)
	struct USoundBase* SoundAssetMedium; // 0x888(0x08)
	struct USoundBase* SoundAssetLarge; // 0x890(0x08)

	void GetObjectSizeParam(struct AActor* PhysicsObject, int32_t Size); // Function GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.GetObjectSizeParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetSoundAsset(struct AActor* PhysicsObject, struct USoundBase* Asset); // Function GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.GetSoundAsset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_RollingEffects_Parent(int32_t EntryPoint); // Function GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.ExecuteUbergraph_GCNL_RollingEffects_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

