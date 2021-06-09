// WidgetBlueprintGeneratedClass PassSelectionButton.PassSelectionButton_C
// Size: 0xd02 (Inherited: 0xc98)
struct UPassSelectionButton_C : UAthenaPassSelectionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc98(0x08)
	struct UWidgetAnimation* MobileHovered; // 0xca0(0x08)
	struct UWidgetAnimation* ValuePulse; // 0xca8(0x08)
	struct UWidgetAnimation* ShiftSize; // 0xcb0(0x08)
	struct UWidgetAnimation* ShiftColor; // 0xcb8(0x08)
	struct UWidgetAnimation* ValueBounce; // 0xcc0(0x08)
	struct UWidgetAnimation* Hovered; // 0xcc8(0x08)
	struct UImage* Backing; // 0xcd0(0x08)
	struct UImage* ButtonBacking; // 0xcd8(0x08)
	struct UImage* Glow; // 0xce0(0x08)
	struct UImage* HoverBar; // 0xce8(0x08)
	struct UImage* PlayStationStoreLogo; // 0xcf0(0x08)
	struct UImage* VBuck; // 0xcf8(0x08)
	bool DelayShineSwipe; // 0xd00(0x01)
	bool ColorShift; // 0xd01(0x01)

	void SetMaterialColors(); // Function PassSelectionButton.PassSelectionButton_C.SetMaterialColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHoverStateChanged(bool bInHoverState, bool bIsUsingTouch); // Function PassSelectionButton.PassSelectionButton_C.BP_OnHoverStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function PassSelectionButton.PassSelectionButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnButtonDataSet(); // Function PassSelectionButton.PassSelectionButton_C.OnButtonDataSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ResetAnimations(); // Function PassSelectionButton.PassSelectionButton_C.ResetAnimations // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PassSelectionButton(int32_t EntryPoint); // Function PassSelectionButton.PassSelectionButton_C.ExecuteUbergraph_PassSelectionButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

