// WidgetBlueprintGeneratedClass FireModeSelectTile.FireModeSelectTile_C
// Size: 0x3d8 (Inherited: 0x2d8)
struct UFireModeSelectTile_C : UHUDLayoutToolFireModeButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* CheckMarkAppear; // 0x2e0(0x08)
	struct UWidgetAnimation* IntroAndOutro; // 0x2e8(0x08)
	struct UWidgetAnimation* ConfirmSelection; // 0x2f0(0x08)
	struct UWidgetAnimation* GameModeSelection; // 0x2f8(0x08)
	struct UEpicCMSImage* ArtImage; // 0x300(0x08)
	struct UScaleBox* ArtScale; // 0x308(0x08)
	struct UCommonBorder* Border_Recommended; // 0x310(0x08)
	struct UImage* ConfirmSelectionFlash; // 0x318(0x08)
	struct UImage* ConfirmSelectionShine; // 0x320(0x08)
	struct USizeBox* DetailsSB; // 0x328(0x08)
	struct UImage* DisabledGray; // 0x330(0x08)
	struct UImage* Fill; // 0x338(0x08)
	struct USpacer* IconSpacer; // 0x340(0x08)
	struct UImage* ImageGlow; // 0x348(0x08)
	struct UImage* LoadingImage; // 0x350(0x08)
	struct UOverlay* LoadingImageOvr; // 0x358(0x08)
	struct UCommonWidgetSwitcherLegacy* LoadSwitcher; // 0x360(0x08)
	struct UImage* SelectedIcon; // 0x368(0x08)
	struct UBorder* SelectionBorder; // 0x370(0x08)
	struct USizeBox* SizeBox_Tile; // 0x378(0x08)
	struct UCommonTextBlock* T_Recommended; // 0x380(0x08)
	struct UCommonTextBlock* TextName; // 0x388(0x08)
	struct UImage* UnhoveredVignette; // 0x390(0x08)
	struct UMediaSource* Media Source; // 0x398(0x08)
	struct FMulticastInlineDelegate HandleFocus; // 0x3a0(0x10)
	struct FMulticastInlineDelegate HandleSelectConfirmed; // 0x3b0(0x10)
	bool bIsSelected; // 0x3c0(0x01)
	bool bHasPreviewTexture; // 0x3c1(0x01)
	bool bIsRecommendedOption; // 0x3c2(0x01)
	char pad_3C3[0x5]; // 0x3c3(0x05)
	struct FMulticastInlineDelegate HandleDeselectTile; // 0x3c8(0x10)

	void HandleSelectionBorderFeedback(bool bIsSelected, bool bIsHovered); // Function FireModeSelectTile.FireModeSelectTile_C.HandleSelectionBorderFeedback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopMovie(); // Function FireModeSelectTile.FireModeSelectTile_C.StopMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayMovie(); // Function FireModeSelectTile.FireModeSelectTile_C.PlayMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Setup(); // Function FireModeSelectTile.FireModeSelectTile_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Mark Selected(); // Function FireModeSelectTile.FireModeSelectTile_C.Mark Selected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayIntroOrOutro(bool PlayIntro); // Function FireModeSelectTile.FireModeSelectTile_C.PlayIntroOrOutro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function FireModeSelectTile.FireModeSelectTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Save and Exit(); // Function FireModeSelectTile.FireModeSelectTile_C.Save and Exit // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_63_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FireModeSelectTile.FireModeSelectTile_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_63_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_91_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FireModeSelectTile.FireModeSelectTile_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_91_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnSelected(); // Function FireModeSelectTile.FireModeSelectTile_C.OnSelected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeselected(); // Function FireModeSelectTile.FireModeSelectTile_C.OnDeselected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FireModeSelectTile.FireModeSelectTile_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function FireModeSelectTile.FireModeSelectTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SelectFireMode(); // Function FireModeSelectTile.FireModeSelectTile_C.SelectFireMode // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FireModeSelectTile(int32_t EntryPoint); // Function FireModeSelectTile.FireModeSelectTile_C.ExecuteUbergraph_FireModeSelectTile // (Final|UbergraphFunction) // @ game+0xda7c34
	void HandleDeselectTile__DelegateSignature(struct UFireModeSelectTile_C* Tile); // Function FireModeSelectTile.FireModeSelectTile_C.HandleDeselectTile__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleSelectConfirmed__DelegateSignature(struct UFireModeSelectTile_C* Tile); // Function FireModeSelectTile.FireModeSelectTile_C.HandleSelectConfirmed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleFocus__DelegateSignature(struct UFireModeSelectTile_C* Tile); // Function FireModeSelectTile.FireModeSelectTile_C.HandleFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

