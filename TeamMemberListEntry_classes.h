// WidgetBlueprintGeneratedClass TeamMemberListEntry.TeamMemberListEntry_C
// Size: 0xce8 (Inherited: 0xc98)
struct UTeamMemberListEntry_C : UFortTeamMemberListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc98(0x08)
	struct UWidgetAnimation* Selected; // 0xca0(0x08)
	struct UWidgetAnimation* Hovered; // 0xca8(0x08)
	struct UImage* Arrow; // 0xcb0(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0xcb8(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0xcc0(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0xcc8(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0xcd8(0x10)

	void BP_OnUnhovered(); // Function TeamMemberListEntry.TeamMemberListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function TeamMemberListEntry.TeamMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function TeamMemberListEntry.TeamMemberListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TeamMemberListEntry(int32_t EntryPoint); // Function TeamMemberListEntry.TeamMemberListEntry_C.ExecuteUbergraph_TeamMemberListEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

