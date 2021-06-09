// ScriptStruct GameFeatures.GameFeatureComponentEntry
// Size: 0x58 (Inherited: 0x00)
struct FGameFeatureComponentEntry {
	SoftClassProperty ActorClass; // 0x00(0x28)
	SoftClassProperty ComponentClass; // 0x28(0x28)
	char bClientComponent : 1; // 0x50(0x01)
	char bServerComponent : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct GameFeatures.DataRegistrySourceToAdd
// Size: 0x60 (Inherited: 0x00)
struct FDataRegistrySourceToAdd {
	struct FName RegistryToAddTo; // 0x00(0x08)
	int32_t AssetPriority; // 0x08(0x04)
	char bClientSource : 1; // 0x0c(0x01)
	char bServerSource : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TSoftObjectPtr<struct UDataTable> DataTableToAdd; // 0x10(0x28)
	struct TSoftObjectPtr<struct UCurveTable> CurveTableToAdd; // 0x38(0x28)
};

// ScriptStruct GameFeatures.GameFeaturePluginStateMachineProperties
// Size: 0xa0 (Inherited: 0x00)
struct FGameFeaturePluginStateMachineProperties {
	char pad_0[0x50]; // 0x00(0x50)
	struct UGameFeatureData* GameFeatureData; // 0x50(0x08)
	char pad_58[0x48]; // 0x58(0x48)
};

