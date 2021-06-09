// BlueprintGeneratedClass GCN_Athena_ReactorGrade_Fire.GCN_Athena_ReactorGrade_Fire_C
// Size: 0x460 (Inherited: 0x458)
struct AGCN_Athena_ReactorGrade_Fire_C : AFortGameplayCueNotify_BurstLatent {
	struct UFortAudioShapeLineComponent* FortAudioShapeLine; // 0x458(0x08)

	void DisableAudio(); // Function GCN_Athena_ReactorGrade_Fire.GCN_Athena_ReactorGrade_Fire_C.DisableAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Athena_ReactorGrade_Fire.GCN_Athena_ReactorGrade_Fire_C.OnBurstGeneric // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
};

