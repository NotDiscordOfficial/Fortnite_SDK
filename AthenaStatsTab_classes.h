// WidgetBlueprintGeneratedClass AthenaStatsTab.AthenaStatsTab_C
// Size: 0x710 (Inherited: 0x638)
struct UAthenaStatsTab_C : UAthenaStatsScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x638(0x08)
	struct UWidgetAnimation* Entrance; // 0x640(0x08)
	struct UWidgetAnimation* Tabs_Paginate; // 0x648(0x08)
	struct UCommonTextBlock* AccountLevelLabel; // 0x650(0x08)
	struct UCloseButton_C* CloseButton; // 0x658(0x08)
	struct UImage* CloseIcon; // 0x660(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_1; // 0x668(0x08)
	struct UImage* Divider; // 0x670(0x08)
	struct UImage* Divider1; // 0x678(0x08)
	struct UImage* Divider2; // 0x680(0x08)
	struct UCommonTextBlock* FriendMatchXpBoostPointsLabel; // 0x688(0x08)
	struct UHorizontalBox* HBoxNoStats; // 0x690(0x08)
	struct UCommonWidgetSwitcherLegacy* HiddenSwitcher; // 0x698(0x08)
	struct UHorizontalBox* LastUpdatedTimeBox; // 0x6a0(0x08)
	struct UCommonWidgetSwitcherLegacy* MainStatWidgetSwitcher; // 0x6a8(0x08)
	struct UCommonTextBlock* MatchXpBoostPointsLabel; // 0x6b0(0x08)
	struct UPanelButton_C* MobileCloseButton_Disabled; // 0x6b8(0x08)
	struct UCommonTextBlock* NoStatsText; // 0x6c0(0x08)
	struct UOverlay* OverlayCloseButton_Disabled; // 0x6c8(0x08)
	struct UPlayerRankEmblem_C* PlayerRankEmblem; // 0x6d0(0x08)
	struct UImage* ProgressSpinner; // 0x6d8(0x08)
	struct UCommonTextBlock* SeasonLabel; // 0x6e0(0x08)
	struct UHorizontalBox* UpdatingBox; // 0x6e8(0x08)
	struct UVerticalBox* VBoxbannerstats; // 0x6f0(0x08)
	struct UVerticalBox* VBoxStats; // 0x6f8(0x08)
	struct FDataTableRowHandle Back Action; // 0x700(0x10)

	void GetFriendMatchXpBoostText(struct FText Result); // Function AthenaStatsTab.AthenaStatsTab_C.GetFriendMatchXpBoostText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct FText GetAccountLevelText(); // Function AthenaStatsTab.AthenaStatsTab_C.GetAccountLevelText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Init Back Action(); // Function AthenaStatsTab.AthenaStatsTab_C.Init Back Action // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBack(bool PassThrough); // Function AthenaStatsTab.AthenaStatsTab_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaStatsTab.AthenaStatsTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaStatsTab.AthenaStatsTab_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnQueryFinished(bool bWasSuccessful, bool bHasStatsToDisplay); // Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(struct FName TabId); // Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnQueryStarted(); // Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInputMethodChanged_Event_1(enum class ECommonInputType bNewInputType); // Function AthenaStatsTab.AthenaStatsTab_C.OnInputMethodChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void SetPlatformButtonText(struct FText PlatformButtonText); // Function AthenaStatsTab.AthenaStatsTab_C.SetPlatformButtonText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaStatsTab(int32_t EntryPoint); // Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

