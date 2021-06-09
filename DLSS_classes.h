// Class DLSS.DLSSOverrideSettings
// Size: 0x30 (Inherited: 0x28)
struct UDLSSOverrideSettings : UObject {
	enum class EDLSSSettingOverride EnableDLSSInEditorViewportsOverride; // 0x28(0x01)
	enum class EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x29(0x01)
	enum class EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class DLSS.DLSSSettings
// Size: 0x60 (Inherited: 0x28)
struct UDLSSSettings : UObject {
	uint32_t NVIDIANGXApplicationId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString ProductionBinariesPath; // 0x30(0x10)
	bool bProductionBinariesExists; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString NonProductionBinariesPath; // 0x48(0x10)
	bool bNonProductionBinariesExists; // 0x58(0x01)
	bool bEnableNonProductionBinariesInShipping; // 0x59(0x01)
	bool bEnableDLSSD3D12; // 0x5a(0x01)
	bool bEnableDLSSD3D11; // 0x5b(0x01)
	bool bEnableDLSSVulkan; // 0x5c(0x01)
	bool bEnableDLSSInEditorViewports; // 0x5d(0x01)
	bool bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x5e(0x01)
	bool bEnableDLSSInPlayInEditorViewports; // 0x5f(0x01)
};

