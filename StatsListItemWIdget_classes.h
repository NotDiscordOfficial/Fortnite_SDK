// WidgetBlueprintGeneratedClass StatsListItemWIdget.StatsListItemWIdget_C
// Size: 0x520 (Inherited: 0x3b0)
struct UStatsListItemWIdget_C : UFortAttributeListItem_NUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UWidgetAnimation* Populate_1; // 0x3b8(0x08)
	struct UWidgetAnimation* Populate; // 0x3c0(0x08)
	struct UImage* BasicPairBuffArrow; // 0x3c8(0x08)
	struct UImage* BasicPairIcon; // 0x3d0(0x08)
	struct UCommonTextBlock* BasicPairLabel; // 0x3d8(0x08)
	struct UCommonTextBlock* BasicPairValue; // 0x3e0(0x08)
	struct UImage* BasicSingleBuffArrow; // 0x3e8(0x08)
	struct UCommonTextBlock* BasicSingleValue; // 0x3f0(0x08)
	struct UCommonBorder* Border_StatDeltaPositive; // 0x3f8(0x08)
	struct UImage* ClampedValuePaired; // 0x400(0x08)
	struct UImage* ClampedValueSingle; // 0x408(0x08)
	struct UCommonBorder* PairedBackgroundBorder; // 0x410(0x08)
	struct UHorizontalBox* PairedHbox; // 0x418(0x08)
	struct UHorizontalBox* Single; // 0x420(0x08)
	struct UCommonBorder* SingleBackgroundBorder; // 0x428(0x08)
	struct USpacer* Spacer_1; // 0x430(0x08)
	struct UCommonBorder* StatBorder; // 0x438(0x08)
	struct UWidgetSwitcher* SwitcherPairedBasic; // 0x440(0x08)
	struct UVerticalBox* VBStatHeader; // 0x448(0x08)
	struct FSlateBrush StatIcon; // 0x450(0x88)
	bool Indent; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FText OverrideStateName; // 0x4e0(0x18)
	struct UCommonBorderStyle* StatBGBorderStyle; // 0x4f8(0x08)
	struct UCommonTextStyle* StatValueTextStyle; // 0x500(0x08)
	struct UCommonTextStyle* LabelTextStyleNormal; // 0x508(0x08)
	struct UCommonTextStyle* LabelTextStyleHighlighted; // 0x510(0x08)
	struct UCommonBorderStyle* StatBGBorderStyleHighlight; // 0x518(0x08)

	void Initial Reset(); // Function StatsListItemWIdget.StatsListItemWIdget_C.Initial Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Populate-Update(); // Function StatsListItemWIdget.StatsListItemWIdget_C.Populate-Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextAndBorderHighlight(bool bHightlight); // Function StatsListItemWIdget.StatsListItemWIdget_C.SetTextAndBorderHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UWidget* GetListItemTooltipWidget(); // Function StatsListItemWIdget.StatsListItemWIdget_C.GetListItemTooltipWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetStatIcon(struct FSlateBrush NewParam); // Function StatsListItemWIdget.StatsListItemWIdget_C.SetStatIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateBuffArrows(struct FFortDisplayAttribute CurrentAttribute); // Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBuffArrows // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateBasicPairLabel(struct FFortDisplayAttribute CurrentAttribute); // Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBasicPairLabel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateValueText(struct FFortDisplayAttribute CurrentAttribute); // Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateValueText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateType(struct FFortDisplayAttribute CurrentAttribute); // Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateColors(struct FFortDisplayAttribute CurrentAttribute); // Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update(); // Function StatsListItemWIdget.StatsListItemWIdget_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ValueChanged(float Delta); // Function StatsListItemWIdget.StatsListItemWIdget_C.ValueChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function StatsListItemWIdget.StatsListItemWIdget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreviewEnded(); // Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewEnded // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreviewStarted(); // Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewStarted // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void DisplayAttributeChanged(); // Function StatsListItemWIdget.StatsListItemWIdget_C.DisplayAttributeChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_StatsListItemWIdget(int32_t EntryPoint); // Function StatsListItemWIdget.StatsListItemWIdget_C.ExecuteUbergraph_StatsListItemWIdget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

