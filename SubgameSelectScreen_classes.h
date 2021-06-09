// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
// Size: 0x3ec (Inherited: 0x3b8)
struct USubgameSelectScreen_C : UFortSubgameSelectScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UOverlay* ModeSelect; // 0x3c0(0x08)
	struct UProgressModalWidget_C* LeavingMatchmakingDialog; // 0x3c8(0x08)
	struct UMaterialInstanceDynamic* MID-Keyart; // 0x3d0(0x08)
	struct TArray<struct UTexture*> TextureCycle; // 0x3d8(0x10)
	int32_t TextureCycleIndex; // 0x3e8(0x04)

	void IsMinorShutdownWarningEnabled(bool Enabled); // Function SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool IsBusyMatchmaking(); // Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmaking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void AdvanceTextureCycle(); // Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceTextureCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeTextureCycle(); // Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeTextureCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEventEnded_57187EC14A536D0960088EB25BDF39E5(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventEnded_57187EC14A536D0960088EB25BDF39E5 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEventUpdated_57187EC14A536D0960088EB25BDF39E5(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventUpdated_57187EC14A536D0960088EB25BDF39E5 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEventActive_57187EC14A536D0960088EB25BDF39E5(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventActive_57187EC14A536D0960088EB25BDF39E5 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function SubgameSelectScreen.SubgameSelectScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SubgameSelectScreen(int32_t EntryPoint); // Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

