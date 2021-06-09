// WidgetBlueprintGeneratedClass LeavePartyListEntry.LeavePartyListEntry_C
// Size: 0xc90 (Inherited: 0xc48)
struct ULeavePartyListEntry_C : UFortLeavePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc48(0x08)
	struct UWidgetAnimation* Selected; // 0xc50(0x08)
	struct UWidgetAnimation* Hovered; // 0xc58(0x08)
	struct UBorder* AnimatedInputBorder; // 0xc60(0x08)
	struct UImage* Arrow; // 0xc68(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0xc70(0x08)
	struct UBorder* EntryBorder; // 0xc78(0x08)
	struct UCommonRichTextBlock* Text_LeavePartyText; // 0xc80(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0xc88(0x08)

	void BP_OnUnhovered(); // Function LeavePartyListEntry.LeavePartyListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function LeavePartyListEntry.LeavePartyListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function LeavePartyListEntry.LeavePartyListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LeavePartyListEntry(int32_t EntryPoint); // Function LeavePartyListEntry.LeavePartyListEntry_C.ExecuteUbergraph_LeavePartyListEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

