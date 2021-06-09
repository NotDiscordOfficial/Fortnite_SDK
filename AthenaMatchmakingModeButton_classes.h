// WidgetBlueprintGeneratedClass AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C
// Size: 0xc80 (Inherited: 0xc20)
struct UAthenaMatchmakingModeButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* OnHover; // 0xc28(0x08)
	struct UWidgetAnimation* ConfirmSelection; // 0xc30(0x08)
	struct UImage* ConfirmSelectionFlash; // 0xc38(0x08)
	struct UImage* ConfirmSelectionShine; // 0xc40(0x08)
	struct UImage* GameModeIcon; // 0xc48(0x08)
	struct UCommonTextBlock* GameModeName; // 0xc50(0x08)
	struct UImage* LTMModeSubIcon; // 0xc58(0x08)
	struct UCommonTextBlock* SubGameModeName; // 0xc60(0x08)
	struct UHorizontalBox* SubGameModeNameHB; // 0xc68(0x08)
	bool FillSquad; // 0xc70(0x01)
	char pad_C71[0x7]; // 0xc71(0x07)
	struct UFortPlaylistAthena* PlaylistData; // 0xc78(0x08)

	void RefreshLimitedPoolWarning(bool IsCrossplayEnabled); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshLimitedPoolWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshFillText(); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshFillText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetSquadFillText(bool bFill); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlaylistChanged(struct UFortPlaylistAthena* NewPlaylist, struct FText OverrideName); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo TabLabelInfo); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaMatchmakingModeButton(int32_t EntryPoint); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

