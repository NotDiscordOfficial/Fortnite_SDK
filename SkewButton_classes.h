// WidgetBlueprintGeneratedClass SkewButton.SkewButton_C
// Size: 0xc83 (Inherited: 0xc20)
struct USkewButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Released; // 0xc28(0x08)
	struct UWidgetAnimation* Pressed; // 0xc30(0x08)
	struct UWidgetAnimation* Hover; // 0xc38(0x08)
	struct UImage* ImageButtonFill; // 0xc40(0x08)
	struct UImage* ImageShadow; // 0xc48(0x08)
	struct UNamedSlot* NamedSlot_ButtonContent; // 0xc50(0x08)
	struct UOverlay* Overlay_SkewBrushes; // 0xc58(0x08)
	struct FLinearColor ButtonColor; // 0xc60(0x10)
	struct FLinearColor HoverColor; // 0xc70(0x10)
	bool Chip; // 0xc80(0x01)
	bool Skew; // 0xc81(0x01)
	bool NoHoverColor; // 0xc82(0x01)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SkewButton.SkewButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SkewButton.SkewButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function SkewButton.SkewButton_C.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function SkewButton.SkewButton_C.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function SkewButton.SkewButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SkewButton.SkewButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SkewButton.SkewButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SkewButton.SkewButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function SkewButton.SkewButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BP_OnClicked(); // Function SkewButton.SkewButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function SkewButton.SkewButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SkewButton(int32_t EntryPoint); // Function SkewButton.SkewButton_C.ExecuteUbergraph_SkewButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

