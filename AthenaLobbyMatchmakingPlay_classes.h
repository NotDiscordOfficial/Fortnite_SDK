// WidgetBlueprintGeneratedClass AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C
// Size: 0x5b8 (Inherited: 0x400)
struct UAthenaLobbyMatchmakingPlay_C : UFortAthenaMatchmakingWidgetLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* ShowMatchmakingDetails; // 0x408(0x08)
	struct UWidgetAnimation* NewModeViolation; // 0x410(0x08)
	struct UAthenaGenericLobbyViolator_C* AthenaGenericLobbyViolator; // 0x418(0x08)
	struct UCommonBorder* Border_BasePanel; // 0x420(0x08)
	struct UHorizontalBox* Box_LimitedMatchmaking; // 0x428(0x08)
	struct UIconTextButton_C* DebugCreativeServerSelect; // 0x430(0x08)
	struct UImage* MatchmakingSpinner; // 0x438(0x08)
	struct UCommonBorder* NewModeBorder; // 0x440(0x08)
	struct UShowdownLobbyViolator_C* ShowdownLobbyViolator; // 0x448(0x08)
	struct UVerticalBox* SpinnerAndTextContainer; // 0x450(0x08)
	struct UCommonTextBlock* Text_FillStatus; // 0x458(0x08)
	struct UCommonTextBlock* Text_ModeTitle; // 0x460(0x08)
	struct UCommonTextBlock* TextBlock_ContentDownloadingHeader; // 0x468(0x08)
	struct UCommonTextBlock* TextBlock_NewMode; // 0x470(0x08)
	struct UOverlay* ViolatorContent; // 0x478(0x08)
	struct UWidgetSwitcher* ViolatorSwitcher; // 0x480(0x08)
	struct FMulticastInlineDelegate PlaylistsUpdated; // 0x488(0x10)
	struct FTimerHandle ShowNewPlaylistTimer; // 0x498(0x08)
	struct FMulticastInlineDelegate OnPlaylistChanged; // 0x4a0(0x10)
	struct USoundBase* MatchmakingSucceededSound; // 0x4b0(0x08)
	SoftClassProperty CreativeOptionsSoftClass; // 0x4b8(0x28)
	struct UUserWidget* CreativeOptionsClass; // 0x4e0(0x08)
	bool SquadFill; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct UFortPlaylistAthena* PlaylistData; // 0x4f0(0x08)
	bool IsShowingMatchmakingDetails; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	struct FSlateFontInfo PlaylistMainFont; // 0x500(0x58)
	struct FSlateFontInfo PlaylistActivityFont; // 0x558(0x58)
	struct UFont* PlaylistActivityFontFamily; // 0x5b0(0x08)

	void InitFonts(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.InitFonts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Playlist Info(struct FPlaylistFrontEndData NewPlaylist, struct FText PlaylistTitleOverride, enum class EFortLobbyType LobbyType); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.Update Playlist Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBasePanelColor(struct FLinearColor NewColor); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.SetBasePanelColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshFillText(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.RefreshFillText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_7F9C59BE40E65C1C31B0EB98786CDA43(struct UObject* Loaded); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnLoaded_7F9C59BE40E65C1C31B0EB98786CDA43 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnAvailablePlaylistsUpdated(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnAvailablePlaylistsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetPlayButtonText(struct FText PlayButtonText); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnSetPlayButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnSetCancelButtonText(struct FText CancelButtonText); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnSetCancelButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void PlaylistChanged(struct FPlaylistFrontEndData NewPlaylist, struct FText PlaylistCMSOverrideName, enum class EFortLobbyType LobbyType); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.PlaylistChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SetSquadFillText(bool InCurrentSquadFill); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.SetSquadFillText // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnNewModeViolatorUpdated(bool bShouldShow); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnNewModeViolatorUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateCustomViolatorText(struct FText ModeName, struct FText SubText); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.UpdateCustomViolatorText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Animate(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.Animate // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMatchmakingFinishedBlueprint(bool bSuccess, struct UFortPlaylistAthena* Playlist); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnMatchmakingFinishedBlueprint // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCrossplayPreferencesChanged(bool IsCrossplayEnabled); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnCrossplayPreferencesChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShouldShowMatchmakingDetails(bool bShow); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.ShouldShowMatchmakingDetails // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlaylistActivityChanged(struct FPlaylistFrontEndData NewPlaylist, struct FText ActivityName, enum class EFortLobbyType LobbyType); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.PlaylistActivityChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaLobbyMatchmakingPlay(int32_t EntryPoint); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.ExecuteUbergraph_AthenaLobbyMatchmakingPlay // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnPlaylistChanged__DelegateSignature(struct FPlaylistFrontEndData Playlist Data, struct FText Playlist CMS Override, enum class EFortLobbyType Lobby Type); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnPlaylistChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlaylistsUpdated__DelegateSignature(); // Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

