// WidgetBlueprintGeneratedClass SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C
// Size: 0xc70 (Inherited: 0xc28)
struct USocialPanel_FriendLinkButton_C : UFortSocialPanelView_FriendLinkButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc28(0x08)
	struct UWidgetAnimation* OnCopied; // 0xc30(0x08)
	struct UWidgetAnimation* OnHovered; // 0xc38(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0xc40(0x08)
	struct UFortMobileImage* SharingIcon; // 0xc48(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_CopyState; // 0xc50(0x08)
	struct UCommonTextBlock* Text_CopyConfirmed; // 0xc58(0x08)
	struct UCommonTextBlock* Text_FriendLinkInstructions; // 0xc60(0x08)
	struct UCommonTextBlock* Text_LinkPrompt; // 0xc68(0x08)

	void BP_OnUnhovered(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCopiedToClipboard(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnCopiedToClipboard // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnShareButtonTypeSet(enum class EFriendLinkShareButtonType Type); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnShareButtonTypeSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SocialPanel_FriendLinkButton(int32_t EntryPoint); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.ExecuteUbergraph_SocialPanel_FriendLinkButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

