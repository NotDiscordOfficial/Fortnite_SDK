// BlueprintGeneratedClass Creative_Enabled_Component.Creative_Enabled_Component_C
// Size: 0x164 (Inherited: 0xb8)
struct UCreative_Enabled_Component_C : UCreative_DeviceComponent_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct FCreative_EnabledState EnabledState; // 0xc0(0x08)
	struct FMulticastInlineDelegate On Enabled State Changed; // 0xc8(0x10)
	bool EnabledDuringPlayMode; // 0xd8(0x01)
	bool EnabledDuringEditMode; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
	struct FMulticastInlineDelegate On Reset Complete; // 0xe0(0x10)
	struct FTimerHandle Reset Timer; // 0xf0(0x08)
	struct TSet<enum class EFortMinigameState> IgnorePhases; // 0xf8(0x50)
	float ResetDelay; // 0x148(0x04)
	int32_t Enabled Index; // 0x14c(0x04)
	bool Can be Enabled During Edit Mode; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct UFortMinigameLogicComponent* Logic Component; // 0x158(0x08)
	bool Switch On Phase Change; // 0x160(0x01)
	bool Switch On Play Change; // 0x161(0x01)
	bool CanBeEnabledDuringPreview; // 0x162(0x01)
	bool Check Phase Change During Play Switch; // 0x163(0x01)

	void Can be Enabled(bool TRUE); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.Can be Enabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnRep_EIsEnabled(); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.OnRep_EIsEnabled // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IsResetting(bool TRUE, float Remaining Time); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.IsResetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Reset Delay Start(float Delay); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.Reset Delay Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Reset Delay Complete(); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.Reset Delay Complete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Enabled on Play Mode(bool Play Mode); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled on Play Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Enabled(bool bEnabled); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IsEnabled(bool Enabled); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.IsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Set Enabled on Phase(enum class EFortMinigameState State, int32_t EnabledIndex); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled on Phase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Initialize Component(struct UFortMinigameLogicComponent* Logic Component, int32_t Enabled Index); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.Initialize Component // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Bind to Minigame(struct AFortMinigame* Minigame); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.Bind to Minigame // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Minigame State Changed(struct AFortMinigame* Minigame, enum class EFortMinigameState MinigameState); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.Minigame State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Minigame Play Mode Changed(struct AFortMinigame* Minigame, bool bIsInPlayMode); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.Minigame Play Mode Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Creative_Enabled_Component(int32_t EntryPoint); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.ExecuteUbergraph_Creative_Enabled_Component // (Final|UbergraphFunction) // @ game+0xda7c34
	void On Reset Complete__DelegateSignature(); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.On Reset Complete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On Enabled State Changed__DelegateSignature(bool Enabled); // Function Creative_Enabled_Component.Creative_Enabled_Component_C.On Enabled State Changed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

