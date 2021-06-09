// WidgetBlueprintGeneratedClass SidekickVoiceChatMemberListEntry.SidekickVoiceChatMemberListEntry_C
// Size: 0xce4 (Inherited: 0xc70)
struct USidekickVoiceChatMemberListEntry_C : UFortSidekickVoiceChatMemberListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc70(0x08)
	struct UWidgetAnimation* Selected; // 0xc78(0x08)
	struct UWidgetAnimation* Hovered; // 0xc80(0x08)
	struct UImage* Arrow; // 0xc88(0x08)
	struct UBorder* Border_Background; // 0xc90(0x08)
	struct UBorder* Border_Highlight; // 0xc98(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0xca0(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0xca8(0x08)
	struct UImage* Image_EncourageEpicFriend; // 0xcb0(0x08)
	struct UImage* Image_HPIcon; // 0xcb8(0x08)
	bool Encourage; // 0xcc0(0x01)
	char pad_CC1[0x3]; // 0xcc1(0x03)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0xcc4(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0xcd4(0x10)

	void BP_OnUnhovered(); // Function SidekickVoiceChatMemberListEntry.SidekickVoiceChatMemberListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidekickVoiceChatMemberListEntry.SidekickVoiceChatMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SidekickVoiceChatMemberListEntry.SidekickVoiceChatMemberListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SidekickVoiceChatMemberListEntry(int32_t EntryPoint); // Function SidekickVoiceChatMemberListEntry.SidekickVoiceChatMemberListEntry_C.ExecuteUbergraph_SidekickVoiceChatMemberListEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

