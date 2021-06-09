// WidgetBlueprintGeneratedClass HorizontalTabList.HorizontalTabList_C
// Size: 0x480 (Inherited: 0x400)
struct UHorizontalTabList_C : UFortTabListWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UImage* ImageGamepadKeyPrompt; // 0x408(0x08)
	struct UImage* ImageHorizRule; // 0x410(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x418(0x08)
	struct USizeBox* NextTabActionWrapper; // 0x420(0x08)
	struct UOverlay* Overlay_Container; // 0x428(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x430(0x08)
	struct USizeBox* PreviousTabActionWrapper; // 0x438(0x08)
	struct UHorizontalBox* TabButtonBox; // 0x440(0x08)
	struct FMargin TabButtonPadding; // 0x448(0x10)
	struct UCommonButtonStyle* ButtonStyle; // 0x458(0x08)
	bool UseButtonStyle; // 0x460(0x01)
	bool ShowGamePadInputPrompt; // 0x461(0x01)
	bool ShowRail; // 0x462(0x01)
	char pad_463[0x1]; // 0x463(0x01)
	int32_t MinTabWidth; // 0x464(0x04)
	bool ForceTabLabelsCollapsed; // 0x468(0x01)
	bool ForceTabIconsCollapsed; // 0x469(0x01)
	char pad_46A[0x6]; // 0x46a(0x06)
	struct FMulticastInlineDelegate RefreshGamepad; // 0x470(0x10)

	void SetVerticalAlignment(enum class EVerticalAlignment FillVertically); // Function HorizontalTabList.HorizontalTabList_C.SetVerticalAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateGamepadKeyVisibility(); // Function HorizontalTabList.HorizontalTabList_C.UpdateGamepadKeyVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UCommonButtonLegacy* Get Tab From Id(struct FName TabNameID); // Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function HorizontalTabList.HorizontalTabList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function HorizontalTabList.HorizontalTabList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Previous Visibility(); // Function HorizontalTabList.HorizontalTabList_C.Previous Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CustomEvent_1(struct FName TabId); // Function HorizontalTabList.HorizontalTabList_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleTabCreated(struct FName TabNameID, struct UCommonButtonLegacy* TabButton); // Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleTabRemoved(struct FName TabNameID, struct UCommonButtonLegacy* TabButton); // Function HorizontalTabList.HorizontalTabList_C.HandleTabRemoved // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleOnInputMethodChanged(enum class ECommonInputType bNewInputType); // Function HorizontalTabList.HorizontalTabList_C.HandleOnInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CustomEvent_2(enum class ESlateVisibility InVisibility); // Function HorizontalTabList.HorizontalTabList_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HorizontalTabList(int32_t EntryPoint); // Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void RefreshGamepad__DelegateSignature(); // Function HorizontalTabList.HorizontalTabList_C.RefreshGamepad__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

