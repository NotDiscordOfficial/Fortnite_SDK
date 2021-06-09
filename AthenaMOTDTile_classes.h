// WidgetBlueprintGeneratedClass AthenaMOTDTile.AthenaMOTDTile_C
// Size: 0xcf8 (Inherited: 0xc70)
struct UAthenaMOTDTile_C : UFortAthenaMOTDTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc70(0x08)
	struct UWidgetAnimation* OnHovered; // 0xc78(0x08)
	struct UWidgetAnimation* Intro; // 0xc80(0x08)
	struct UBorder* Border_Details; // 0xc88(0x08)
	struct UBorder* Border_PipDisplay; // 0xc90(0x08)
	struct UCommonLoadGuard* CommonLoadGuard_1; // 0xc98(0x08)
	struct UImage* Fill; // 0xca0(0x08)
	struct UImage* Image_197; // 0xca8(0x08)
	struct UImage* Image_ClickCatcher; // 0xcb0(0x08)
	struct UImage* LoadingImage; // 0xcb8(0x08)
	struct UOverlay* LoadingImageOvr; // 0xcc0(0x08)
	struct UCommonWidgetSwitcherLegacy* LoadSwitcher; // 0xcc8(0x08)
	struct UScaleBox* NewsItemScale; // 0xcd0(0x08)
	struct USizeBox* SizeBox_Tile; // 0xcd8(0x08)
	bool bShowImageOnly; // 0xce0(0x01)
	char pad_CE1[0x7]; // 0xce1(0x07)
	struct FMulticastInlineDelegate OnHoveredChanged; // 0xce8(0x10)

	void UpdateDisplay(); // Function AthenaMOTDTile.AthenaMOTDTile_C.UpdateDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowImageOnly(); // Function AthenaMOTDTile.AthenaMOTDTile_C.ShowImageOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function AthenaMOTDTile.AthenaMOTDTile_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function AthenaMOTDTile.AthenaMOTDTile_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDTile.AthenaMOTDTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaMOTDTile(int32_t EntryPoint); // Function AthenaMOTDTile.AthenaMOTDTile_C.ExecuteUbergraph_AthenaMOTDTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnHoveredChanged__DelegateSignature(bool NewIsHovered); // Function AthenaMOTDTile.AthenaMOTDTile_C.OnHoveredChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

