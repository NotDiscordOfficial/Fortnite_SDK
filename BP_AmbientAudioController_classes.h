// BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C
// Size: 0x1c8 (Inherited: 0xe0)
struct UBP_AmbientAudioController_C : UFortAmbientAudioController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	float CheckFrequency; // 0xe8(0x04)
	bool bAboveSnowAltitude; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct UFortPOIAmbientAudioBank* WinterAudioBank; // 0xf0(0x08)
	bool bSnowAltitudeEnabled; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UFortPOIAmbientAudioBank* StormAudioBank; // 0x100(0x08)
	struct FGameplayTag AmbientAudioInsideTag; // 0x108(0x08)
	struct UAmbientAudioDataAsset* CurieAudioBank; // 0x110(0x08)
	struct FVector SnowOriginWorldLoc; // 0x118(0x0c)
	float SnowRadius; // 0x124(0x04)
	struct TArray<struct FGameplayTag> SnowTagsToApply; // 0x128(0x10)
	struct FName SnowEntryName; // 0x138(0x08)
	float IndoorInterpTime; // 0x140(0x04)
	float IndoorStateChangedTime; // 0x144(0x04)
	bool bIsIndoors; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float IsPlayerIndoorsInterp; // 0x14c(0x04)
	struct AActor* CurrViewTarget; // 0x150(0x08)
	struct TArray<struct FGameplayTag> GenericTagsToApply; // 0x158(0x10)
	bool bTagApplicationEnabled; // 0x168(0x01)
	enum class EInteriorAudioState Current State; // 0x169(0x01)
	char pad_16A[0x2]; // 0x16a(0x02)
	struct FGameplayTag Current Room Size Tag; // 0x16c(0x08)
	char pad_174[0x4]; // 0x174(0x04)
	struct TMap<struct FGameplayTag, struct UReverbEffect*> Reverbs; // 0x178(0x50)

	void OnViewTargetChanged(struct AActor* New Target, struct AActor* Prev Target); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.OnViewTargetChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CacheViewTarget(); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.CacheViewTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemovePlayerTags(struct AActor* Player, struct TArray<struct FGameplayTag> Array); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.RemovePlayerTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyPlayerTags(struct AActor* Player, struct TArray<struct FGameplayTag> Tag Array); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.ApplyPlayerTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSnowSetupBP(); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.UpdateSnowSetupBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Update(); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InteriorStateChanged(enum class EInteriorAudioState PreviousState, enum class EInteriorAudioState CurrentState); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.InteriorStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void On Room Size Changed(struct FGameplayTag Curr, struct FGameplayTag Prev); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Room Size Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On Room State Changed(enum class EInteriorAudioState Curr, enum class EInteriorAudioState Prev); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Room State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Interior Audio Verb(); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.Update Interior Audio Verb // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_AmbientAudioController(int32_t EntryPoint); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.ExecuteUbergraph_BP_AmbientAudioController // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

