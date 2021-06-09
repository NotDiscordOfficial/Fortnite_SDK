// Enum StoreSelectionUI.EOptionalLabel
enum class EOptionalLabel : uint8 {
	Label_DS,
	Label_NM,
	Max,
};

// ScriptStruct StoreSelectionUI.ItemData
// Size: 0x48 (Inherited: 0x00)
struct FItemData {
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x00(0x28)
	struct FText Name; // 0x28(0x18)
	char pad_40[0x8]; // 0x40(0x08)
};

