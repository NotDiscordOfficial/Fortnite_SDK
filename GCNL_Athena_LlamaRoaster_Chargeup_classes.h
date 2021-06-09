// BlueprintGeneratedClass GCNL_Athena_LlamaRoaster_Chargeup.GCNL_Athena_LlamaRoaster_Chargeup_C
// Size: 0x830 (Inherited: 0x7d0)
struct AGCNL_Athena_LlamaRoaster_Chargeup_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UFXSystemComponent* MuzzleChargeFX; // 0x7d8(0x08)
	struct UAudioComponent* MuzzleBuildSound; // 0x7e0(0x08)
	struct AFortPlayerPawn* Fort Player Pawn; // 0x7e8(0x08)
	struct AB_Ranged_Generic_C* Weapon; // 0x7f0(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x7f8(0x10)
	struct FMulticastInlineDelegate NewEventDispatcher_2; // 0x808(0x10)
	float MinCamShakeAmp; // 0x818(0x04)
	float MaxCamShakeAmp; // 0x81c(0x04)
	struct UMatineeCameraShake* matineeCamShake; // 0x820(0x08)
	struct UAudioComponent* ChargeUpAudio; // 0x828(0x08)

	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_Athena_LlamaRoaster_Chargeup.GCNL_Athena_LlamaRoaster_Chargeup_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_LlamaRoaster_Chargeup.GCNL_Athena_LlamaRoaster_Chargeup_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void UpdateAudioParamsOnOverheat(float CurrentValue, float MaxValue, enum class EFortWeaponOverheatState State, bool bIsInCooldown); // Function GCNL_Athena_LlamaRoaster_Chargeup.GCNL_Athena_LlamaRoaster_Chargeup_C.UpdateAudioParamsOnOverheat // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Athena_LlamaRoaster_Chargeup(int32_t EntryPoint); // Function GCNL_Athena_LlamaRoaster_Chargeup.GCNL_Athena_LlamaRoaster_Chargeup_C.ExecuteUbergraph_GCNL_Athena_LlamaRoaster_Chargeup // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void NewEventDispatcher_1__DelegateSignature(); // Function GCNL_Athena_LlamaRoaster_Chargeup.GCNL_Athena_LlamaRoaster_Chargeup_C.NewEventDispatcher_1__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NewEventDispatcher_0__DelegateSignature(); // Function GCNL_Athena_LlamaRoaster_Chargeup.GCNL_Athena_LlamaRoaster_Chargeup_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

