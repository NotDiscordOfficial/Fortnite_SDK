// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
// Size: 0x650 (Inherited: 0x5f8)
struct UAthenaLobby_C : UAthenaLobbyBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f8(0x08)
	struct UFeaturedCreativeContent_C* FeaturedCreativeContent; // 0x600(0x08)
	struct UMatchmakingRegionAndPool_C* MatchmakingRegion; // 0x608(0x08)
	struct UMinimalTeamDisplay_C* MinimalTeamDisplay; // 0x610(0x08)
	struct UOverlay* Overlay_Main; // 0x618(0x08)
	struct UFancyToastWidget_C* StoreToastWidget; // 0x620(0x08)
	struct USoloButton_ViewQuest_C* ViewQuestButton; // 0x628(0x08)
	struct UStoreToastRequest* StoreToastRequest; // 0x630(0x08)
	struct FTimerHandle TryShowToast; // 0x638(0x08)
	struct FDataTableRowHandle InputAction_InspectChallenges; // 0x640(0x10)

	void HandleLobbyColorSchemeChange(struct FLinearColor NewColorScheme, bool UseDefaultScheme); // Function AthenaLobby.AthenaLobby_C.HandleLobbyColorSchemeChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ConfigureGenericLinkButton(); // Function AthenaLobby.AthenaLobby_C.ConfigureGenericLinkButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartAthenaLobbyMusic(); // Function AthenaLobby.AthenaLobby_C.StartAthenaLobbyMusic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFailure_DA5E62624D068772EA890193344BA4AE(); // Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSuccess_DA5E62624D068772EA890193344BA4AE(); // Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_9036807A49B907A7A1B78EB727BAB97A(struct UUserWidget* UserWidget); // Function AthenaLobby.AthenaLobby_C.OnComplete_9036807A49B907A7A1B78EB727BAB97A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaLobby.AthenaLobby_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaLobby.AthenaLobby_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaLobby.AthenaLobby_C.BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeactivated(); // Function AthenaLobby.AthenaLobby_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DisplayStoreUpdated(struct UStoreToastRequest* StoreUpdatedRequest); // Function AthenaLobby.AthenaLobby_C.DisplayStoreUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void AttemptToShowToast(); // Function AthenaLobby.AthenaLobby_C.AttemptToShowToast // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TryToastAgainNextFrame(); // Function AthenaLobby.AthenaLobby_C.TryToastAgainNextFrame // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature(); // Function AthenaLobby.AthenaLobby_C.BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnPlaylistChanged(enum class EFortLobbyType LobbyType, struct UFortPlaylistAthena* PlaylistData); // Function AthenaLobby.AthenaLobby_C.OnPlaylistChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void DisplayGlyphQuestUpdated(int32_t NewGlyphs); // Function AthenaLobby.AthenaLobby_C.DisplayGlyphQuestUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaLobby(int32_t EntryPoint); // Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

