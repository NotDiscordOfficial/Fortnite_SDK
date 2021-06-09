// WidgetBlueprintGeneratedClass LocalUserSettingTitle.LocalUserSettingTitle_C
// Size: 0xc50 (Inherited: 0xc28)
struct ULocalUserSettingTitle_C : UFortLocalUserSettingTitleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc28(0x08)
	struct UWidgetAnimation* OnExpansion; // 0xc30(0x08)
	struct UWidgetAnimation* OnHover; // 0xc38(0x08)
	struct UImage* ExpandDirectionTick; // 0xc40(0x08)
	struct USizeBox* SB_EntryContent; // 0xc48(0x08)

	void Construct(); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnExpansionChanged(bool bIsExpanded); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.OnExpansionChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LocalUserSettingTitle(int32_t EntryPoint); // Function LocalUserSettingTitle.LocalUserSettingTitle_C.ExecuteUbergraph_LocalUserSettingTitle // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

