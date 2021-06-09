// WidgetBlueprintGeneratedClass BacchusShowdownScreen.BacchusShowdownScreen_C
// Size: 0x5a0 (Inherited: 0x4f8)
struct UBacchusShowdownScreen_C : UFortShowdownScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UWidgetAnimation* Outro; // 0x500(0x08)
	struct UWidgetAnimation* Intro; // 0x508(0x08)
	struct UCircleArrowButton_C* CircleArrowButton_Left; // 0x510(0x08)
	struct UCircleArrowButton_C* CircleArrowButton_Right; // 0x518(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_ErrorSwitcher; // 0x520(0x08)
	struct UImage* Image_Bg; // 0x528(0x08)
	struct UCommonTextBlock* NoTournamentsContent; // 0x530(0x08)
	struct UOverlay* Overlay_NoTournamentContent; // 0x538(0x08)
	struct UShowdownTournamentTile_C* ShowdownTournamentTile; // 0x540(0x08)
	struct UShowdownTournamentTile_C* ShowdownTournamentTile_1; // 0x548(0x08)
	struct UShowdownTournamentTile_C* ShowdownTournamentTile_2; // 0x550(0x08)
	struct USizeBox* SizeBox_Posters; // 0x558(0x08)
	struct UFortSwipePanel* SwipePanel; // 0x560(0x08)
	struct UOverlay* TournamentsContent; // 0x568(0x08)
	struct FSlateColor PrimaryColor; // 0x570(0x28)
	struct UWidget* SelectedTile; // 0x598(0x08)

	void BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature(); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature(); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnInputModeChanged(bool bUsingGamepad); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void TournamentListSelect(struct UWidget* CurrentWidget); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.TournamentListSelect // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SelectedFrontTournament(bool bFrontIsSelected); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.SelectedFrontTournament // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SelectedEndTournament(bool bEndIsSelected); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.SelectedEndTournament // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeactivated(); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BacchusShowdownScreen(int32_t EntryPoint); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.ExecuteUbergraph_BacchusShowdownScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

