// WidgetBlueprintGeneratedClass JoinablePartyEntry.JoinablePartyEntry_C
// Size: 0xd08 (Inherited: 0xc68)
struct UJoinablePartyEntry_C : UFortJoinablePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc68(0x08)
	struct UWidgetAnimation* Selected; // 0xc70(0x08)
	struct UWidgetAnimation* Hovered; // 0xc78(0x08)
	struct UBorder* AnimatedInputBorder; // 0xc80(0x08)
	struct UImage* Arrow; // 0xc88(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0xc90(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0xc98(0x08)
	struct UBorder* EntryBorder; // 0xca0(0x08)
	struct USizeBox* Exclamation; // 0xca8(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0xcb0(0x08)
	struct FSlateColor InviteFontColor; // 0xcb8(0x28)
	struct FSlateColor DefaultFontColor; // 0xce0(0x28)

	void BP_OnUnhovered(); // Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function JoinablePartyEntry.JoinablePartyEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInviteStatusUpdated(bool bIsInvited); // Function JoinablePartyEntry.JoinablePartyEntry_C.OnInviteStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_JoinablePartyEntry(int32_t EntryPoint); // Function JoinablePartyEntry.JoinablePartyEntry_C.ExecuteUbergraph_JoinablePartyEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

