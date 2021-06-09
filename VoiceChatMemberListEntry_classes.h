// WidgetBlueprintGeneratedClass VoiceChatMemberListEntry.VoiceChatMemberListEntry_C
// Size: 0xcd8 (Inherited: 0xc90)
struct UVoiceChatMemberListEntry_C : UFortVoiceChatMemberListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc90(0x08)
	struct UWidgetAnimation* Selected; // 0xc98(0x08)
	struct UWidgetAnimation* Hovered; // 0xca0(0x08)
	struct UImage* Arrow; // 0xca8(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0xcb0(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0xcb8(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0xcc8(0x10)

	void BP_OnUnhovered(); // Function VoiceChatMemberListEntry.VoiceChatMemberListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function VoiceChatMemberListEntry.VoiceChatMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function VoiceChatMemberListEntry.VoiceChatMemberListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_VoiceChatMemberListEntry(int32_t EntryPoint); // Function VoiceChatMemberListEntry.VoiceChatMemberListEntry_C.ExecuteUbergraph_VoiceChatMemberListEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

