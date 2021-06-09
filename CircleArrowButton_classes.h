// WidgetBlueprintGeneratedClass CircleArrowButton.CircleArrowButton_C
// Size: 0xc92 (Inherited: 0xc20)
struct UCircleArrowButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Click; // 0xc28(0x08)
	struct UWidgetAnimation* Hover; // 0xc30(0x08)
	struct UImage* Image_Arrow; // 0xc38(0x08)
	struct UImage* Image_Shadow; // 0xc40(0x08)
	struct UOverlay* Overlay_ButtonContainer; // 0xc48(0x08)
	struct USizeBox* Sizebox_InputAction; // 0xc50(0x08)
	bool Flip; // 0xc58(0x01)
	char pad_C59[0x3]; // 0xc59(0x03)
	struct FLinearColor ArrowColor; // 0xc5c(0x10)
	struct FLinearColor ShadowColor; // 0xc6c(0x10)
	float EdgeSoftness; // 0xc7c(0x04)
	struct FLinearColor HoverColor; // 0xc80(0x10)
	bool UseShadow; // 0xc90(0x01)
	bool InputActionOnSide; // 0xc91(0x01)

	void UpdateArrowColor(struct FLinearColor Color, struct FLinearColor HoverColor); // Function CircleArrowButton.CircleArrowButton_C.UpdateArrowColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function CircleArrowButton.CircleArrowButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnClicked(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_CircleArrowButton(int32_t EntryPoint); // Function CircleArrowButton.CircleArrowButton_C.ExecuteUbergraph_CircleArrowButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

