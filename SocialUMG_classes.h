// Class SocialUMG.SocialListEntryBase
// Size: 0xc38 (Inherited: 0xc20)
struct USocialListEntryBase : UCommonButtonLegacy {
	char pad_C20[0x18]; // 0xc20(0x18)
};

// Class SocialUMG.SocialUserListViewBase
// Size: 0x308 (Inherited: 0x220)
struct USocialUserListViewBase : UListViewBase {
	char pad_220[0xe0]; // 0x220(0xe0)
	float EntrySpacing; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
};

// Class SocialUMG.SocialChatChannelTab
// Size: 0xc30 (Inherited: 0xc20)
struct USocialChatChannelTab : UCommonButtonLegacy {
	struct USocialChatChannel* ChatChannel; // 0xc20(0x08)
	struct UCommonTextBlock* CommonText_ChannelName; // 0xc28(0x08)
};

// Class SocialUMG.SocialChatContainer
// Size: 0x2b8 (Inherited: 0x260)
struct USocialChatContainer : UUserWidget {
	struct USocialChatManager* ChatManager; // 0x260(0x08)
	struct TArray<struct USocialChatChannel*> JoinedChannels; // 0x268(0x10)
	struct USocialChatChannel* ActiveChannel; // 0x278(0x08)
	struct UCommonButtonGroupLegacy* TabButtonGroup; // 0x280(0x08)
	char pad_288[0x8]; // 0x288(0x08)
	struct USocialChatMessageList* ChatList_Messages; // 0x290(0x08)
	struct USocialChatEditableText* ChatEditableText_MessageEntry; // 0x298(0x08)
	struct UCommonButtonLegacy* Button_SendMessage; // 0x2a0(0x08)
	struct UDynamicEntryBox* EntryBox_JoinedChannels; // 0x2a8(0x08)
	struct UScrollBox* ScrollBox_Channels; // 0x2b0(0x08)

	void SendCurrentMessage(); // Function SocialUMG.SocialChatContainer.SendCurrentMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9d6b0
	void OnChatOpenChanged(bool bShouldBeOpen); // Function SocialUMG.SocialChatContainer.OnChatOpenChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleRightTabPressed(); // Function SocialUMG.SocialChatContainer.HandleRightTabPressed // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9d678
	void HandleLeftTabPressed(); // Function SocialUMG.SocialChatContainer.HandleLeftTabPressed // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9d524
	void FocusEditableText(); // Function SocialUMG.SocialChatContainer.FocusEditableText // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9d470
	void DynamicHandleMessageTextCommitted(struct FText MessageText, enum class ETextCommit CommitMethod); // Function SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted // (Final|Native|Private|HasOutParms) // @ game+0x3d9d36c
};

// Class SocialUMG.SocialChatEditableText
// Size: 0x5f8 (Inherited: 0x108)
struct USocialChatEditableText : UWidget {
	char pad_108[0x20]; // 0x108(0x20)
	struct FEditableTextStyle EditableTextStyle; // 0x128(0x220)
	struct FTextBlockStyle AutoCompleteStyle; // 0x348(0x270)
	char pad_5B8[0x40]; // 0x5b8(0x40)
};

// Class SocialUMG.SocialChatMessageEntry
// Size: 0x3c0 (Inherited: 0x260)
struct USocialChatMessageEntry : UUserWidget {
	char pad_260[0x18]; // 0x260(0x18)
	struct FSocialChatMessageEntryStyle DefaultStyle; // 0x278(0x138)
	struct UCommonRichTextBlock* RichText_Message; // 0x3b0(0x08)
	struct UButton* Button_MessageButton; // 0x3b8(0x08)

	void OnMessageSet(); // Function SocialUMG.SocialChatMessageEntry.OnMessageSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	bool CanInteract(); // Function SocialUMG.SocialChatMessageEntry.CanInteract // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fade60
};

// Class SocialUMG.SocialChatMessageList
// Size: 0x310 (Inherited: 0x220)
struct USocialChatMessageList : UListViewBase {
	char pad_220[0xc0]; // 0x220(0xc0)
	bool bIsFocusable; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct USocialChatChannel* ActiveChannel; // 0x2e8(0x08)
	char pad_2F0[0x20]; // 0x2f0(0x20)
};

// Class SocialUMG.SocialGroupListEntry
// Size: 0xc48 (Inherited: 0xc20)
struct USocialGroupListEntry : UCommonButtonLegacy {
	char pad_C20[0x8]; // 0xc20(0x08)
	struct USocialActionMenu* ActionMenuClass; // 0xc28(0x08)
	struct USocialGroupChannel* SocialGroup; // 0xc30(0x08)
	struct UTextBlock* Text_GroupName; // 0xc38(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0xc40(0x08)

	struct UUserWidget* HandleGetMenuContent(); // Function SocialUMG.SocialGroupListEntry.HandleGetMenuContent // (Final|Native|Protected) // @ game+0x3d9d4dc
};

// Class SocialUMG.SocialGroupTreeView
// Size: 0x3e8 (Inherited: 0x3c8)
struct USocialGroupTreeView : UTreeView {
	struct USocialGroupListEntry* GroupEntryWidgetClass; // 0x3c8(0x08)
	struct USocialListUserEntryBase* UserEntryWidgetClass; // 0x3d0(0x08)
	struct USocialInteractionMenu* ActionMenuClass; // 0x3d8(0x08)
	struct USocialInteractionMenu* ActionMenu; // 0x3e0(0x08)
};

// Class SocialUMG.SocialInteractionButton
// Size: 0xc80 (Inherited: 0xc20)
struct USocialInteractionButton : UCommonButtonLegacy {
	struct FLinearColor DefaultIndicatorColor; // 0xc20(0x10)
	struct FLinearColor AlertingIndicatorColor; // 0xc30(0x10)
	char pad_C40[0x30]; // 0xc40(0x30)
	struct UCommonTextBlock* Text_InteractionName; // 0xc70(0x08)
	struct UBorder* Border_InteractionIndicator; // 0xc78(0x08)

	void OnInteractionSet(); // Function SocialUMG.SocialInteractionButton.OnInteractionSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	bool IsPlatformOnlyFriend(); // Function SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d9d68c
	struct FName GetInteractionName(); // Function SocialUMG.SocialInteractionButton.GetInteractionName // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d9d4a4
};

// Class SocialUMG.SocialActionMenu
// Size: 0x358 (Inherited: 0x320)
struct USocialActionMenu : UCommonActivatableWidget {
	char pad_320[0x38]; // 0x320(0x38)

	void OnOpened(); // Function SocialUMG.SocialActionMenu.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleMenuAnchorOpenChanged(bool bIsOpen); // Function SocialUMG.SocialActionMenu.HandleMenuAnchorOpenChanged // (Final|Native|Protected) // @ game+0x3d9d538
};

// Class SocialUMG.SocialInteractionMenu
// Size: 0x3c0 (Inherited: 0x358)
struct USocialInteractionMenu : USocialActionMenu {
	char pad_358[0x30]; // 0x358(0x30)
	struct UDynamicEntryBox* EntryBox_PositiveInteractions; // 0x388(0x08)
	struct UDynamicEntryBox* EntryBox_NegativeInteractions; // 0x390(0x08)
	struct USpacer* Spacer_InteractionSeparator; // 0x398(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Confirmation; // 0x3a0(0x08)
	struct UTextBlock* Text_ConfirmationLabel; // 0x3a8(0x08)
	struct UCommonButtonLegacy* Button_Confirm; // 0x3b0(0x08)
	struct UCommonButtonLegacy* Button_Decline; // 0x3b8(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function SocialUMG.SocialInteractionMenu.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	struct UWidget* GetFirstEntryToCenter(); // Function SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d9d484
};

// Class SocialUMG.SocialNameTextBlock
// Size: 0x6d0 (Inherited: 0x6b0)
struct USocialNameTextBlock : UCommonRichTextBlock {
	struct USocialUser* SocialUser; // 0x6b0(0x08)
	float MinDesiredSize; // 0x6b8(0x04)
	float MaxDesiredSize; // 0x6bc(0x04)
	bool bShowSecondName; // 0x6c0(0x01)
	enum class EPlatformIconDisplayRule PlatformIconDisplayRule; // 0x6c1(0x01)
	bool bWrapToNextLine; // 0x6c2(0x01)
	char pad_6C3[0x1]; // 0x6c3(0x01)
	struct FColor SecondNameColor; // 0x6c4(0x04)
	int32_t SecondNameFontSize; // 0x6c8(0x04)
	char pad_6CC[0x4]; // 0x6cc(0x04)
};

// Class SocialUMG.DesignerPreviewChatChannel
// Size: 0x150 (Inherited: 0xe8)
struct UDesignerPreviewChatChannel : USocialChatChannel {
	char pad_E8[0x68]; // 0xe8(0x68)
};

// Class SocialUMG.SocialListInteractableEntryBase
// Size: 0xc48 (Inherited: 0xc38)
struct USocialListInteractableEntryBase : USocialListEntryBase {
	struct USocialActionMenu* ActionMenuClass; // 0xc38(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0xc40(0x08)

	void HandleMenuOpenChanged(bool bIsMenuOpen); // Function SocialUMG.SocialListInteractableEntryBase.HandleMenuOpenChanged // (Final|Native|Private) // @ game+0x3d9d5d8
	struct UUserWidget* HandleGetMenuContent(); // Function SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent // (Final|Native|Protected) // @ game+0x3d9d500
};

// Class SocialUMG.SocialListUserEntryBase
// Size: 0xc60 (Inherited: 0xc48)
struct USocialListUserEntryBase : USocialListInteractableEntryBase {
	char pad_C48[0x8]; // 0xc48(0x08)
	struct USocialNameTextBlock* Text_SocialName; // 0xc50(0x08)
	struct UCommonRichTextBlock* Text_RichPresence; // 0xc58(0x08)
};

// Class SocialUMG.SocialUserListHeaderEntry
// Size: 0xc48 (Inherited: 0xc38)
struct USocialUserListHeaderEntry : USocialListEntryBase {
	struct UTextBlock* Text_ListName; // 0xc38(0x08)
	struct UTextBlock* Text_NumEntries; // 0xc40(0x08)
};

// Class SocialUMG.SocialUserListView
// Size: 0x390 (Inherited: 0x308)
struct USocialUserListView : USocialUserListViewBase {
	char pad_308[0x30]; // 0x308(0x30)
	struct USocialActionMenu* ActiveActionMenu; // 0x338(0x08)
	struct TMap<struct USocialActionMenu*, struct USocialActionMenu*> CachedActionMenuPool; // 0x340(0x50)
};

// Class SocialUMG.SocialUserTreeView
// Size: 0x430 (Inherited: 0x390)
struct USocialUserTreeView : USocialUserListView {
	char pad_390[0x70]; // 0x390(0x70)
	struct USocialListUserEntryBase* UserEntryWidgetClass; // 0x400(0x08)
	struct USocialListUserEntryBase* InviteEntryWidgetClass; // 0x408(0x08)
	char pad_410[0x20]; // 0x410(0x20)
};

