// WidgetBlueprintGeneratedClass InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C
// Size: 0xce0 (Inherited: 0xc70)
struct UInviteListEntry_FriendInvite_XS_C : UFortConnectionsUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc70(0x08)
	struct UWidgetAnimation* Selected; // 0xc78(0x08)
	struct UWidgetAnimation* Hovered; // 0xc80(0x08)
	struct UImage* Arrow; // 0xc88(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0xc90(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0xc98(0x08)
	struct UBorder* EntryBorder; // 0xca0(0x08)
	struct UCommonRichTextBlock* Text_SentRequest; // 0xca8(0x08)
	struct FLinearColor Online; // 0xcb0(0x10)
	struct FLinearColor Offline; // 0xcc0(0x10)
	struct FLinearColor Away; // 0xcd0(0x10)

	void HandleOnlineIndicatorView(char OnlineStatus); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.HandleOnlineIndicatorView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_InviteListEntry_FriendInvite_XS(int32_t EntryPoint); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.ExecuteUbergraph_InviteListEntry_FriendInvite_XS // (Final|UbergraphFunction) // @ game+0xda7c34
};

