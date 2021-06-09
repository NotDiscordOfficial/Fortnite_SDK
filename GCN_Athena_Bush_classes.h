// BlueprintGeneratedClass GCN_Athena_Bush.GCN_Athena_Bush_C
// Size: 0x860 (Inherited: 0x7d0)
struct AGCN_Athena_Bush_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UStaticMeshComponent* OwningPlayer_BushMesh; // 0x7d8(0x08)
	struct UArrowComponent* Arrow2; // 0x7e0(0x08)
	struct UArrowComponent* Arrow1; // 0x7e8(0x08)
	struct UStaticMeshComponent* BushMesh; // 0x7f0(0x08)
	struct UArrowComponent* Arrow; // 0x7f8(0x08)
	struct UParticleSystemComponent* Trail_Leaves; // 0x800(0x08)
	float OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437; // 0x808(0x04)
	enum class ETimelineDirection OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437; // 0x80c(0x01)
	char pad_80D[0x3]; // 0x80d(0x03)
	struct UTimelineComponent* OpacityFade; // 0x810(0x08)
	struct AActor* PlayerPawn; // 0x818(0x08)
	struct UMaterialInstanceDynamic* MID_Bush; // 0x820(0x08)
	bool IsActive; // 0x828(0x01)
	char pad_829[0x7]; // 0x829(0x07)
	struct UMaterialInstanceDynamic* MID_OwningClientBush; // 0x830(0x08)
	struct FCurveTableRowHandle ClientBushOpacity; // 0x838(0x10)
	float TargetOpacity; // 0x848(0x04)
	char pad_84C[0x4]; // 0x84c(0x04)
	struct UParticleSystem* BushDestructionVFX; // 0x850(0x08)
	struct USoundBase* BushDestructionSFX; // 0x858(0x08)

	void OpacityFade__FinishedFunc(); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.OpacityFade__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void OpacityFade__UpdateFunc(); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.OpacityFade__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void On Player Step(); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.On Player Step // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Athena_Bush(int32_t EntryPoint); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.ExecuteUbergraph_GCN_Athena_Bush // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

