// WidgetBlueprintGeneratedClass TournamentPayoutModal.TournamentPayoutModal_C
// Size: 0x3f8 (Inherited: 0x350)
struct UTournamentPayoutModal_C : UFortTournamentPayoutModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UWidgetAnimation* Intro; // 0x358(0x08)
	struct UEventsSimpleButton_C* BackButton; // 0x360(0x08)
	struct UCloseButton_C* CloseButton; // 0x368(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x370(0x08)
	struct UCommonBorder* CommonBorder_OptionsBarBG; // 0x378(0x08)
	struct UCommonHierarchicalScrollBox* CommonHierarchicalScrollBox_1; // 0x380(0x08)
	struct UCommonTextBlock* CommonTextBlock_2; // 0x388(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_477; // 0x390(0x08)
	struct UVerticalBox* Content_LeaderboardEntries; // 0x398(0x08)
	struct UCommonBorder* Content_NoLeaderboardEntries; // 0x3a0(0x08)
	struct UEventLeaderboardEventDetails_C* EventLeaderboardEventDetails; // 0x3a8(0x08)
	struct UEventLeaderboardHeader_C* EventLeaderboardHeaderDetails; // 0x3b0(0x08)
	struct USafeZone* SafeZone_2; // 0x3b8(0x08)
	struct USizeBox* SizeBox_TopContainer; // 0x3c0(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_LeaderboardEntries; // 0x3c8(0x08)
	struct UCommonTextBlock* Text_NoLeaderboardEntries; // 0x3d0(0x08)
	struct FMulticastInlineDelegate CallEventBack; // 0x3d8(0x10)
	struct FMulticastInlineDelegate NoPayout; // 0x3e8(0x10)

	void EmptyFunction(bool Handled); // Function TournamentPayoutModal.TournamentPayoutModal_C.EmptyFunction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NotifyNoPayouts(); // Function TournamentPayoutModal.TournamentPayoutModal_C.NotifyNoPayouts // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Init(struct FString EventWindowId, struct FString TournamentId); // Function TournamentPayoutModal.TournamentPayoutModal_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventIntro(); // Function TournamentPayoutModal.TournamentPayoutModal_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function TournamentPayoutModal.TournamentPayoutModal_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TournamentPayoutModal(int32_t EntryPoint); // Function TournamentPayoutModal.TournamentPayoutModal_C.ExecuteUbergraph_TournamentPayoutModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void NoPayout__DelegateSignature(); // Function TournamentPayoutModal.TournamentPayoutModal_C.NoPayout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CallEventBack__DelegateSignature(); // Function TournamentPayoutModal.TournamentPayoutModal_C.CallEventBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

