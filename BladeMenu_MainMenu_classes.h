// WidgetBlueprintGeneratedClass BladeMenu_MainMenu.BladeMenu_MainMenu_C
// Size: 0x638 (Inherited: 0x378)
struct UBladeMenu_MainMenu_C : UFortBladeMenu_MainMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UWidgetAnimation* OnClose; // 0x380(0x08)
	struct UWidgetAnimation* OnOpen; // 0x388(0x08)
	struct UMainMenuButton_C* AthenaMainMenuClearPlayerDataButton; // 0x390(0x08)
	struct UAthenaMainMenuLeaveButton_C* AthenaMainMenuLeaveButton; // 0x398(0x08)
	struct UMainMenuButton_C* Button_MyIsland; // 0x3a0(0x08)
	struct UMainMenuButton_C* Button_Store; // 0x3a8(0x08)
	struct UMainMenuButton_C* ButtonBacchusHelp; // 0x3b0(0x08)
	struct UMainMenuButton_C* ButtonCredits; // 0x3b8(0x08)
	struct UMainMenuButton_C* ButtonHUDLayoutTool; // 0x3c0(0x08)
	struct UMainMenuButton_C* ButtonNews; // 0x3c8(0x08)
	struct UMainMenuButton_C* ButtonSupport; // 0x3d0(0x08)
	struct UMainMenuButton_C* CheatsButton; // 0x3d8(0x08)
	struct UMainMenuButton_C* CodeOfConduct; // 0x3e0(0x08)
	struct UMainMenuButton_C* DisableModeratorModeButton; // 0x3e8(0x08)
	struct UMainMenuButton_C* EnableModeratorModeButton; // 0x3f0(0x08)
	struct UMainMenuButton_C* ExitButton; // 0x3f8(0x08)
	struct UMainMenuButton_C* ExportIslandButton; // 0x400(0x08)
	struct UFortMobileImage* Image_MenuIcon_2; // 0x408(0x08)
	struct UMainMenuButton_C* Legal; // 0x410(0x08)
	struct ULiveStreamMenuButtonToggle_C* LiveStreamMenuButtonToggle; // 0x418(0x08)
	struct UMainMenuButton_C* LockerButton; // 0x420(0x08)
	struct UMainMenuButton_C* LogoutButton; // 0x428(0x08)
	struct UMinigameButtons_C* MinigameButtons; // 0x430(0x08)
	struct UVerticalBox* ModeratorMode; // 0x438(0x08)
	struct UMainMenuButton_C* NewPlayerFeedback; // 0x440(0x08)
	struct UMainMenuButton_C* ParentalControlsButton; // 0x448(0x08)
	struct UMainMenuButton_C* RespawnButton; // 0x450(0x08)
	struct USafeZone* SafeZone_Content; // 0x458(0x08)
	struct USafeZone* SafeZoneRatingIcons; // 0x460(0x08)
	struct UMainMenuButton_C* TeamSelectButton; // 0x468(0x08)
	struct UCommonTextBlock* Text_MenuTitle; // 0x470(0x08)
	struct UCommonTextBlock* TextLowPowerMode; // 0x478(0x08)
	struct Uwindowchromebuttons_C* windowchromebuttons; // 0x480(0x08)
	struct UOptionsMenu_C* OptionsMenu; // 0x488(0x08)
	SoftClassProperty CreditsScreenClass; // 0x490(0x28)
	SoftClassProperty LegalInfoClass; // 0x4b8(0x28)
	SoftClassProperty AthenaNewsClass; // 0x4e0(0x28)
	SoftClassProperty RespawnClass; // 0x508(0x28)
	SoftClassProperty MobileControlsHelpClass; // 0x530(0x28)
	struct AFortMinigameSettingsBuilding* Machine; // 0x558(0x08)
	SoftClassProperty TeamSelectWidgetClass; // 0x560(0x28)
	struct FName SettingTabToOpen; // 0x588(0x08)
	SoftClassProperty AthenaMOTDWidget; // 0x590(0x28)
	SoftClassProperty ParentalControlsClass_New; // 0x5b8(0x28)
	SoftClassProperty PlayerClearIslandDataClass; // 0x5e0(0x28)
	struct FText Player Clear Persistence Data Pregame Description; // 0x608(0x18)
	struct FText Player Clear Persistence Data in Progress Description; // 0x620(0x18)

	void Close(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowMinigameButtons(struct AFortVolume* Volume, struct AFortPlayerControllerAthena* Player, struct AFortGameStateAthena* FortGameStateAthena, bool bResult); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.ShowMinigameButtons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UpdateCreativeButtonsVisibility(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.UpdateCreativeButtonsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateRespawnWidgetVisibility(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.UpdateRespawnWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Team Select Visibility(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.Update Team Select Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleOpened(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.HandleOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetLegalButtonVisibility(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.SetLegalButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetSupportButtonVisibility(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.SetSupportButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Handle Low Power Mode(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.Handle Low Power Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateLowPowerMessage(bool PassThrough); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.UpdateLowPowerMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeMainMenu(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.InitializeMainMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DialogResult_13A3B92E4AD04C85D3EBFCB4331D32CA(enum class EFortDialogResult Result, struct FName ResultName); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.DialogResult_13A3B92E4AD04C85D3EBFCB4331D32CA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DialogResult_249B76DB49778A79985F7E953CDD60BD(enum class EFortDialogResult Result, struct FName ResultName); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.DialogResult_249B76DB49778A79985F7E953CDD60BD // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_68346168454CE4BD30A1459D7C362A80(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_68346168454CE4BD30A1459D7C362A80 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_06E498CF409465D990D12C97DC0A19FB(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_06E498CF409465D990D12C97DC0A19FB // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_9705B2DA4E1935041A94D1BCE262B043(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_9705B2DA4E1935041A94D1BCE262B043 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_DB4AEC7B48BCA8595C98A8AD430E3ECC(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_DB4AEC7B48BCA8595C98A8AD430E3ECC // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_713FC70C4ABDCB2B10F83992B0F2CFBA(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_713FC70C4ABDCB2B10F83992B0F2CFBA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_5ACD562A46D3600D9E96DD93D9BA79CB(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_5ACD562A46D3600D9E96DD93D9BA79CB // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_5E4638054E1B5D43CC83EA89C54063C9(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_5E4638054E1B5D43CC83EA89C54063C9 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_3602692F4ADF61C0F3DB968BD3E6C0DB(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_3602692F4ADF61C0F3DB968BD3E6C0DB // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_1B16FD0540EB01F71EE4CB9487DE008F(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_1B16FD0540EB01F71EE4CB9487DE008F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_DBC095954402329D4BF52AB37EE431FE(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_DBC095954402329D4BF52AB37EE431FE // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_367A73034FD99CE63E29E3AE4D9152D9(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_367A73034FD99CE63E29E3AE4D9152D9 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_1BFCCA9642A0481B2AC5C98C395D0901(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_1BFCCA9642A0481B2AC5C98C395D0901 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_4D843623491F402A24E11BAEC2F2EA92(struct UUserWidget* UserWidget); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnComplete_4D843623491F402A24E11BAEC2F2EA92 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_321_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_321_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__TeamSelectButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__TeamSelectButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__RespawnButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__RespawnButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent_294_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent_294_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_3_StartButtonClicked__DelegateSignature(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_3_StartButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_4_EndButtonClicked__DelegateSignature(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_4_EndButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void UpdateMinigameButtons(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.UpdateMinigameButtons // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Bind To State Change Delegate(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.Bind To State Change Delegate // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMinigameStateChanged(struct AFortMinigame* Minigame, enum class EFortMinigameState MinigameState); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnMinigameStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnOpened(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnClosed(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnClosed // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCloseAnimationFinished(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnCloseAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ParentalControlsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__ParentalControlsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CheatsButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__CheatsButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_BackToHub_1_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__Button_BackToHub_1_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnOpenSettings(struct FName TabNameID, struct FString SettingToSelect); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.OnOpenSettings // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Store_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__Button_Store_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__LockerButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__LockerButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ExportIslandButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__ExportIslandButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__NewPlayerFeedback_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__NewPlayerFeedback_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__EnableModeratorModeButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__EnableModeratorModeButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Handle On Is Creative Moderator Mode Active Changed(bool bIsCreativeModeratorModeActive); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.Handle On Is Creative Moderator Mode Active Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__EnableModeratorModeButton_1_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__EnableModeratorModeButton_1_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__AthenaMainMenuClearPlayerDataButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.BndEvt__AthenaMainMenuClearPlayerDataButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BladeMenu_MainMenu(int32_t EntryPoint); // Function BladeMenu_MainMenu.BladeMenu_MainMenu_C.ExecuteUbergraph_BladeMenu_MainMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

