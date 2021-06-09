// WidgetBlueprintGeneratedClass MissedInvitesEntry.MissedInvitesEntry_C
// Size: 0xc98 (Inherited: 0xc48)
struct UMissedInvitesEntry_C : UFortMissedInvitesListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc48(0x08)
	struct UWidgetAnimation* Selected; // 0xc50(0x08)
	struct UWidgetAnimation* Hovered; // 0xc58(0x08)
	struct UBorder* AnimatedInputBorder; // 0xc60(0x08)
	struct UImage* Arrow; // 0xc68(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0xc70(0x08)
	struct UBorder* EntryBorder; // 0xc78(0x08)
	struct USizeBox* Exclamation; // 0xc80(0x08)
	struct UCommonRichTextBlock* Text_MissedInvitesText; // 0xc88(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0xc90(0x08)

	void BP_OnUnhovered(); // Function MissedInvitesEntry.MissedInvitesEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function MissedInvitesEntry.MissedInvitesEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function MissedInvitesEntry.MissedInvitesEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MissedInvitesEntry(int32_t EntryPoint); // Function MissedInvitesEntry.MissedInvitesEntry_C.ExecuteUbergraph_MissedInvitesEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

