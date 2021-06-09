// BlueprintGeneratedClass B_EmotePreviewDisplay.B_EmotePreviewDisplay_C
// Size: 0x2b0 (Inherited: 0x238)
struct AB_EmotePreviewDisplay_C : AFortEmotePreviewActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct USceneComponent* Scene; // 0x240(0x08)
	struct UAthenaEmojiItemDefinition* EmojiItemDefinition; // 0x248(0x08)
	struct TSoftObjectPtr<struct UAnimMontage> Animation; // 0x250(0x28)
	struct UFortMontageItemDefinitionBase* DanceOrEmojiItemDefinition; // 0x278(0x08)
	struct FName StartSectionName; // 0x280(0x08)
	struct FMulticastInlineDelegate OnEmoteSetupFinished; // 0x288(0x10)
	struct UAthenaShoutItemDefinition* ShoutItemDefinition; // 0x298(0x08)
	struct TArray<struct UAudioComponent*> DynamicallySpawnedSounds; // 0x2a0(0x10)

	void CleanupDynamicSounds(); // Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.CleanupDynamicSounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyEmoteToPet(bool IsRemoval); // Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ApplyEmoteToPet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_638F148342254A777E929B88915A8958(struct UObject* Loaded); // Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnLoaded_638F148342254A777E929B88915A8958 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreviewEmote(struct UFortMontageItemDefinitionBase* Emote); // Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PreviewEmote // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PerformSpecialAction(struct FName ActionName); // Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PerformSpecialAction // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SpecialCaseShoutHandler(); // Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.SpecialCaseShoutHandler // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_EmotePreviewDisplay(int32_t EntryPoint); // Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ExecuteUbergraph_B_EmotePreviewDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnEmoteSetupFinished__DelegateSignature(); // Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnEmoteSetupFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

