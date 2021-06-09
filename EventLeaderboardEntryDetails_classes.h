// WidgetBlueprintGeneratedClass EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C
// Size: 0x5c8 (Inherited: 0x288)
struct UEventLeaderboardEntryDetails_C : UFortLeaderboardEntryDetails {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* MatchHistoryHover; // 0x290(0x08)
	struct UWidgetAnimation* ProfileHover; // 0x298(0x08)
	struct UWidgetAnimation* Intro; // 0x2a0(0x08)
	struct UIconTextButton_C* Button_MatchHistory; // 0x2a8(0x08)
	struct UIconTextButton_C* Button_Profiles; // 0x2b0(0x08)
	struct UCommonBorder* CommonBorder_ElimPointer; // 0x2b8(0x08)
	struct UCommonBorder* CommonBorder_PlacementPointer; // 0x2c0(0x08)
	struct UCommonBorder* CommonBorderMainContent; // 0x2c8(0x08)
	struct UCommonTextBlock* CommonTextBlock_2; // 0x2d0(0x08)
	struct UCommonTextBlock* CommonTextBlock_MatchHistoryTextMatchHistory; // 0x2d8(0x08)
	struct UCommonTextBlock* CommonTextBlock_Placement; // 0x2e0(0x08)
	struct UCommonTextBlock* CommonTextBlock_PlayerNames; // 0x2e8(0x08)
	struct UCommonTextBlock* CommonTextBlock_PlayerNamesTitle; // 0x2f0(0x08)
	struct UCommonTextBlock* CommonTextBlock_ProfileText; // 0x2f8(0x08)
	struct UCommonTextBlock* CommonTextBlock_Score; // 0x300(0x08)
	struct UCommonTextBlock* CommonTextBlock_Title; // 0x308(0x08)
	struct UImage* Image_32; // 0x310(0x08)
	struct UImage* Image_33; // 0x318(0x08)
	struct UImage* Image_58; // 0x320(0x08)
	struct UImage* Image_59; // 0x328(0x08)
	struct UImage* Image_94; // 0x330(0x08)
	struct UImage* Image_95; // 0x338(0x08)
	struct UImage* Image_DetailsBG; // 0x340(0x08)
	struct UImage* Image_ElimIcon; // 0x348(0x08)
	struct UImage* Image_LiveMatch; // 0x350(0x08)
	struct UImage* Image_Pie; // 0x358(0x08)
	struct UImage* Image_PieShadow; // 0x360(0x08)
	struct UImage* Image_PlacementIcon; // 0x368(0x08)
	struct UImage* Image_PlayernameBG; // 0x370(0x08)
	struct UImage* Image_PlayernameBG_Shadow; // 0x378(0x08)
	struct UOverlay* Overlay_Placement; // 0x380(0x08)
	struct UOverlay* Overlay_PointBreakdown; // 0x388(0x08)
	struct UOverlay* Overlay_TeamMembers; // 0x390(0x08)
	struct UEventLeaderboardDetails_Stat_C* Stat_AveragePlacement; // 0x398(0x08)
	struct UEventLeaderboardDetails_Stat_C* Stat_AveragePointsPerMatch; // 0x3a0(0x08)
	struct UEventLeaderboardDetails_Stat_C* Stat_MatchesPlayed; // 0x3a8(0x08)
	struct UEventLeaderboardDetails_Stat_C* Stat_TotalEliminations; // 0x3b0(0x08)
	struct UEventLeaderboardDetails_Stat_C* Stat_VictoryRoyales; // 0x3b8(0x08)
	struct UCommonTextBlock* Text_EliminationPointInfo; // 0x3c0(0x08)
	struct UCommonTextBlock* Text_PlacementPointInfo; // 0x3c8(0x08)
	struct UVerticalBox* VerticalBox_Placement; // 0x3d0(0x08)
	struct UVerticalBox* VerticalBox_StatContainer; // 0x3d8(0x08)
	struct UFortEventLeaderboardEntryData* LeaderboardEntryData; // 0x3e0(0x08)
	struct FMulticastInlineDelegate ProfileSelectedFromSelector; // 0x3e8(0x10)
	struct UEventPlayerStatProfileSelector_C* ProfileSelectorInstance; // 0x3f8(0x08)
	struct FString TournamentId; // 0x400(0x10)
	struct FString EventWindowId; // 0x410(0x10)
	struct FFortTournamentDisplayInfo CurrentDisplayInfo; // 0x420(0x1a8)

	void SetTournamentValues(struct FString InTournamentId, struct FString InEventWindowId); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.SetTournamentValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Show Details(struct UFortEventLeaderboardEntryData* EntryData, enum class ETournamentDisplayType EventType); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Show Details // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventIntro(); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void LeaderboardEntryDoubleClicked(); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.LeaderboardEntryDoubleClicked // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventLeaderboardEntryDetails(int32_t EntryPoint); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ExecuteUbergraph_EventLeaderboardEntryDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void ProfileSelectedFromSelector__DelegateSignature(); // Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ProfileSelectedFromSelector__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

