// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C
// Size: 0x9ac (Inherited: 0x8e8)
struct AGCL_BoostJumpPack_Hovering_C : AGameplayCueNotify_Jetpack_Hovering {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8e8(0x08)
	bool bJetpackAudioEnabled; // 0x8f0(0x01)
	char pad_8F1[0x7]; // 0x8f1(0x07)
	struct USoundBase* SoundOnStart; // 0x8f8(0x08)
	struct USoundBase* SoundOnStop; // 0x900(0x08)
	struct USoundBase* SoundLoopOnIdle; // 0x908(0x08)
	struct USoundBase* SoundLoopOnAccel; // 0x910(0x08)
	struct USoundBase* SoundLoopOnOutOfFuel; // 0x918(0x08)
	struct USoundBase* SoundOnFuelWarning; // 0x920(0x08)
	struct USoundBase* SoundOnOutOfFuel; // 0x928(0x08)
	struct USoundBase* SoundOnThrust; // 0x930(0x08)
	bool bIsFirstJump; // 0x938(0x01)
	char pad_939[0x7]; // 0x939(0x07)
	struct UParticleSystemComponent* GroundInteract; // 0x940(0x08)
	struct TSoftObjectPtr<struct USkeletalMeshComponent> Milo Check; // 0x948(0x28)
	struct TSoftObjectPtr<struct UObject> Milo Backpack; // 0x970(0x28)
	struct FVector Milo_LightScale; // 0x998(0x0c)
	struct FName AttachSocketName; // 0x9a4(0x08)

	void SetJetpackAudioEnabled(bool Enabled); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.SetJetpackAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnActive // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On Pawn Landed(struct FHitResult Hit); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.On Pawn Landed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetFX(); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ResetFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PlayLowFuelWarning(); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.PlayLowFuelWarning // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void TryToPlayGroundEffects(); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.TryToPlayGroundEffects // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering(int32_t EntryPoint); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

