// WidgetBlueprintGeneratedClass GiftingUserItem.GiftingUserItem_C
// Size: 0xc78 (Inherited: 0xc38)
struct UGiftingUserItem_C : UFortGiftingUserItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc38(0x08)
	struct UWidgetAnimation* Toggle; // 0xc40(0x08)
	struct UImage* ImageEmptyCheck; // 0xc48(0x08)
	struct UImage* ImageErrorState; // 0xc50(0x08)
	struct UImage* ImageSelectedCheck; // 0xc58(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_UserStatus; // 0xc60(0x08)
	struct UCommonTextBlock* Text_Message; // 0xc68(0x08)
	struct UVerticalBox* VerticalBox_UserDetails; // 0xc70(0x08)

	void SetSelectionState(enum class ESelectionState NewState, bool bAnimateOnSelect); // Function GiftingUserItem.GiftingUserItem_C.SetSelectionState // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void UpdateMessageText(struct FText NewMessage); // Function GiftingUserItem.GiftingUserItem_C.UpdateMessageText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GiftingUserItem(int32_t EntryPoint); // Function GiftingUserItem.GiftingUserItem_C.ExecuteUbergraph_GiftingUserItem // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

