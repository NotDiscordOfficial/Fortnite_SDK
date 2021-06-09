// WidgetBlueprintGeneratedClass AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C
// Size: 0xd18 (Inherited: 0xc70)
struct UAthenaMOTDTileMainPage_C : UFortAthenaMOTDTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc70(0x08)
	struct UWidgetAnimation* OnHover; // 0xc78(0x08)
	struct UWidgetAnimation* OnSelected; // 0xc80(0x08)
	struct UWidgetAnimation* Intro; // 0xc88(0x08)
	struct UBorder* Border_Details; // 0xc90(0x08)
	struct UBorder* Border_PipDisplay; // 0xc98(0x08)
	struct UCommonLoadGuard* CommonLoadGuard_1; // 0xca0(0x08)
	struct UImage* Fill; // 0xca8(0x08)
	struct UImage* Image_SelectedPointer; // 0xcb0(0x08)
	struct UImage* Image_SelectedPointer_Shadow; // 0xcb8(0x08)
	struct UImage* LoadingImage; // 0xcc0(0x08)
	struct UOverlay* LoadingImageOvr; // 0xcc8(0x08)
	struct UCommonWidgetSwitcherLegacy* LoadSwitcher; // 0xcd0(0x08)
	struct UScaleBox* NewsItemScale; // 0xcd8(0x08)
	struct USizeBox* SizeBox_Tile; // 0xce0(0x08)
	bool bShowImageOnly; // 0xce8(0x01)
	char pad_CE9[0x3]; // 0xce9(0x03)
	int32_t PreviewPipCount; // 0xcec(0x04)
	struct FMulticastInlineDelegate OnHoveredChanged; // 0xcf0(0x10)
	struct FLinearColor DefaultColor; // 0xd00(0x10)
	struct UMaterialInstanceDynamic* MID_Font; // 0xd10(0x08)

	void UpdateDisplay(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.UpdateDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowImageOnly(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.ShowImageOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPopulateNews(struct FAthenaMOTDBase NewsEntry); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnPopulateNews // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaMOTDTileMainPage(int32_t EntryPoint); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.ExecuteUbergraph_AthenaMOTDTileMainPage // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnHoveredChanged__DelegateSignature(bool NewIsHovered); // Function AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C.OnHoveredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

