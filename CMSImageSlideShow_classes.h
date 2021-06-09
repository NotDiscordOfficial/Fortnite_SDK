// WidgetBlueprintGeneratedClass CMSImageSlideShow.CMSImageSlideShow_C
// Size: 0x288 (Inherited: 0x260)
struct UCMSImageSlideShow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCommonWidgetCarousel* Images; // 0x268(0x08)
	float ScrollInterview; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct FMulticastInlineDelegate CarouselIndexChanged; // 0x278(0x10)

	void SetMediaURLs(struct TArray<struct FString> MediaURLs); // Function CMSImageSlideShow.CMSImageSlideShow_C.SetMediaURLs // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature(struct UCommonWidgetCarousel* CarouselWidget, int32_t CurrentPageIndex); // Function CMSImageSlideShow.CMSImageSlideShow_C.BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_CMSImageSlideShow(int32_t EntryPoint); // Function CMSImageSlideShow.CMSImageSlideShow_C.ExecuteUbergraph_CMSImageSlideShow // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void CarouselIndexChanged__DelegateSignature(int32_t CurrentPageIndex); // Function CMSImageSlideShow.CMSImageSlideShow_C.CarouselIndexChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

