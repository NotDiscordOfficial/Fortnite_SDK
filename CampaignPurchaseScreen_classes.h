// WidgetBlueprintGeneratedClass CampaignPurchaseScreen.CampaignPurchaseScreen_C
// Size: 0x3dc (Inherited: 0x3a8)
struct UCampaignPurchaseScreen_C : UFortCampaignPurchaseScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UWidgetAnimation* SwitchTextures; // 0x3b0(0x08)
	struct UMaterialInstanceDynamic* MID-Keyart; // 0x3b8(0x08)
	struct FTimerHandle CycleTimer; // 0x3c0(0x08)
	struct TArray<struct UTexture*> TextureCycle; // 0x3c8(0x10)
	int32_t TextureCycleIndex; // 0x3d8(0x04)

	void IsMinorShutdownWarningEnabled(bool Enabled); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsMinorShutdownWarningEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void InitializeRedeemButton(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeRedeemButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsBusyMatchmaking(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsBusyMatchmaking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Update(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AdvanceTextureCycle(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.AdvanceTextureCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeTextureCycle(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeTextureCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleTimer(bool Enabled); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ToggleTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnImageCycleTimeElapsed(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnImageCycleTimeElapsed // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_CampaignPurchaseScreen(int32_t EntryPoint); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ExecuteUbergraph_CampaignPurchaseScreen // (Final|UbergraphFunction) // @ game+0xda7c34
};

