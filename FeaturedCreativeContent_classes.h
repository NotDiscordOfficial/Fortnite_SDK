// WidgetBlueprintGeneratedClass FeaturedCreativeContent.FeaturedCreativeContent_C
// Size: 0x2a0 (Inherited: 0x260)
struct UFeaturedCreativeContent_C : UFeaturedCreativeContent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Base; // 0x268(0x08)
	struct UCMSImageSlideShow_C* CMSImageSlideShow; // 0x270(0x08)
	struct UCommonTextBlock* IslandCreator; // 0x278(0x08)
	struct UCommonTextBlock* IslandDetails; // 0x280(0x08)
	struct UCommonTextBlock* IslandName; // 0x288(0x08)
	struct TArray<struct FCreativeAdData> CurrentAds; // 0x290(0x10)

	void SetFeaturedContentDetails(int32_t Index); // Function FeaturedCreativeContent.FeaturedCreativeContent_C.SetFeaturedContentDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSetupAds(struct TArray<struct FString> MediaURLs, struct TArray<struct FCreativeAdData> AdMetadata); // Function FeaturedCreativeContent.FeaturedCreativeContent_C.OnSetupAds // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature(int32_t CurrentPageIndex); // Function FeaturedCreativeContent.FeaturedCreativeContent_C.BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FeaturedCreativeContent(int32_t EntryPoint); // Function FeaturedCreativeContent.FeaturedCreativeContent_C.ExecuteUbergraph_FeaturedCreativeContent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

