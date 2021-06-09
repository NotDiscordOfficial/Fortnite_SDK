// WidgetBlueprintGeneratedClass AthenaMatchmakingTile.AthenaMatchmakingTile_C
// Size: 0xe88 (Inherited: 0xd00)
struct UAthenaMatchmakingTile_C : UFortAthenaMatchmakingTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd00(0x08)
	struct UWidgetAnimation* Focused; // 0xd08(0x08)
	struct UWidgetAnimation* FlareName; // 0xd10(0x08)
	struct UWidgetAnimation* NewModeIntro_1_Setup; // 0xd18(0x08)
	struct UWidgetAnimation* NewModeIntro_1; // 0xd20(0x08)
	struct UWidgetAnimation* NewModeSetup; // 0xd28(0x08)
	struct UWidgetAnimation* NewModeIntro; // 0xd30(0x08)
	struct UWidgetAnimation* GameModeSelection_NoOpacity; // 0xd38(0x08)
	struct UWidgetAnimation* IntroAndOutro; // 0xd40(0x08)
	struct UWidgetAnimation* ConfirmSelection; // 0xd48(0x08)
	struct UWidgetAnimation* GameModeSelection; // 0xd50(0x08)
	struct UCommonWidgetSwitcherLegacy* AdSpaceSwitcher; // 0xd58(0x08)
	struct UImage* ConfirmSelectionFlash; // 0xd60(0x08)
	struct UImage* ConfirmSelectionShine; // 0xd68(0x08)
	struct UImage* DisabledGray; // 0xd70(0x08)
	struct UImage* Fill; // 0xd78(0x08)
	struct UImage* FocusPulse; // 0xd80(0x08)
	struct UImage* GameModeIcon; // 0xd88(0x08)
	struct UScaleBox* GameModeImageScale; // 0xd90(0x08)
	struct USizeBox* GameModeSB; // 0xd98(0x08)
	struct UOverlay* HeistLTMTileBacking; // 0xda0(0x08)
	struct USpacer* IconSpacer; // 0xda8(0x08)
	struct UImage* Image_5; // 0xdb0(0x08)
	struct UImage* Image-Flare-Btm; // 0xdb8(0x08)
	struct UImage* LoadingImage; // 0xdc0(0x08)
	struct UOverlay* LoadingImageOvr; // 0xdc8(0x08)
	struct UCommonWidgetSwitcherLegacy* LoadSwitcher; // 0xdd0(0x08)
	struct UImage* LTMModeSubIcon; // 0xdd8(0x08)
	struct UImage* PanelBorder; // 0xde0(0x08)
	struct USizeBox* SizeBox_Tile; // 0xde8(0x08)
	struct UCommonBorder* SpecialAdSpace; // 0xdf0(0x08)
	struct UCommonWidgetSwitcherLegacy* SpecialLTMUnderlay; // 0xdf8(0x08)
	struct UHorizontalBox* SubGameModeNameHB; // 0xe00(0x08)
	struct UCommonTextBlock* Text_TimeRemaining; // 0xe08(0x08)
	struct UBorder* TileReveal; // 0xe10(0x08)
	struct UBorder* TimeRemainingBoarder; // 0xe18(0x08)
	struct UHorizontalBox* TimeRemainingBox; // 0xe20(0x08)
	struct UImage* UnhoveredVignette; // 0xe28(0x08)
	struct UObject* MyPlaylist; // 0xe30(0x08)
	bool bHasTileReveal; // 0xe38(0x01)
	char pad_E39[0x7]; // 0xe39(0x07)
	struct FPlaylistFrontEndData RepresentedPlaylist; // 0xe40(0x28)
	int32_t NumTilesInRow; // 0xe68(0x04)
	char pad_E6C[0x4]; // 0xe6c(0x04)
	struct FTimerHandle CountdownTimer; // 0xe70(0x08)
	struct FLinearColor DisabledColor; // 0xe78(0x10)

	void PlayIntroOrOutro(bool PlayIntro); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlayIntroOrOutro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetTileSize(int32_t NumRowTiles); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetTileSize // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PlaylistChanged(struct FPlaylistFrontEndData PlaylistToRepresent); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlaylistChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void TilePlaylistSetAsMatchmakingPlaylist(); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.TilePlaylistSetAsMatchmakingPlaylist // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnImageLoadingComplete(); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnImageLoadingComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateTileAvailability(bool Available); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.UpdateTileAvailability // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetDefaultImage(); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetDefaultImage // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnClicked(); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCMSDataUpdated(); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnCMSDataUpdated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PlayTileReveal(); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlayTileReveal // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateDateTime(); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.UpdateDateTime // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaMatchmakingTile(int32_t EntryPoint); // Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.ExecuteUbergraph_AthenaMatchmakingTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

