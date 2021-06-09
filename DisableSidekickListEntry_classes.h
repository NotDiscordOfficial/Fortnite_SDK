// WidgetBlueprintGeneratedClass DisableSidekickListEntry.DisableSidekickListEntry_C
// Size: 0xcf0 (Inherited: 0xc48)
struct UDisableSidekickListEntry_C : UFortDisableSidekickListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc48(0x08)
	struct UWidgetAnimation* Selected; // 0xc50(0x08)
	struct UWidgetAnimation* Hovered; // 0xc58(0x08)
	struct UBorder* AnimatedInputBorder; // 0xc60(0x08)
	struct UImage* Arrow; // 0xc68(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0xc70(0x08)
	struct UBorder* EntryBorder; // 0xc78(0x08)
	struct UCommonRichTextBlock* Text_LeavePartyText; // 0xc80(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0xc88(0x08)
	struct UMaterialInstance* InviteMaterial; // 0xc90(0x08)
	struct UMaterialInstance* DefaultMaterial; // 0xc98(0x08)
	struct FSlateColor InviteFontColor; // 0xca0(0x28)
	struct FSlateColor DefaultFontColor; // 0xcc8(0x28)

	void BP_OnUnhovered(); // Function DisableSidekickListEntry.DisableSidekickListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function DisableSidekickListEntry.DisableSidekickListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function DisableSidekickListEntry.DisableSidekickListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DisableSidekickListEntry(int32_t EntryPoint); // Function DisableSidekickListEntry.DisableSidekickListEntry_C.ExecuteUbergraph_DisableSidekickListEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

