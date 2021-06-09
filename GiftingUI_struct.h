// Enum GiftingUI.EGiftingPresentationMode
enum class EGiftingPresentationMode : uint8 {
	ConfirmPurchase,
	WrapOptions,
	GiftingProcess,
	GiftingError,
	GiftConfirmed,
	None,
	EGiftingPresentationMode_MAX,
};

// Enum GiftingUI.EGiftingPricePresentationMode
enum class EGiftingPricePresentationMode : uint8 {
	MtxCurrency,
	RealMoney,
	Hidden,
	EGiftingPricePresentationMode_MAX,
};

// Enum GiftingUI.EGiftingScreenPresentationMode
enum class EGiftingScreenPresentationMode : uint8 {
	ItemList,
	NoContent,
	EGiftingScreenPresentationMode_MAX,
};

// Enum GiftingUI.EFilterType
enum class EFilterType : uint8 {
	All,
	Party,
	EFilterType_MAX,
};

// Enum GiftingUI.ERecipientPresentationMode
enum class ERecipientPresentationMode : uint8 {
	Loading,
	GiftPrice,
	AlreadyOwned,
	Unavailable,
	ERecipientPresentationMode_MAX,
};

// ScriptStruct GiftingUI.FortGiftingRecipientState
// Size: 0x88 (Inherited: 0x00)
struct FFortGiftingRecipientState {
	struct FCatalogItemPrice Price; // 0x00(0x50)
	struct TArray<struct FItemQuantity> Items; // 0x50(0x10)
	char pad_60[0x28]; // 0x60(0x28)
};

