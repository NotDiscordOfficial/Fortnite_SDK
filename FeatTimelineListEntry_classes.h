// WidgetBlueprintGeneratedClass FeatTimelineListEntry.FeatTimelineListEntry_C
// Size: 0x349 (Inherited: 0x2e8)
struct UFeatTimelineListEntry_C : UAthenaFeatTimelineListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* OnActivated; // 0x2f0(0x08)
	struct UWidgetAnimation* OnShowCompleted; // 0x2f8(0x08)
	struct UWidgetAnimation* OnHover; // 0x300(0x08)
	struct UBorder* AnimBoundTileBorder; // 0x308(0x08)
	struct UImage* burst; // 0x310(0x08)
	struct UImage* Default; // 0x318(0x08)
	struct UBorder* EntryVisbilityBorder; // 0x320(0x08)
	struct UCommonTextBlock* SeasonNumber; // 0x328(0x08)
	struct USizeBox* SizeBox_Contents; // 0x330(0x08)
	struct USizeBox* SizeBox_Date; // 0x338(0x08)
	float TimespanMaxWidth; // 0x340(0x04)
	float TimespanWidthPerDay; // 0x344(0x04)
	bool bWaitingForCompletedTimer; // 0x348(0x01)

	void SetSeasonStyle(); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.SetSeasonStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFeatInfoSet(int32_t NumFeatsOnDay, int32_t IdxOnDay); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnFeatInfoSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTimespanInfoSet(int32_t NumDays); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnTimespanInfoSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnFeatCompletedThisSession(); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnFeatCompletedThisSession // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_OnShowCompleted_K2Node_WidgetAnimationEvent_1(); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.WidgetAnimationEvt_OnShowCompleted_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0xda7c34
	void OnWaitingForCompletedTimer(); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnWaitingForCompletedTimer // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void HoverFeat(); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.HoverFeat // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void UnHoverFeat(); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.UnHoverFeat // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FeatTimelineListEntry(int32_t EntryPoint); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.ExecuteUbergraph_FeatTimelineListEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

