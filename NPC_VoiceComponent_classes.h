// BlueprintGeneratedClass NPC_VoiceComponent.NPC_VoiceComponent_C
// Size: 0xe0 (Inherited: 0xb8)
struct UNPC_VoiceComponent_C : UFortAIComponent_Voice {
	struct UFortTaggedSoundBank* DeprecatedBPSoundBank; // 0xb8(0x08)
	struct USceneComponent* AttachComponent; // 0xc0(0x08)
	float TriggerTimeThreshold; // 0xc8(0x04)
	float LastTriggerTime; // 0xcc(0x04)
	struct UAudioComponent* Audio Component; // 0xd0(0x08)
	struct USoundEffectSourcePresetChain* SourceChainToApply; // 0xd8(0x08)

	void SetSourceEffectChainToApply(struct USoundEffectSourcePresetChain* SourceEffectChain); // Function NPC_VoiceComponent.NPC_VoiceComponent_C.SetSourceEffectChainToApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Internal Get Voice Sound Bank(struct UFortTaggedSoundBank* Sound Bank); // Function NPC_VoiceComponent.NPC_VoiceComponent_C.Internal Get Voice Sound Bank // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Deprecated Set Sound Bank(struct UFortTaggedSoundBank* SoundBank); // Function NPC_VoiceComponent.NPC_VoiceComponent_C.Deprecated Set Sound Bank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayVoiceLine(struct FGameplayTag Gameplay Tag, struct UAudioComponent* AudioComponent, bool Success); // Function NPC_VoiceComponent.NPC_VoiceComponent_C.PlayVoiceLine // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

