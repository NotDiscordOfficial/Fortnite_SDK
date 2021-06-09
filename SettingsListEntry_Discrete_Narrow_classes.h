// WidgetBlueprintGeneratedClass SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C
// Size: 0x320 (Inherited: 0x2f0)
struct USettingsListEntry_Discrete_Narrow_C : UFortSettingsListEntrySetting_Discrete {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* OnHover; // 0x2f8(0x08)
	struct UIconTextButton_C* Button_FirstOption; // 0x300(0x08)
	struct UIconTextButton_C* Button_SecondOption; // 0x308(0x08)
	struct UWidgetSwitcher* OptionsSets; // 0x310(0x08)
	struct UHorizontalBox* Several_Options; // 0x318(0x08)

	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.GetPrimaryGamepadFocusWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SettingsListEntry_Discrete_Narrow(int32_t EntryPoint); // Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.ExecuteUbergraph_SettingsListEntry_Discrete_Narrow // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

