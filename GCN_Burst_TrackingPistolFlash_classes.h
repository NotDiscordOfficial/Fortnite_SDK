// BlueprintGeneratedClass GCN_Burst_TrackingPistolFlash.GCN_Burst_TrackingPistolFlash_C
// Size: 0x1d8 (Inherited: 0x1a8)
struct UGCN_Burst_TrackingPistolFlash_C : UFortGameplayCueNotify_Burst {
	struct FVector Offset; // 0x1a8(0x0c)
	struct FVector OffsetDBNO; // 0x1b4(0x0c)
	struct FName ActorParamName; // 0x1c0(0x08)
	struct FName VectorParamName; // 0x1c8(0x08)
	struct USoundBase* WarningSound; // 0x1d0(0x08)

	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Burst_TrackingPistolFlash.GCN_Burst_TrackingPistolFlash_C.OnBurstGeneric // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
};

