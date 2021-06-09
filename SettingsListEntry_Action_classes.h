// WidgetBlueprintGeneratedClass SettingsListEntry_Action.SettingsListEntry_Action_C
// Size: 0x2e8 (Inherited: 0x2d8)
struct USettingsListEntry_Action_C : UFortSettingsListEntrySetting_Action {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* OnHover; // 0x2e0(0x08)

	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function SettingsListEntry_Action.SettingsListEntry_Action_C.GetPrimaryGamepadFocusWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSettingAssigned(struct FText ActionText); // Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnSettingAssigned // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SettingsListEntry_Action(int32_t EntryPoint); // Function SettingsListEntry_Action.SettingsListEntry_Action_C.ExecuteUbergraph_SettingsListEntry_Action // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

