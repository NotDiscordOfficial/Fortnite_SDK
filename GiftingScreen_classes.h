// WidgetBlueprintGeneratedClass GiftingScreen.GiftingScreen_C
// Size: 0x7c8 (Inherited: 0x740)
struct UGiftingScreen_C : UFortGiftingScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x740(0x08)
	struct UWidgetAnimation* ReportSent; // 0x748(0x08)
	struct UWidgetAnimation* Intro; // 0x750(0x08)
	struct UCommonBorder* Border_Summary; // 0x758(0x08)
	struct UIconTextButton_C* Button_TabGiftWrap; // 0x760(0x08)
	struct UCircularThrobber* CircularThrobber_1; // 0x768(0x08)
	struct UEditableText* EditableText_ReasonField; // 0x770(0x08)
	struct UHorizontalBox* HBox_Price; // 0x778(0x08)
	struct UImage* Image_5; // 0x780(0x08)
	struct USafeZone* SafeZone_1; // 0x788(0x08)
	struct USizeBox* SB_StackingEntry; // 0x790(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Buttons; // 0x798(0x08)
	struct UWidgetSwitcher* Switcher_MainPanelContent; // 0x7a0(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_TabContent; // 0x7a8(0x08)
	struct UVerticalBox* VBox_ChosenItem; // 0x7b0(0x08)
	struct UVerticalBox* VBox_MainContent; // 0x7b8(0x08)
	struct UVerticalBox* VBox_SendingSpinner; // 0x7c0(0x08)

	void HandleMoreInfoClicked(bool bPassThrough); // Function GiftingScreen.GiftingScreen_C.HandleMoreInfoClicked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function GiftingScreen.GiftingScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnOfferSet(struct UFortStoreFrontOfferInfo* NewOfferInfo); // Function GiftingScreen.GiftingScreen_C.OnOfferSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBeginGiftingSubmission(); // Function GiftingScreen.GiftingScreen_C.OnBeginGiftingSubmission // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEndGiftingSubmission(bool bSuccess); // Function GiftingScreen.GiftingScreen_C.OnEndGiftingSubmission // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function GiftingScreen.GiftingScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ShowGetVBucksButton(); // Function GiftingScreen.GiftingScreen_C.ShowGetVBucksButton // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ShowContinueButton(); // Function GiftingScreen.GiftingScreen_C.ShowContinueButton // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ShowSendButton(); // Function GiftingScreen.GiftingScreen_C.ShowSendButton // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ActiveFriendSelectTab(); // Function GiftingScreen.GiftingScreen_C.ActiveFriendSelectTab // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ActiveWrapGriftTab(); // Function GiftingScreen.GiftingScreen_C.ActiveWrapGriftTab // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GiftingScreen(int32_t EntryPoint); // Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen // (Final|UbergraphFunction) // @ game+0xda7c34
};

