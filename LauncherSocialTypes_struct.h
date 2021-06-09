// ScriptStruct LauncherSocialTypes.ChatChromeColorScheme
// Size: 0x50 (Inherited: 0x00)
struct FChatChromeColorScheme {
	struct FLinearColor ChatEntryBackgroundColor; // 0x00(0x10)
	struct FLinearColor NoneActiveTabColor; // 0x10(0x10)
	struct FLinearColor TabFontColor; // 0x20(0x10)
	struct FLinearColor TabFontColorInverted; // 0x30(0x10)
	struct FLinearColor ChatBackgroundColor; // 0x40(0x10)
};

// ScriptStruct LauncherSocialTypes.ChatChromeMargins
// Size: 0x64 (Inherited: 0x00)
struct FChatChromeMargins {
	float TabWidth; // 0x00(0x04)
	struct FMargin TabPadding; // 0x04(0x10)
	struct FMargin ChatWindowPadding; // 0x14(0x10)
	struct FMargin ChatWindowToEntryMargin; // 0x24(0x10)
	struct FMargin ChatChannelPadding; // 0x34(0x10)
	struct FMargin UserListButtonPadding; // 0x44(0x10)
	struct FMargin UserListIconPadding; // 0x54(0x10)
};

// ScriptStruct LauncherSocialTypes.ChatChromeStyle
// Size: 0x7c8 (Inherited: 0x00)
struct FChatChromeStyle {
	struct FSlateBrush UserListBrush; // 0x00(0x88)
	struct FSlateBrush ChatBackgroundBrush; // 0x88(0x88)
	struct FSlateBrush ChatEntryBackgroundBrush; // 0x110(0x88)
	struct FSlateBrush ChannelBackgroundBrush; // 0x198(0x88)
	struct FSlateBrush TabBackgroundBrush; // 0x220(0x88)
	struct FButtonStyle TabSelectorButtonStyle; // 0x2a8(0x278)
	struct FMargin TabOptionPadding; // 0x520(0x10)
	struct FMargin TabContentPadding; // 0x530(0x10)
	struct FMargin TabClosePadding; // 0x540(0x10)
	struct FButtonStyle UserListButtonStyle; // 0x550(0x278)
};

// ScriptStruct LauncherSocialTypes.ChatColorScheme
// Size: 0x120 (Inherited: 0x00)
struct FChatColorScheme {
	struct FLinearColor TimeStampColor; // 0x00(0x10)
	struct FLinearColor DefaultChatColor; // 0x10(0x10)
	struct FLinearColor WhisperChatColor; // 0x20(0x10)
	struct FLinearColor GlobalChatColor; // 0x30(0x10)
	struct FLinearColor FounderChatColor; // 0x40(0x10)
	struct FLinearColor GameChatColor; // 0x50(0x10)
	struct FLinearColor TeamChatColor; // 0x60(0x10)
	struct FLinearColor PartyChatColor; // 0x70(0x10)
	struct FLinearColor AdminChatColor; // 0x80(0x10)
	struct FLinearColor GameAdminChatColor; // 0x90(0x10)
	struct FLinearColor WhisperHyperlinkChatColor; // 0xa0(0x10)
	struct FLinearColor GlobalHyperlinkChatColor; // 0xb0(0x10)
	struct FLinearColor FounderHyperlinkChatColor; // 0xc0(0x10)
	struct FLinearColor GameHyperlinkChatColor; // 0xd0(0x10)
	struct FLinearColor TeamHyperlinkChatColor; // 0xe0(0x10)
	struct FLinearColor PartyHyperlinkChatColor; // 0xf0(0x10)
	struct FLinearColor EnemyColor; // 0x100(0x10)
	struct FLinearColor FriendlyColor; // 0x110(0x10)
};

// ScriptStruct LauncherSocialTypes.ChatMarkupStyle
// Size: 0x698 (Inherited: 0x00)
struct FChatMarkupStyle {
	struct FButtonStyle MarkupButtonStyle; // 0x00(0x278)
	struct FTextBlockStyle MarkupTextStyle; // 0x278(0x270)
	struct FSlateBrush MarkupBackground; // 0x4e8(0x88)
	struct FSlateColor ButtonColor; // 0x570(0x28)
	struct FSlateColor ButtonHoverColor; // 0x598(0x28)
	struct FSlateColor TipColor; // 0x5c0(0x28)
	struct FSlateBrush SeperatorBrush; // 0x5e8(0x88)
	float SeperatorThickness; // 0x670(0x04)
	struct FMargin MarkupPadding; // 0x674(0x10)
	struct FMargin ButtonPadding; // 0x684(0x10)
	char pad_694[0x4]; // 0x694(0x04)
};

// ScriptStruct LauncherSocialTypes.ChatStyle
// Size: 0x1370 (Inherited: 0x00)
struct FChatStyle {
	struct FEditableTextBoxStyle ChatEntryTextStyle; // 0x00(0x7f8)
	struct FEditableTextBoxStyle ChatDisplayTextStyle; // 0x7f8(0x7f8)
	struct FScrollBoxStyle ScrollBorderStyle; // 0xff0(0x228)
	struct FSlateBrush MessageNotificationBrush; // 0x1218(0x88)
	struct FMargin ChatEntryPadding; // 0x12a0(0x10)
	float ChatEntryHeight; // 0x12b0(0x04)
	char pad_12B4[0x4]; // 0x12b4(0x04)
	struct FSlateBrush ChatMenuBackgroundBrush; // 0x12b8(0x88)
	struct FMargin FriendActionPadding; // 0x1340(0x10)
	struct FMargin FriendActionHeaderPadding; // 0x1350(0x10)
	struct FMargin FriendActionStatusMargin; // 0x1360(0x10)
};

// ScriptStruct LauncherSocialTypes.SocialFontStyle
// Size: 0x240 (Inherited: 0x00)
struct FSocialFontStyle {
	struct FSlateFontInfo FontSmall; // 0x00(0x58)
	struct FSlateFontInfo FontSmallBold; // 0x58(0x58)
	struct FSlateFontInfo FontNormal; // 0xb0(0x58)
	struct FSlateFontInfo FontNormalBold; // 0x108(0x58)
	struct FSlateFontInfo FontLarge; // 0x160(0x58)
	struct FSlateFontInfo FontLargeBold; // 0x1b8(0x58)
	struct FLinearColor DefaultFontColor; // 0x210(0x10)
	struct FLinearColor InvertedFontColor; // 0x220(0x10)
	struct FLinearColor DefaultDullFontColor; // 0x230(0x10)
};

// ScriptStruct LauncherSocialTypes.SocialListMargins
// Size: 0x200 (Inherited: 0x00)
struct FSocialListMargins {
	struct FVector2D UserPresenceImageSize; // 0x00(0x08)
	struct FMargin HeaderButtonMargin; // 0x08(0x10)
	struct FMargin FriendsListMargin; // 0x18(0x10)
	struct FMargin FriendsListNoFriendsMargin; // 0x28(0x10)
	struct FMargin FriendsListHeaderMargin; // 0x38(0x10)
	struct FMargin FriendsListHeaderCountMargin; // 0x48(0x10)
	struct FMargin HeaderButtonContentMargin; // 0x58(0x10)
	struct FMargin FriendItemMargin; // 0x68(0x10)
	struct FMargin FriendItemStatusMargin; // 0x78(0x10)
	struct FMargin FriendTipStatusMargin; // 0x88(0x10)
	struct FMargin FriendItemPresenceMargin; // 0x98(0x10)
	struct FMargin FriendItemPlatformMargin; // 0xa8(0x10)
	struct FMargin FriendItemTextScrollerMargin; // 0xb8(0x10)
	struct FMargin ConfirmationBorderMargin; // 0xc8(0x10)
	struct FMargin ConfirmationButtonMargin; // 0xd8(0x10)
	struct FMargin ConfirmationButtonContentMargin; // 0xe8(0x10)
	struct FMargin NoneFriendContentMargin; // 0xf8(0x10)
	float NoneFriendContentHeight; // 0x108(0x04)
	float NoneFriendIconWidth; // 0x10c(0x04)
	struct FMargin SubMenuBackIconMargin; // 0x110(0x10)
	struct FMargin SubMenuPageIconMargin; // 0x120(0x10)
	struct FMargin RadioSettingTitleMargin; // 0x130(0x10)
	struct FMargin SubMenuSearchIconMargin; // 0x140(0x10)
	struct FMargin SubMenuSearchTextMargin; // 0x150(0x10)
	struct FMargin SubMenuBackButtonMargin; // 0x160(0x10)
	struct FMargin SubMenuSettingButtonMargin; // 0x170(0x10)
	struct FMargin SubMenuListMargin; // 0x180(0x10)
	float SubMenuSeperatorThickness; // 0x190(0x04)
	float PresenceSeperatorThickness; // 0x194(0x04)
	struct FMargin FriendTipMargin; // 0x198(0x10)
	struct FMargin FriendTipPresenceMargin; // 0x1a8(0x10)
	struct FMargin FriendTipSeperatorMargin; // 0x1b8(0x10)
	struct FMargin ToolTipMargin; // 0x1c8(0x10)
	struct FMargin TipStatusMargin; // 0x1d8(0x10)
	struct FMargin AddButtonMargin; // 0x1e8(0x10)
	struct FVector2D AddButtonSpacing; // 0x1f8(0x08)
};

// ScriptStruct LauncherSocialTypes.SocialListStyle
// Size: 0x2700 (Inherited: 0x00)
struct FSocialListStyle {
	struct FButtonStyle GlobalChatButtonStyle; // 0x00(0x278)
	struct FSlateBrush GlobalChatIcon; // 0x278(0x88)
	struct FButtonStyle FriendItemButtonStyle; // 0x300(0x278)
	struct FButtonStyle ConfirmButtonStyle; // 0x578(0x278)
	struct FButtonStyle CancelButtonStyle; // 0x7f0(0x278)
	struct FSlateColor ButtonContentColor; // 0xa68(0x28)
	struct FSlateColor ButtonHoverContentColor; // 0xa90(0x28)
	struct FSlateBrush ActionMenuArrowBrush; // 0xab8(0x88)
	struct FSlateBrush ActionMenuArrowRightBrush; // 0xb40(0x88)
	struct FSlateColor ActionMenuBackgroundColor; // 0xbc8(0x28)
	struct FSlateBrush ToolTipArrowBrush; // 0xbf0(0x88)
	struct FButtonStyle BackButtonStyle; // 0xc78(0x278)
	struct FButtonStyle HeaderButtonStyle; // 0xef0(0x278)
	struct FButtonStyle FriendListActionButtonStyle; // 0x1168(0x278)
	struct FSlateBrush AddFriendButtonContentBrush; // 0x13e0(0x88)
	struct FSlateBrush StatusIconBrush; // 0x1468(0x88)
	struct FSlateBrush PCIconBrush; // 0x14f0(0x88)
	struct FSlateBrush ConsoleIconBrush; // 0x1578(0x88)
	struct FSlateBrush MobileIconBrush; // 0x1600(0x88)
	struct FSlateBrush FacebookIconBrush; // 0x1688(0x88)
	struct FSlateBrush EpicIconBrush; // 0x1710(0x88)
	struct FSlateBrush FriendImageBrush; // 0x1798(0x88)
	struct FSlateBrush OfflineBrush; // 0x1820(0x88)
	struct FSlateBrush OnlineBrush; // 0x18a8(0x88)
	struct FSlateBrush AwayBrush; // 0x1930(0x88)
	struct FSlateBrush SpectateBrush; // 0x19b8(0x88)
	struct FSlateBrush FriendsContainerBackground; // 0x1a40(0x88)
	struct FSlateBrush FriendsListBackground; // 0x1ac8(0x88)
	struct FEditableTextBoxStyle AddFriendEditableTextStyle; // 0x1b50(0x7f8)
	struct FSlateBrush BackBrush; // 0x2348(0x88)
	struct FSlateBrush SelectedOptionBrush; // 0x23d0(0x88)
	struct FSlateBrush SettingsBrush; // 0x2458(0x88)
	struct FSlateBrush SeperatorBrush; // 0x24e0(0x88)
	struct FSlateBrush PresenceSeperatorBrush; // 0x2568(0x88)
	struct FSlateBrush FontSizeBrush; // 0x25f0(0x88)
	struct FSlateBrush SearchBrush; // 0x2678(0x88)
};

// ScriptStruct LauncherSocialTypes.ProfanityData
// Size: 0x38 (Inherited: 0x00)
struct FProfanityData {
	struct FString CountryCode; // 0x00(0x10)
	struct FString ProfanityList; // 0x10(0x10)
	struct FString WhiteList; // 0x20(0x10)
	bool bAutoAdd; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct LauncherSocialTypes.SocialSoundSchema
// Size: 0x48 (Inherited: 0x00)
struct FSocialSoundSchema {
	struct FSlateSound MessageReceivedSound; // 0x00(0x18)
	struct FSlateSound PartyInviteReceivedSound; // 0x18(0x18)
	struct FSlateSound FriendInviteReceivedSound; // 0x30(0x18)
};

// ScriptStruct LauncherSocialTypes.SocialStyle
// Size: 0x6838 (Inherited: 0x00)
struct FSocialStyle {
	struct FScrollBarStyle ScrollBarStyle; // 0x00(0x4d0)
	struct FButtonStyle ActionButtonStyle; // 0x4d0(0x278)
	struct FSocialFontStyle SmallFontStyle; // 0x748(0x240)
	struct FSocialFontStyle NormalFontStyle; // 0x988(0x240)
	struct FSocialFontStyle LargeFontStyle; // 0xbc8(0x240)
	struct FSocialFontStyle ChatFontStyle; // 0xe08(0x240)
	struct FCheckBoxStyle CheckBoxStyle; // 0x1048(0x580)
	struct FCheckBoxStyle RadioBoxStyle; // 0x15c8(0x580)
	struct FSocialListStyle SocialListStyle; // 0x1b48(0x2700)
	struct FSocialListMargins SocialListMargins; // 0x4248(0x200)
	struct FChatStyle ChatStyle; // 0x4448(0x1370)
	struct FChatColorScheme ChatColorScheme; // 0x57b8(0x120)
	struct FChatChromeStyle ChatChromeStyle; // 0x58d8(0x7c8)
	struct FChatChromeMargins ChatChromeMargins; // 0x60a0(0x64)
	struct FChatChromeColorScheme ChatChromeColorScheme; // 0x6104(0x50)
	char pad_6154[0x4]; // 0x6154(0x04)
	struct FChatMarkupStyle ChatMarkupStyle; // 0x6158(0x698)
	struct FSocialSoundSchema SoundSchema; // 0x67f0(0x48)
};

