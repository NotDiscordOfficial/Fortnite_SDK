// WidgetBlueprintGeneratedClass SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C
// Size: 0xc48 (Inherited: 0xc20)
struct USocialPanel_TopBarExtension_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Hovered; // 0xc28(0x08)
	struct UImage* Arrow; // 0xc30(0x08)
	struct UImage* Image_PlatformIcon; // 0xc38(0x08)
	struct UMiniPartyBar_C* MiniPartyBar; // 0xc40(0x08)

	void BP_OnHovered(); // Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SocialPanel_TopBarExtension(int32_t EntryPoint); // Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.ExecuteUbergraph_SocialPanel_TopBarExtension // (Final|UbergraphFunction) // @ game+0xda7c34
};

