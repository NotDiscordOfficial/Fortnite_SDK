// WidgetBlueprintGeneratedClass SocialPanelView_UserLists.SocialPanelView_UserLists_C
// Size: 0x600 (Inherited: 0x540)
struct USocialPanelView_UserLists_C : UFortSocialPanelView_UserLists {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UWidgetAnimation* WeGameButtonHovered; // 0x548(0x08)
	struct UWidgetAnimation* SwitcherTransition; // 0x550(0x08)
	struct UWidgetAnimation* NoFriendsArrowBounce; // 0x558(0x08)
	struct UWidgetAnimation* MenuAnchorItemOpen; // 0x560(0x08)
	struct UWidgetAnimation* Open_1; // 0x568(0x08)
	struct UWidgetAnimation* Open; // 0x570(0x08)
	struct UImage* bckgrnd; // 0x578(0x08)
	struct UImage* CircularThrobber_UserSearch; // 0x580(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock_98; // 0x588(0x08)
	struct UFortMobileImage* FortMobileImage_128; // 0x590(0x08)
	struct UImage* Image_MicDisabled; // 0x598(0x08)
	struct UFortMobileImage* Image_MicIcon; // 0x5a0(0x08)
	struct UFortMobileImage* Image_MicIcon_2; // 0x5a8(0x08)
	struct UFortMobileImage* Image_MicIcon_3; // 0x5b0(0x08)
	struct UImage* Image_MicIcon_4; // 0x5b8(0x08)
	struct UFortMobileImage* Image_TitleIcon; // 0x5c0(0x08)
	struct UCommonRichTextBlock* RichText_LeavePlatformPartyTitle; // 0x5c8(0x08)
	struct UCommonRichTextBlock* RichText_VoiceChatDisabled; // 0x5d0(0x08)
	struct UCommonRichTextBlock* RichText_VoiceChatDisabledHeader; // 0x5d8(0x08)
	struct UCommonRichTextBlock* RichText_VoiceChatDisabledWarningMessage; // 0x5e0(0x08)
	struct URichTextBlock* RichTextBlock_1; // 0x5e8(0x08)
	struct USocialPanel_FriendLinkButton_C* SocialPanel_FriendLinkButton; // 0x5f0(0x08)
	struct UCommonTextBlock* Text_LowPowerMode; // 0x5f8(0x08)

	void BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(struct UWidget* ActiveWidget, int32_t ActiveWidgetIndex); // Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnSetVoiceChannelButtonText(struct FText ButtonText); // Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnSetVoiceChannelButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SocialPanelView_UserLists(int32_t EntryPoint); // Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.ExecuteUbergraph_SocialPanelView_UserLists // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

