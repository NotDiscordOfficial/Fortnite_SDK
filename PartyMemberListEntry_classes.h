// WidgetBlueprintGeneratedClass PartyMemberListEntry.PartyMemberListEntry_C
// Size: 0xcf0 (Inherited: 0xca0)
struct UPartyMemberListEntry_C : UFortPartyMemberListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xca0(0x08)
	struct UWidgetAnimation* Selected; // 0xca8(0x08)
	struct UWidgetAnimation* Hovered; // 0xcb0(0x08)
	struct UImage* Arrow; // 0xcb8(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0xcc0(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0xcc8(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0xcd0(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0xce0(0x10)

	void BP_OnUnhovered(); // Function PartyMemberListEntry.PartyMemberListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function PartyMemberListEntry.PartyMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function PartyMemberListEntry.PartyMemberListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PartyMemberListEntry(int32_t EntryPoint); // Function PartyMemberListEntry.PartyMemberListEntry_C.ExecuteUbergraph_PartyMemberListEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

