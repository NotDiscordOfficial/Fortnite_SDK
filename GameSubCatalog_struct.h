// Enum GameSubCatalog.ECatalogRequirementType
enum class ECatalogRequirementType : uint8 {
	RequireFulfillment,
	DenyOnFulfillment,
	RequireItemOwnership,
	DenyOnItemOwnership,
	ECatalogRequirementType_MAX,
};

// Enum GameSubCatalog.ECatalogOfferType
enum class ECatalogOfferType : uint8 {
	StaticPrice,
	DynamicBundle,
	ECatalogOfferType_MAX,
};

// Enum GameSubCatalog.ECatalogSaleType
enum class ECatalogSaleType : uint8 {
	NotOnSale,
	UndecoratedNewPrice,
	AmountOff,
	PercentOff,
	PercentOn,
	Strikethrough,
	MAX,
};

// Enum GameSubCatalog.EAppStore
enum class EAppStore : uint8 {
	DebugStore,
	EpicPurchasingService,
	IOSAppStore,
	WeGameStore,
	GooglePlayAppStore,
	KindleStore,
	PlayStation4Store,
	XboxLiveStore,
	NintendoEShop,
	SamsungGalaxyAppStore,
	MicrosoftStore,
	PlayStation5Store,
	MAX,
};

// Enum GameSubCatalog.EStoreCurrencyType
enum class EStoreCurrencyType : uint8 {
	RealMoney,
	MtxCurrency,
	GameItem,
	Other,
	MAX,
};

// ScriptStruct GameSubCatalog.CatalogPurchaseNotification
// Size: 0x20 (Inherited: 0x00)
struct FCatalogPurchaseNotification {
	struct FMcpLootResult LootResult; // 0x00(0x20)
};

// ScriptStruct GameSubCatalog.CatalogDownload
// Size: 0x20 (Inherited: 0x00)
struct FCatalogDownload {
	int32_t RefreshIntervalHrs; // 0x00(0x04)
	int32_t DailyPurchaseHrs; // 0x04(0x04)
	struct FDateTime Expiration; // 0x08(0x08)
	struct TArray<struct FStorefront> Storefronts; // 0x10(0x10)
};

// ScriptStruct GameSubCatalog.Storefront
// Size: 0x20 (Inherited: 0x00)
struct FStorefront {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FCatalogOffer> CatalogEntries; // 0x10(0x10)
};

// ScriptStruct GameSubCatalog.CatalogOffer
// Size: 0x260 (Inherited: 0x00)
struct FCatalogOffer {
	struct FString OfferId; // 0x00(0x10)
	struct FString DevName; // 0x10(0x10)
	struct TArray<struct FCatalogKeyValue> MetaInfo; // 0x20(0x10)
	enum class ECatalogOfferType OfferType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FCatalogItemPrice> Prices; // 0x38(0x10)
	struct FCatalogDynamicBundle DynamicBundleInfo; // 0x48(0x38)
	int32_t DailyLimit; // 0x80(0x04)
	int32_t WeeklyLimit; // 0x84(0x04)
	int32_t MonthlyLimit; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FString> Categories; // 0x90(0x10)
	struct FString CatalogGroup; // 0xa0(0x10)
	int32_t CatalogGroupPriority; // 0xb0(0x04)
	int32_t SortPriority; // 0xb4(0x04)
	struct FText Title; // 0xb8(0x18)
	struct FText ShortDescription; // 0xd0(0x18)
	struct FText Description; // 0xe8(0x18)
	struct FString AppStoreId[0xc]; // 0x100(0xc0)
	struct FCatalogMetaAssetInfo MetaAssetInfo; // 0x1c0(0x30)
	struct FString DisplayAssetPath; // 0x1f0(0x10)
	struct TArray<struct FItemQuantity> ItemGrants; // 0x200(0x10)
	struct TArray<struct FCatalogOfferRequirement> Requirements; // 0x210(0x10)
	struct FCatalogGiftInfo GiftInfo; // 0x220(0x28)
	bool Refundable; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct TArray<struct FString> DenyItemTemplateIds; // 0x250(0x10)
};

// ScriptStruct GameSubCatalog.CatalogGiftInfo
// Size: 0x28 (Inherited: 0x00)
struct FCatalogGiftInfo {
	bool bIsEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ForcedGiftBoxTemplateId; // 0x08(0x10)
	struct TArray<struct FCatalogOfferRequirement> PurchaseRequirements; // 0x18(0x10)
};

// ScriptStruct GameSubCatalog.CatalogOfferRequirement
// Size: 0x18 (Inherited: 0x00)
struct FCatalogOfferRequirement {
	enum class ECatalogRequirementType RequirementType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MinQuantity; // 0x04(0x04)
	struct FString RequiredId; // 0x08(0x10)
};

// ScriptStruct GameSubCatalog.ItemQuantity
// Size: 0x38 (Inherited: 0x00)
struct FItemQuantity {
	struct FString TemplateId; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FJsonObjectWrapper Attributes; // 0x18(0x20)
};

// ScriptStruct GameSubCatalog.CatalogMetaAssetInfo
// Size: 0x30 (Inherited: 0x00)
struct FCatalogMetaAssetInfo {
	struct FString StructName; // 0x00(0x10)
	struct FJsonObjectWrapper Payload; // 0x10(0x20)
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundle
// Size: 0x38 (Inherited: 0x00)
struct FCatalogDynamicBundle {
	int32_t DiscountedBasePrice; // 0x00(0x04)
	int32_t RegularBasePrice; // 0x04(0x04)
	int32_t FloorPrice; // 0x08(0x04)
	enum class EStoreCurrencyType CurrencyType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString CurrencySubType; // 0x10(0x10)
	enum class ECatalogSaleType DisplayType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FCatalogDynamicBundleItem> BundleItems; // 0x28(0x10)
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundleItem
// Size: 0x78 (Inherited: 0x00)
struct FCatalogDynamicBundleItem {
	struct FItemQuantity Item; // 0x00(0x38)
	bool bCanOwnMultiple; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t RegularPrice; // 0x3c(0x04)
	int32_t DiscountedPrice; // 0x40(0x04)
	int32_t AlreadyOwnedPriceReduction; // 0x44(0x04)
	struct FText Title; // 0x48(0x18)
	struct FText Description; // 0x60(0x18)
};

// ScriptStruct GameSubCatalog.CatalogItemPrice
// Size: 0x50 (Inherited: 0x00)
struct FCatalogItemPrice {
	enum class EStoreCurrencyType CurrencyType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString CurrencySubType; // 0x08(0x10)
	int32_t RegularPrice; // 0x18(0x04)
	int32_t FinalPrice; // 0x1c(0x04)
	struct FText PriceTextOverride; // 0x20(0x18)
	enum class ECatalogSaleType SaleType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FDateTime SaleExpiration; // 0x40(0x08)
	enum class EAppStore AppStoreId; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct GameSubCatalog.CatalogKeyValue
// Size: 0x20 (Inherited: 0x00)
struct FCatalogKeyValue {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct GameSubCatalog.CatalogItemSalePrice
// Size: 0x18 (Inherited: 0x00)
struct FCatalogItemSalePrice {
	int32_t SalePrice; // 0x00(0x04)
	enum class ECatalogSaleType SaleType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FDateTime StartTime; // 0x08(0x08)
	struct FDateTime EndTime; // 0x10(0x08)
};

// ScriptStruct GameSubCatalog.CatalogPurchaseInfoGift
// Size: 0x70 (Inherited: 0x00)
struct FCatalogPurchaseInfoGift {
	struct FString OfferId; // 0x00(0x10)
	enum class EStoreCurrencyType Currency; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString CurrencySubType; // 0x18(0x10)
	int32_t ExpectedTotalPrice; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString GameContext; // 0x30(0x10)
	struct TArray<struct FString> ReceiverAccountIds; // 0x40(0x10)
	struct FString GiftWrapTemplateId; // 0x50(0x10)
	struct FString PersonalMessage; // 0x60(0x10)
};

// ScriptStruct GameSubCatalog.CatalogPurchaseInfo
// Size: 0x40 (Inherited: 0x00)
struct FCatalogPurchaseInfo {
	struct FString OfferId; // 0x00(0x10)
	int32_t PurchaseQuantity; // 0x10(0x04)
	enum class EStoreCurrencyType Currency; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString CurrencySubType; // 0x18(0x10)
	int32_t ExpectedTotalPrice; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString GameContext; // 0x30(0x10)
};

// ScriptStruct GameSubCatalog.CatalogReceiptInfo
// Size: 0x50 (Inherited: 0x00)
struct FCatalogReceiptInfo {
	enum class EAppStore AppStore; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString AppStoreId; // 0x08(0x10)
	struct FString ReceiptId; // 0x18(0x10)
	struct FString ReceiptInfo; // 0x28(0x10)
	struct FString PurchaseCorrelationId; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct GameSubCatalog.KeychainDownload
// Size: 0x10 (Inherited: 0x00)
struct FKeychainDownload {
	char pad_0[0x10]; // 0x00(0x10)
};

