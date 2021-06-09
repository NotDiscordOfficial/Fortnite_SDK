// Class EpicCMSUIFramework.EpicCMSImage
// Size: 0x390 (Inherited: 0x2d8)
struct UEpicCMSImage : UCommonLazyImage {
	struct FMulticastInlineDelegate OnImageLoadingComplete; // 0x2d8(0x10)
	bool bMatchImageSize; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FSlateBrush LoadingFailFallback; // 0x2f0(0x88)
	struct UTexture2D* ExternalMedia; // 0x378(0x08)
	bool bDownloadingExternalMedia; // 0x380(0x01)
	char pad_381[0xf]; // 0x381(0x0f)

	void SetMediaURL(struct FString MediaUrl); // Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL // (Final|Native|Public|BlueprintCallable) // @ game+0x3d851b4
};

// Class EpicCMSUIFramework.EpicCMSLayoutBase
// Size: 0x2c8 (Inherited: 0x260)
struct UEpicCMSLayoutBase : UUserWidget {
	struct TArray<struct FSlotDescription> CarouselSlotDescriptions; // 0x260(0x10)
	struct UEpicCMSTileCarousel* CarouselClass; // 0x270(0x08)
	char pad_278[0x50]; // 0x278(0x50)
};

// Class EpicCMSUIFramework.EpicCMSManager
// Size: 0xa8 (Inherited: 0x28)
struct UEpicCMSManager : UObject {
	char pad_28[0x80]; // 0x28(0x80)
};

// Class EpicCMSUIFramework.EpicCMSScreenBase
// Size: 0x4e8 (Inherited: 0x458)
struct UEpicCMSScreenBase : UCommonActivatablePanelLegacy {
	struct FString TileSetFieldName; // 0x458(0x10)
	struct TSoftObjectPtr<struct UDataTable> TileTypeToTileClassDataTable; // 0x468(0x28)
	SoftClassProperty LayoutErrorClass; // 0x490(0x28)
	struct TSoftObjectPtr<struct UDataTable> LayoutTypeToLayoutClassDataTable; // 0x4b8(0x28)
	char pad_4E0[0x8]; // 0x4e0(0x08)
};

// Class EpicCMSUIFramework.EpicCMSSimpleMessage
// Size: 0x2a0 (Inherited: 0x288)
struct UEpicCMSSimpleMessage : UCommonUserWidget {
	struct UCommonTextBlock* TitleText; // 0x288(0x08)
	struct UCommonTextBlock* BodyText; // 0x290(0x08)
	struct UEpicCMSImage* PrimaryImage; // 0x298(0x08)
};

// Class EpicCMSUIFramework.EpicCMSTileBase
// Size: 0xd30 (Inherited: 0xc20)
struct UEpicCMSTileBase : UCommonButtonLegacy {
	char pad_C20[0x8]; // 0xc20(0x08)
	struct UCommonTextStyle* DefaultTitleTextStyle; // 0xc28(0x08)
	struct UCommonTextStyle* FeaturedTitleTextStyle; // 0xc30(0x08)
	struct FText Title; // 0xc38(0x18)
	struct FString Link; // 0xc50(0x10)
	bool bDownloadingExternalMedia; // 0xc60(0x01)
	bool bRefreshingMcpCatalog; // 0xc61(0x01)
	char pad_C62[0x6]; // 0xc62(0x06)
	struct UTexture2D* ExternalMedia; // 0xc68(0x08)
	char pad_C70[0x18]; // 0xc70(0x18)
	struct UCommonLazyImage* LazyImage_Icon; // 0xc88(0x08)
	struct UCommonTextBlock* TitleTextBlock; // 0xc90(0x08)
	struct UCommonTextBlock* SubtitleTextBlock; // 0xc98(0x08)
	struct UCommonTextBlock* EyebrowTextBlock; // 0xca0(0x08)
	char pad_CA8[0x88]; // 0xca8(0x88)

	void Launch(); // Function EpicCMSUIFramework.EpicCMSTileBase.Launch // (Final|Native|Protected|BlueprintCallable) // @ game+0x3d850dc
};

// Class EpicCMSUIFramework.EpicCMSTileCarousel
// Size: 0x2b0 (Inherited: 0x260)
struct UEpicCMSTileCarousel : UUserWidget {
	struct FSlateSound PreviousButtonSound; // 0x260(0x18)
	struct FSlateSound NextButtonSound; // 0x278(0x18)
	struct UCommonWidgetCarousel* Carousel; // 0x290(0x08)
	struct UWidget* NextPageButton; // 0x298(0x08)
	struct UWidget* PreviousPageButton; // 0x2a0(0x08)
	bool bShouldShowNavigationOnlyOnHover; // 0x2a8(0x01)
	bool bInputActionsForPaging; // 0x2a9(0x01)
	bool bIsShowingNavigation; // 0x2aa(0x01)
	char pad_2AB[0x5]; // 0x2ab(0x05)

	void SetCurrentPageByIndex(int32_t PageIndex); // Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex // (Final|Native|Protected|BlueprintCallable) // @ game+0x3d85118
	void PreviousPage(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage // (Final|Native|Protected|BlueprintCallable) // @ game+0x3d85104
	void NextPage(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage // (Final|Native|Protected|BlueprintCallable) // @ game+0x3d850f0
	void NavigationVisibilityChanged(bool bShowNavigation); // Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleTilePageAdded(struct UWidget* TileWidget); // Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded // (Native|Event|Protected|BlueprintEvent) // @ game+0x3d8503c
	int32_t GetCurrentPageIndex(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d85014
	void BeginAutoScrolling(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x3d84fe0
	void AddTilePage(struct UWidget* TilePageWidget); // Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage // (Final|Native|Public|BlueprintCallable) // @ game+0x3d84e78
};

