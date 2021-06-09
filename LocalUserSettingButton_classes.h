// WidgetBlueprintGeneratedClass LocalUserSettingButton.LocalUserSettingButton_C
// Size: 0xc58 (Inherited: 0xc38)
struct ULocalUserSettingButton_C : UFortLocalUserSettingButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc38(0x08)
	struct UWidgetAnimation* OnHover; // 0xc40(0x08)
	struct UBorder* Border_InteractionIndicator; // 0xc48(0x08)
	struct UImage* Image_AnimatedArrow; // 0xc50(0x08)

	void BP_OnHovered(); // Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LocalUserSettingButton(int32_t EntryPoint); // Function LocalUserSettingButton.LocalUserSettingButton_C.ExecuteUbergraph_LocalUserSettingButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

