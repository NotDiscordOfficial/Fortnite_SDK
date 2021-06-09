// WidgetBlueprintGeneratedClass SettingsRotator_Narrow.SettingsRotator_Narrow_C
// Size: 0xc40 (Inherited: 0xc28)
struct USettingsRotator_Narrow_C : UFortSettingsRotator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc28(0x08)
	struct UWidgetAnimation* RotatorHover; // 0xc30(0x08)
	struct UBorder* Background; // 0xc38(0x08)

	void BP_OnOptionsPopulated(int32_t Count); // Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnOptionSelected(int32_t Index); // Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnOptionSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDefaultOptionSpecified(int32_t DefaultOptionIndex); // Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnDefaultOptionSpecified // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnHover Animation(); // Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.OnHover Animation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnUnHover Animation(); // Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.OnUnHover Animation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SettingsRotator_Narrow(int32_t EntryPoint); // Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.ExecuteUbergraph_SettingsRotator_Narrow // (Final|UbergraphFunction) // @ game+0xda7c34
};

