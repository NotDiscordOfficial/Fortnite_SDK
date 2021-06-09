// WidgetBlueprintGeneratedClass HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C
// Size: 0x598 (Inherited: 0x4a8)
struct UHUDLayoutToolFireModePanel_C : UHUDLayoutToolFireModePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* ScreenTutorial; // 0x4b0(0x08)
	struct UWidgetAnimation* OnOpen; // 0x4b8(0x08)
	struct UHorizontalBox* AutofireBox; // 0x4c0(0x08)
	struct UFortCheckbox_C* AutofireCheckbox; // 0x4c8(0x08)
	struct UCommonBorder* ClickBlocker; // 0x4d0(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_1; // 0x4d8(0x08)
	struct UIconTextButton_C* CustomButton; // 0x4e0(0x08)
	struct UOverlay* CustomOverlay; // 0x4e8(0x08)
	struct UHorizontalBox* DedicatedButtonBox; // 0x4f0(0x08)
	struct UFortCheckbox_C* DedicatedButtonCheckbox; // 0x4f8(0x08)
	struct UIconTextButton_C* DismissDialogue; // 0x500(0x08)
	struct UFireModeSelectTile_C* FireMode_AutoFire; // 0x508(0x08)
	struct UFireModeSelectTile_C* FireMode_FireButton; // 0x510(0x08)
	struct UFireModeSelectTile_C* FireMode_TapToShoot; // 0x518(0x08)
	struct UCommonTextBlock* FireModeOptionTutorialMessage; // 0x520(0x08)
	struct UWidgetSwitcher* ModeButtonSwitcher; // 0x528(0x08)
	struct UOverlay* PresetOverlay; // 0x530(0x08)
	struct UIconTextButton_C* PresetsButton; // 0x538(0x08)
	struct UCommonTextBlock* PreviewDescriptionText; // 0x540(0x08)
	struct UWidgetSwitcher* SelectionTypeSwitcher; // 0x548(0x08)
	struct UHorizontalBox* TapAnywhereBox; // 0x550(0x08)
	struct UFortCheckbox_C* TapAnywhereCheckbox; // 0x558(0x08)
	struct UCommonTextBlock* TextDescription; // 0x560(0x08)
	struct UIconTextButton_C* TutorialConfirm; // 0x568(0x08)
	struct TArray<struct UFireModeSelectTile_C*> FireOptionTiles; // 0x570(0x10)
	struct UFireModeSelectTile_C* CurSelectedTile; // 0x580(0x08)
	struct FTimerHandle MoviePlayTimer; // 0x588(0x08)
	struct UFireModeSelectTile_C* NextPanelToPlay; // 0x590(0x08)

	void PlayTileMovie(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.PlayTileMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HasSelectedCustomMode(bool Value); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HasSelectedCustomMode // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IsInCustomMode(bool IsCustom); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.IsInCustomMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void SetCustomFireMode(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomFireMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetCustomModeVisibilities(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomModeVisibilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FEventReply OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnMouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitButtonBindings(struct TArray<struct UHUDLayoutToolFireModeButton*> ArrayOfFireModeButtons); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitButtonBindings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleCurSelectedTile(struct UFireModeSelectTile_C* Tile); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleCurSelectedTile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeSelection(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitializeSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayCurFocusedTileMovie(struct UFireModeSelectTile_C* CurFocusedTile); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.PlayCurFocusedTileMovie // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleTileButtonFocused(struct UFireModeSelectTile_C* Tile); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleTileButtonFocused // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NewTileSelected(struct UFireModeSelectTile_C* Tile); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.NewTileSelected // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetOpenState(bool bNewOpenState); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetOpenState // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnFire Mode Changed(enum class EFireModeType NewFireMode); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnFire Mode Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__AutofireCheckbox_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__AutofireCheckbox_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__TapAnywhereCheckbox_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__TapAnywhereCheckbox_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__DedicatedButtonCheckbox_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__DedicatedButtonCheckbox_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void UpdateSelectButtonVisibility(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.UpdateSelectButtonVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeselectTile(struct UFireModeSelectTile_C* Tile); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.DeselectTile // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HUDLayoutToolFireModePanel(int32_t EntryPoint); // Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.ExecuteUbergraph_HUDLayoutToolFireModePanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

