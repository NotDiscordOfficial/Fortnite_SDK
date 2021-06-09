// BlueprintGeneratedClass GCN_Loop_GhostMode.GCN_Loop_GhostMode_C
// Size: 0x830 (Inherited: 0x7d0)
struct AGCN_Loop_GhostMode_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	float FadeMaterialsTL_Lerp_D7B0BAAD47F48403BE23B98F38D8CA3E; // 0x7d8(0x04)
	enum class ETimelineDirection FadeMaterialsTL__Direction_D7B0BAAD47F48403BE23B98F38D8CA3E; // 0x7dc(0x01)
	char pad_7DD[0x3]; // 0x7dd(0x03)
	struct UTimelineComponent* FadeMaterialsTL; // 0x7e0(0x08)
	struct FLinearColor HitGlowColor; // 0x7e8(0x10)
	struct FLinearColor HotGlowOuterColor; // 0x7f8(0x10)
	float HitGlowFresnelBrightness; // 0x808(0x04)
	float HitGlowFresnelExponent; // 0x80c(0x04)
	struct APlayerPawn_Athena_C* Target Player; // 0x810(0x08)
	float Glow Priority; // 0x818(0x04)
	char pad_81C[0x4]; // 0x81c(0x04)
	struct USoundBase* StopSoundCue; // 0x820(0x08)
	struct USoundBase* StartSoundCue; // 0x828(0x08)

	void Highlight Lerp(float Alpha, struct FPawnHighlight Highlight); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.Highlight Lerp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void FadeMaterialsTL__FinishedFunc(); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void FadeMaterialsTL__UpdateFunc(); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void FadeMaterialsIn(); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsIn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FadeMaterialsOut(); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsOut // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Loop_GhostMode(int32_t EntryPoint); // Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.ExecuteUbergraph_GCN_Loop_GhostMode // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

