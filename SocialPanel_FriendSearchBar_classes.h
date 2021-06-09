// WidgetBlueprintGeneratedClass SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C
// Size: 0xcf0 (Inherited: 0xcb8)
struct USocialPanel_FriendSearchBar_C : UFortFriendSearchButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xcb8(0x08)
	struct UWidgetAnimation* OnHovered; // 0xcc0(0x08)
	struct UImage* AddFriendBanIcon; // 0xcc8(0x08)
	struct UBorder* ClickCapture; // 0xcd0(0x08)
	struct UCommonRichTextBlock* RichText_CannotAddFriends; // 0xcd8(0x08)
	struct UCommonRichTextBlock* RichText_SocialBan; // 0xce0(0x08)
	struct UFortMobileImage* SharingIcon; // 0xce8(0x08)

	struct FEventReply On_ClickCapture_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.On_ClickCapture_MouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SocialPanel_FriendSearchBar(int32_t EntryPoint); // Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.ExecuteUbergraph_SocialPanel_FriendSearchBar // (Final|UbergraphFunction) // @ game+0xda7c34
};

