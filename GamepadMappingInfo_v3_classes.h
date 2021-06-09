// WidgetBlueprintGeneratedClass GamepadMappingInfo_v3.GamepadMappingInfo_v3_C
// Size: 0x710 (Inherited: 0x288)
struct UGamepadMappingInfo_v3_C : UFortGamepadMappingInfo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCommonBorder* CommonBorder-LeftBumperSeparator; // 0x290(0x08)
	struct UCommonBorder* CommonBorder-RightBumperSeparator; // 0x298(0x08)
	struct UCommonBorder* CommonBorder_Legend; // 0x2a0(0x08)
	struct UDeadzoneAdjustment_C* DeadzoneAdjustment_Look; // 0x2a8(0x08)
	struct UDeadzoneAdjustment_C* DeadzoneAdjustment_Move; // 0x2b0(0x08)
	struct UKeybindWidget_C* DPadDown; // 0x2b8(0x08)
	struct UKeybindWidget_C* DpadDown2; // 0x2c0(0x08)
	struct UGamepadKeyTextButton_C* DpadDown_Custom; // 0x2c8(0x08)
	struct UKeybindWidget_C* DPadLeft; // 0x2d0(0x08)
	struct UKeybindWidget_C* DpadLeft2; // 0x2d8(0x08)
	struct UGamepadKeyTextButton_C* DpadLeft_Custom; // 0x2e0(0x08)
	struct UKeybindWidget_C* DPadRight; // 0x2e8(0x08)
	struct UKeybindWidget_C* DpadRight2; // 0x2f0(0x08)
	struct UGamepadKeyTextButton_C* DpadRight_Custom; // 0x2f8(0x08)
	struct UKeybindWidget_C* DPadUp; // 0x300(0x08)
	struct UKeybindWidget_C* DpadUp2; // 0x308(0x08)
	struct UGamepadKeyTextButton_C* DpadUp_Custom; // 0x310(0x08)
	struct UGamepadKeyTextButton_C* FaceBottom_Custom; // 0x318(0x08)
	struct UKeybindWidget_C* FaceButtonBot; // 0x320(0x08)
	struct UKeybindWidget_C* FaceButtonLeft; // 0x328(0x08)
	struct UKeybindWidget_C* FaceButtonRight; // 0x330(0x08)
	struct UKeybindWidget_C* FaceButtonTop; // 0x338(0x08)
	struct UGamepadKeyTextButton_C* FaceLeft_Custom; // 0x340(0x08)
	struct UGamepadKeyTextButton_C* FaceRight_Custom; // 0x348(0x08)
	struct UGamepadKeyTextButton_C* FaceTop_Custom; // 0x350(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_DeadzoneWarning; // 0x358(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_DoubleTap; // 0x360(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_Hold; // 0x368(0x08)
	struct UGamepadCustomActionSelectorPanel_v3_C* GamepadCustomActionSelectorPanel_v3; // 0x370(0x08)
	struct UHorizontalBox* HorizontalBox-LB+RB; // 0x378(0x08)
	struct UHorizontalBox* HorizontalBox-LB+RT; // 0x380(0x08)
	struct UHorizontalBox* HorizontalBox-LT+RB; // 0x388(0x08)
	struct UHorizontalBox* HorizontalBox_AllText; // 0x390(0x08)
	struct UHorizontalBox* HorizontalBox_CustomButtons; // 0x398(0x08)
	struct UHorizontalTabList_C* HorizontalTabList_CustomModes; // 0x3a0(0x08)
	struct UImage* Image_DoubleTap; // 0x3a8(0x08)
	struct UImage* Image_Gamepad; // 0x3b0(0x08)
	struct UImage* Image_Hold; // 0x3b8(0x08)
	struct UImage* Image_LightBox; // 0x3c0(0x08)
	struct UCommonTextBlock* LB+RBAction; // 0x3c8(0x08)
	struct UCommonTextBlock* LB+RTAction; // 0x3d0(0x08)
	struct UGamepadKeyTextButton_C* LB_Custom; // 0x3d8(0x08)
	struct UKeybindWidget_C* LS; // 0x3e0(0x08)
	struct UGamepadKeyTextButton_C* LS_Click_Custom; // 0x3e8(0x08)
	struct UKeybindWidget_C* LSCombo1; // 0x3f0(0x08)
	struct UKeybindWidget_C* LSCombo2; // 0x3f8(0x08)
	struct UKeybindWidget_C* LStick; // 0x400(0x08)
	struct UKeybindWidget_C* LStick2; // 0x408(0x08)
	struct UKeybindWidget_C* LStickClick; // 0x410(0x08)
	struct UKeybindWidget_C* LStickClick2; // 0x418(0x08)
	struct UKeybindWidget_C* LT; // 0x420(0x08)
	struct UCommonTextBlock* LT+RBAction; // 0x428(0x08)
	struct UGamepadKeyTextButton_C* LT_Custom; // 0x430(0x08)
	struct UKeybindWidget_C* LTCombo; // 0x438(0x08)
	struct UOverlay* Overlay_DeadzoneAdjustment; // 0x440(0x08)
	struct UGamepadKeyTextButton_C* RB_Custom; // 0x448(0x08)
	struct UKeybindWidget_C* RS; // 0x450(0x08)
	struct UGamepadKeyTextButton_C* RS_Click_Custom; // 0x458(0x08)
	struct UKeybindWidget_C* RSCombo; // 0x460(0x08)
	struct UKeybindWidget_C* RSCombo2; // 0x468(0x08)
	struct UKeybindWidget_C* RStick; // 0x470(0x08)
	struct UKeybindWidget_C* RStickClick; // 0x478(0x08)
	struct UKeybindWidget_C* rt; // 0x480(0x08)
	struct UGamepadKeyTextButton_C* RT_Custom; // 0x488(0x08)
	struct UKeybindWidget_C* RTCombo; // 0x490(0x08)
	struct UGamepadKeyTextButton_C* Select_Custom; // 0x498(0x08)
	struct USizeBox* Separator-LB+RBfromLB+RT; // 0x4a0(0x08)
	struct UKeybindWidget_C* SpecialLeft; // 0x4a8(0x08)
	struct UKeybindWidget_C* SpecialRight; // 0x4b0(0x08)
	struct UGamepadKeyTextButton_C* Start_Custom; // 0x4b8(0x08)
	struct UCommonTextBlock* Text_Gamepad_Face_Button_Bottom; // 0x4c0(0x08)
	struct UCommonTextBlock* Text_Gamepad_Face_Button_Left_2; // 0x4c8(0x08)
	struct UCommonTextBlock* Text_Gamepad_Face_Button_Left_3; // 0x4d0(0x08)
	struct UCommonTextBlock* Text_Gamepad_Face_Button_Left_4; // 0x4d8(0x08)
	struct UCommonTextBlock* Text_Gamepad_Face_Button_Right_2; // 0x4e0(0x08)
	struct UCommonTextBlock* Text_Gamepad_Face_Button_Right_3; // 0x4e8(0x08)
	struct UCommonTextBlock* Text_Gamepad_Face_Button_Right_4; // 0x4f0(0x08)
	struct UCommonTextBlock* Text_Gamepad_Face_Button_Top_2; // 0x4f8(0x08)
	struct UCommonTextBlock* Text_Gamepad_Face_Button_Top_3; // 0x500(0x08)
	struct UCommonTextBlock* Text_Gamepad_LB; // 0x508(0x08)
	struct UCommonTextBlock* Text_Gamepad_LT; // 0x510(0x08)
	struct UCommonTextBlock* Text_Gamepad_RB; // 0x518(0x08)
	struct UCommonTextBlock* Text_Gamepad_RS; // 0x520(0x08)
	struct UCommonTextBlock* Text_Gamepad_RS_Click_2; // 0x528(0x08)
	struct UCommonTextBlock* Text_Gamepad_RS_Click_3; // 0x530(0x08)
	struct UCommonTextBlock* Text_Gamepad_RT; // 0x538(0x08)
	struct UCommonTextBlock* Text_Gamepad_Select_2; // 0x540(0x08)
	struct UCommonTextBlock* Text_Gamepad_Select_3; // 0x548(0x08)
	struct UCommonTextBlock* Text_Gamepad_Start; // 0x550(0x08)
	struct UCommonTextBlock* Text_Mode; // 0x558(0x08)
	struct UCommonTextBlock* Text_PS4_Dpad_Down; // 0x560(0x08)
	struct UCommonTextBlock* Text_PS4_Dpad_Left; // 0x568(0x08)
	struct UCommonTextBlock* Text_PS4_Dpad_Right; // 0x570(0x08)
	struct UCommonTextBlock* Text_PS4_Dpad_Up; // 0x578(0x08)
	struct UCommonTextBlock* Text_PS4_LS; // 0x580(0x08)
	struct UCommonTextBlock* Text_PS4_LS_Click_2; // 0x588(0x08)
	struct UCommonTextBlock* Text_PS4_LS_Click_3; // 0x590(0x08)
	struct UCommonTextBlock* Text_Xbox_Dpad_Down; // 0x598(0x08)
	struct UCommonTextBlock* Text_Xbox_Dpad_Left; // 0x5a0(0x08)
	struct UCommonTextBlock* Text_Xbox_Dpad_Right; // 0x5a8(0x08)
	struct UCommonTextBlock* Text_Xbox_Dpad_Up; // 0x5b0(0x08)
	struct UCommonTextBlock* Text_Xbox_LS; // 0x5b8(0x08)
	struct UCommonTextBlock* Text_Xbox_LS_Click_2; // 0x5c0(0x08)
	struct UCommonTextBlock* Text_Xbox_LS_Click_3; // 0x5c8(0x08)
	struct UVerticalBox* VerticalBox_PS4_LS_And_Dpad; // 0x5d0(0x08)
	struct UVerticalBox* VerticalBox_Xbox_LS_And_Dpad; // 0x5d8(0x08)
	struct UVerticalBox* VerticalBoxMenu+Map; // 0x5e0(0x08)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> XB1 Images; // 0x5e8(0x10)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> PS4 Images; // 0x5f8(0x10)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> Appropriate Platform Images; // 0x608(0x10)
	struct TArray<struct UCommonTextBlock*> GamepadConfigTextWidgets; // 0x618(0x10)
	struct TArray<struct FText> ButtonTextLabels_STW_CombatPro_Build; // 0x628(0x10)
	struct TArray<struct FText> ButtonTextLabels_STW_CombatPro_Combat; // 0x638(0x10)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> Erebus Images; // 0x648(0x10)
	struct TArray<struct FText> ButtonTextLabels_STW_BuilderPro_Build; // 0x658(0x10)
	struct UGamepadKeyTextButton_C* LastClickedButton; // 0x668(0x08)
	enum class EFortInputActionGroup CurrentInputActionGroup; // 0x670(0x01)
	char pad_671[0x7]; // 0x671(0x07)
	struct FMulticastInlineDelegate CustomKeySelected; // 0x678(0x10)
	struct TArray<struct UGamepadKeyTextButton_C*> CustomKeyButtons; // 0x688(0x10)
	struct FMulticastInlineDelegate Image_LightboxClicked; // 0x698(0x10)
	struct FName CombatModeIdName; // 0x6a8(0x08)
	struct FName BuildModeIdName; // 0x6b0(0x08)
	struct FName EditModeIdName; // 0x6b8(0x08)
	struct FMulticastInlineDelegate CustomButtonNavLeft; // 0x6c0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> Generic Images; // 0x6d0(0x10)
	struct FName DeadZoneMoveIdName; // 0x6e0(0x08)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> XSX Images; // 0x6e8(0x10)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> PS5 Images; // 0x6f8(0x10)
	struct FName LTMAbilitiesModeIdName; // 0x708(0x08)

	void ShowAthenaLTMAbilitiesTab(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowAthenaLTMAbilitiesTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideAthenaLTMAbilitiesTab(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideAthenaLTMAbilitiesTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowDeadZoneTab(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowDeadZoneTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideDeadZoneTab(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideDeadZoneTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GamepadMappingInfoNavLeft(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GamepadMappingInfoNavLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowEditModeTab(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowEditModeTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideEditModeTab(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideEditModeTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FEventReply On_Image_LightBox_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.On_Image_LightBox_MouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetCustomButtonDataForKey(struct FKey Key, struct FName ActionName, struct FText DescText); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetCustomButtonDataForKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextForMode(enum class EFortInputActionGroup Selection); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextForMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetButtonTextLabelsFromTextArray(struct TArray<struct FText> Array); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetButtonTextLabelsFromTextArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeListOfButtonTextForSTW_BuilderProBuild(struct TArray<struct FText> ButtonTextLabels); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTW_BuilderProBuild // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetControllerImage(struct TSoftObjectPtr<struct UTexture2D> Texture); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetControllerImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void ClearAllComboTextLines(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ClearAllComboTextLines // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeListOfButtonTextForSTWCombatProCombat(struct TArray<struct FText> ButtonTextLabels); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProCombat // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextFieldVisibilityForExtraLine(struct UTextBlock* TextWidget); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextFieldVisibilityForExtraLine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetDesiredSlateVisibilityForAbilityChordFromTextDisplay(struct UTextBlock* TextWidget, enum class ESlateVisibility DesiredSlateVisibility); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void InitializeListOfButtonTextForSTWCombatProBuild(struct TArray<struct FText> ButtonTextLabels); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProBuild // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeListOfButtonLabelTextWidgets(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonLabelTextWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Handle Config Changed Hide or Show Unused Text Lines(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed Hide or Show Unused Text Lines // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Handle Config Changed STW Combat Mode(int32_t Config); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Combat Mode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Handle Config Changed STW Build Mode(int32_t Config); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Build Mode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleConfigChanged(enum class EFortInputActionGroup Mode, int32_t Config); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleConfigChanged_Athena(enum class EFortInputActionGroup Mode, int32_t Config); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged_Athena // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnConfigChanged(enum class EFortInputActionGroup Mode, int32_t Config); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnConfigChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Displayed Mapping(int32_t Platform, enum class EFortInputActionGroup Mode, int32_t Configuration); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Displayed Mapping // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_CDBC1B27496027B96D10BC9A64224F3D(struct UObject* Loaded); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnLoaded_CDBC1B27496027B96D10BC9A64224F3D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Update Controller Images(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Controller Images // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnButtonClicked_Bind(struct UCommonButtonLegacy* Button); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnButtonClicked_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCustomButtons(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.UpdateCustomButtons // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeadZoneTabSelected(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabSelected // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeadZoneTabDeselected(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabDeselected // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeadzoneMoveResetButtonClicked_Bind(struct UCommonButtonLegacy* Button); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneMoveResetButtonClicked_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeadzoneLookResetButtonClicked_Bind(struct UCommonButtonLegacy* Button); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneLookResetButtonClicked_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GamepadMappingInfo_v3(int32_t EntryPoint); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ExecuteUbergraph_GamepadMappingInfo_v3 // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void CustomButtonNavLeft__DelegateSignature(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomButtonNavLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Image_LightboxClicked__DelegateSignature(); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Image_LightboxClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CustomKeySelected__DelegateSignature(struct FKey Key); // Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomKeySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

