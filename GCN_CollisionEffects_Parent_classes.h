// BlueprintGeneratedClass GCN_CollisionEffects_Parent.GCN_CollisionEffects_Parent_C
// Size: 0x1e8 (Inherited: 0x1a8)
struct UGCN_CollisionEffects_Parent_C : UFortGameplayCueNotify_Burst {
	struct USoundBase* SoundAssetDefault; // 0x1a8(0x08)
	struct TArray<struct FAudioComponentParam> AudioParams; // 0x1b0(0x10)
	struct UInitialActiveSoundParams* ParamInstance; // 0x1c0(0x08)
	struct USoundBase* SoundAssetSmall; // 0x1c8(0x08)
	struct USoundBase* SoundAssetMedium; // 0x1d0(0x08)
	struct USoundBase* SoundAssetLarge; // 0x1d8(0x08)
	struct USoundBase* SoundAssetZeroG; // 0x1e0(0x08)

	void GetImpactSoundAsset(struct AActor* PhysicsObject, struct USoundBase* Asset); // Function GCN_CollisionEffects_Parent.GCN_CollisionEffects_Parent_C.GetImpactSoundAsset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void GetObjectSizeParam(struct AActor* PhysicsObject, int32_t Size); // Function GCN_CollisionEffects_Parent.GCN_CollisionEffects_Parent_C.GetObjectSizeParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_CollisionEffects_Parent.GCN_CollisionEffects_Parent_C.OnBurstGeneric // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
};

