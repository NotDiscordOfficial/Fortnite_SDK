// WidgetBlueprintGeneratedClass SocialPanelTab.SocialPanelTab_C
// Size: 0xcb0 (Inherited: 0xc88)
struct USocialPanelTab_C : UFortSocialTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc88(0x08)
	struct UWidgetAnimation* Unselected; // 0xc90(0x08)
	struct UWidgetAnimation* OnFriendsOnlineUpdated; // 0xc98(0x08)
	struct UWidgetAnimation* Hovered; // 0xca0(0x08)
	struct UWidgetAnimation* Selected; // 0xca8(0x08)

	void BP_OnHovered(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SocialPanelTab(int32_t EntryPoint); // Function SocialPanelTab.SocialPanelTab_C.ExecuteUbergraph_SocialPanelTab // (Final|UbergraphFunction) // @ game+0xda7c34
};

