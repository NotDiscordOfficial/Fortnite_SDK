// Enum MeshNetwork.EMeshNetworkNodeType
enum class EMeshNetworkNodeType : uint8 {
	Root,
	Inner,
	Edge,
	Client,
	Unknown,
	EMeshNetworkNodeType_MAX,
};

// Enum MeshNetwork.EMeshNetworkRelevancy
enum class EMeshNetworkRelevancy : uint8 {
	NotRelevant,
	RelevantToEdgeNodes,
	RelevantToClients,
	EMeshNetworkRelevancy_MAX,
};

// ScriptStruct MeshNetwork.NoAggregationParameters
// Size: 0x50 (Inherited: 0x00)
struct FNoAggregationParameters {
	struct TSet<struct FName> Parameters; // 0x00(0x50)
};

// ScriptStruct MeshNetwork.AggregatedFunction
// Size: 0x28 (Inherited: 0x00)
struct FAggregatedFunction {
	struct UFunction* Function; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct MeshNetwork.MeshMetaDataStruct
// Size: 0x01 (Inherited: 0x00)
struct FMeshMetaDataStruct {
	char pad_0[0x1]; // 0x00(0x01)
};

