// WidgetBlueprintGeneratedClass Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C
// Size: 0x318 (Inherited: 0x2d8)
struct UCom_ThanksForVotingMessage_C : UFortCommunityVotingThanksPopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* thanksMessage; // 0x2e0(0x08)
	struct UCommonBorder* Border_TapToCloseZone; // 0x2e8(0x08)
	struct UImage* box_middle; // 0x2f0(0x08)
	struct UCommonRichTextBlock* RichTextBlock_CountDowntxt; // 0x2f8(0x08)
	struct UImage* thanksMessageBlocker; // 0x300(0x08)
	struct UImage* Triangle1; // 0x308(0x08)
	struct UImage* Triangle2; // 0x310(0x08)

	struct FEventReply TapToClose(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.TapToClose // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FadeOutPopup(); // Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.FadeOutPopup // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void FadeInPopup(); // Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.FadeInPopup // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Com_ThanksForVotingMessage(int32_t EntryPoint); // Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.ExecuteUbergraph_Com_ThanksForVotingMessage // (Final|UbergraphFunction) // @ game+0xda7c34
};

