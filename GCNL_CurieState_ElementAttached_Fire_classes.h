// BlueprintGeneratedClass GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C
// Size: 0x815 (Inherited: 0x7d0)
struct AGCNL_CurieState_ElementAttached_Fire_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UAudioComponent* OnFireAudioComponent; // 0x7d8(0x08)
	struct USoundBase* SoundOnPlayerLoop; // 0x7e0(0x08)
	struct USkeletalMeshComponent* PawnSkeletalMesh; // 0x7e8(0x08)
	struct APlayerPawn_Athena_C* Pawn; // 0x7f0(0x08)
	struct FTimerHandle FadeBodyFXTimerHandle; // 0x7f8(0x08)
	float FadeInDuration; // 0x800(0x04)
	enum class B_Enum_PlayerFireStates PlayerFireState; // 0x804(0x01)
	char pad_805[0x3]; // 0x805(0x03)
	struct UNiagaraComponent* BodyFXParticleSystem; // 0x808(0x08)
	float FadeOutDuration; // 0x810(0x04)
	enum class B_Enum_PlayerFireStates PreviousPlayerFireState; // 0x814(0x01)

	void FadeOnFireAudioComponent(); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.FadeOnFireAudioComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearAllHandles(); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ClearAllHandles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePlayerVisualsByState(enum class B_Enum_PlayerFireStates PlayerState); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.UpdatePlayerVisualsByState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeactivateBodyFX(); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.DeactivateBodyFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ActivateBodyFX(); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ActivateBodyFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCurieStateChanged(struct UObject* Owner, struct FCurieContainerHandle ContainerHandle, struct FGameplayTag StateIdentifier); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnCurieStateChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetPlayerFireState(enum class B_Enum_PlayerFireStates Player State); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.GetPlayerFireState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBodyFXParameters(enum class B_Enum_PlayerFireStates PreviousPlayerFireState); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.SetBodyFXParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnApplication(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnApplication // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void FadeBodyFXOut(); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.FadeBodyFXOut // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire(int32_t EntryPoint); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

