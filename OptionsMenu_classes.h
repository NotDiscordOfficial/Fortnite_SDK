// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
// Size: 0xd10 (Inherited: 0xd08)
struct UOptionsMenu_C : UFortOptionsMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd08(0x08)

	void LoadTabClasses(); // Function OptionsMenu.OptionsMenu_C.LoadTabClasses // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Handle Tab Gamepad Config Action Handler States_SAVE(); // Function OptionsMenu.OptionsMenu_C.Handle Tab Gamepad Config Action Handler States_SAVE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DialogResult_826C59EC4C294BC872A644878B35A13B(enum class EFortDialogResult Result, struct FName ResultName); // Function OptionsMenu.OptionsMenu_C.DialogResult_826C59EC4C294BC872A644878B35A13B // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DialogResult_B31FF5BD4C0772716F27509EA83B418E(enum class EFortDialogResult Result, struct FName ResultName); // Function OptionsMenu.OptionsMenu_C.DialogResult_B31FF5BD4C0772716F27509EA83B418E // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function OptionsMenu.OptionsMenu_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(struct FName TabId, struct UCommonButtonLegacy* TabButton); // Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void HandleTabGamePadActionsNeedBinds(struct TArray<struct FText> ScreenLabels); // Function OptionsMenu.OptionsMenu_C.HandleTabGamePadActionsNeedBinds // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleTabGamepadConfigActionHandlerStates(); // Function OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSettingsTabListPopulated(); // Function OptionsMenu.OptionsMenu_C.OnSettingsTabListPopulated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_OptionsMenu(int32_t EntryPoint); // Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

