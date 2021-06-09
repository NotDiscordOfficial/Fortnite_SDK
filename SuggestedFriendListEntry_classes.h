// WidgetBlueprintGeneratedClass SuggestedFriendListEntry.SuggestedFriendListEntry_C
// Size: 0xcd0 (Inherited: 0xc70)
struct USuggestedFriendListEntry_C : UFortConnectionsUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc70(0x08)
	struct UWidgetAnimation* Selected; // 0xc78(0x08)
	struct UWidgetAnimation* Hovered; // 0xc80(0x08)
	struct UImage* Arrow; // 0xc88(0x08)
	struct UBorder* Border_Background; // 0xc90(0x08)
	struct UBorder* Border_Highlight; // 0xc98(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0xca0(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0xca8(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0xcb0(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0xcc0(0x10)

	void BP_OnUnhovered(); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SuggestedFriendListEntry(int32_t EntryPoint); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.ExecuteUbergraph_SuggestedFriendListEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

