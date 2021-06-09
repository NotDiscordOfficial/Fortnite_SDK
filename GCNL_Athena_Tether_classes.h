// BlueprintGeneratedClass GCNL_Athena_Tether.GCNL_Athena_Tether_C
// Size: 0x848 (Inherited: 0x7d0)
struct AGCNL_Athena_Tether_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UFortLayeredAudioComponent* FortLayeredAudio; // 0x7d8(0x08)
	struct UNiagaraComponent* LandFX; // 0x7e0(0x08)
	struct UNiagaraComponent* WaterFX; // 0x7e8(0x08)
	struct UStaticMeshComponent* RightSki; // 0x7f0(0x08)
	struct UStaticMeshComponent* LeftSki; // 0x7f8(0x08)
	float ScaleInSkis_SkiScalar_93783D4A4F91BF9F887B16977978DDB4; // 0x800(0x04)
	enum class ETimelineDirection ScaleInSkis__Direction_93783D4A4F91BF9F887B16977978DDB4; // 0x804(0x01)
	char pad_805[0x3]; // 0x805(0x03)
	struct UTimelineComponent* ScaleInSkis; // 0x808(0x08)
	struct AFortPlayerPawn* OwningFPP; // 0x810(0x08)
	bool IsInWater; // 0x818(0x01)
	char pad_819[0x3]; // 0x819(0x03)
	float NormalizedSpeed; // 0x81c(0x04)
	float TurnSpeed; // 0x820(0x04)
	float ForceFeedbackIntensity; // 0x824(0x04)
	struct FTimerHandle ScaleInSkisTimerHandle; // 0x828(0x08)
	float SkiScaleInDelay; // 0x830(0x04)
	char pad_834[0x4]; // 0x834(0x04)
	struct TScriptInterface<None> CameraLensEffectInterface; // 0x838(0x10)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.WhileActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateAudio(int32_t Surface); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScaleInSkis__FinishedFunc(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void ScaleInSkis__UpdateFunc(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnApplication(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnApplication // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature(struct UAudioComponent* AudioComponent, struct FName ParameterName, int32_t OneshotIndex); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void StartFF(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StartFF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFF(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateFF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopFF(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StopFF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeTetherGCNL(struct UObject* Object); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.InitializeTetherGCNL // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ScaleInSkisForPlayer(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkisForPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Athena_Tether(int32_t EntryPoint); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ExecuteUbergraph_GCNL_Athena_Tether // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

