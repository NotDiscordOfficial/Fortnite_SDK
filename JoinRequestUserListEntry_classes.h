// WidgetBlueprintGeneratedClass JoinRequestUserListEntry.JoinRequestUserListEntry_C
// Size: 0xcf0 (Inherited: 0xc90)
struct UJoinRequestUserListEntry_C : UFortSocialUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc90(0x08)
	struct UWidgetAnimation* Selected; // 0xc98(0x08)
	struct UWidgetAnimation* Hovered; // 0xca0(0x08)
	struct UImage* Arrow; // 0xca8(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0xcb0(0x08)
	struct UCommonRichTextBlock* JoinRequest; // 0xcb8(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0xcc0(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0xcc8(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0xcd0(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0xce0(0x10)

	void BP_OnUnhovered(); // Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_JoinRequestUserListEntry(int32_t EntryPoint); // Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.ExecuteUbergraph_JoinRequestUserListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

