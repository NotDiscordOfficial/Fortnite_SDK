// ScriptStruct VkContentPackageResolver.VkContentPackageRequest
// Size: 0x80 (Inherited: 0x00)
struct FVkContentPackageRequest {
	struct FString ProjectID; // 0x00(0x10)
	struct FVkModuleVersionRef Root; // 0x10(0x20)
	struct TMap<struct FString, int32_t> Resolutions; // 0x30(0x50)
};

