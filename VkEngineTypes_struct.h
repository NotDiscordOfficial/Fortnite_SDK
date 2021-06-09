// Enum VkEngineTypes.EVkLinkPublishMode
enum class EVkLinkPublishMode : uint8 {
	Live,
	Playtest,
	EVkLinkPublishMode_MAX,
};

// Enum VkEngineTypes.EConsumerRole
enum class EConsumerRole : uint8 {
	Server,
	Client,
	EConsumerRole_MAX,
};

// Enum VkEngineTypes.EVkValidationFlags
enum class EVkValidationFlags : uint8 {
	None,
	VF_IgnoreValidation,
	VF_AllowMissingGameFeatureDataAsset,
	VF_AllowEngineContent,
	VF_AllowGameContent,
	VF_NoPreCheckVerse,
	EVkValidationFlags_MAX,
};

// ScriptStruct VkEngineTypes.VkResolvedModule
// Size: 0x48 (Inherited: 0x00)
struct FVkResolvedModule {
	struct FString ModuleId; // 0x00(0x10)
	struct FVkModuleBinaries Binaries; // 0x10(0x38)
};

// ScriptStruct VkEngineTypes.VkModuleBinaries
// Size: 0x38 (Inherited: 0x00)
struct FVkModuleBinaries {
	struct FString BaseUrl; // 0x00(0x10)
	struct FString Manifest; // 0x10(0x10)
	struct TArray<struct FString> Files; // 0x20(0x10)
	double TotalSizeKb; // 0x30(0x08)
};

// ScriptStruct VkEngineTypes.VkModuleVersionRef
// Size: 0x20 (Inherited: 0x00)
struct FVkModuleVersionRef {
	struct FString ModuleId; // 0x00(0x10)
	struct FString Version; // 0x10(0x10)
};

// ScriptStruct VkEngineTypes.VkPublishRequest
// Size: 0xa0 (Inherited: 0x00)
struct FVkPublishRequest {
	struct FVkModuleVersionRef Root; // 0x00(0x20)
	struct TMap<struct FString, int32_t> Resolutions; // 0x20(0x50)
	struct FString MatchmakingScheme; // 0x70(0x10)
	struct FJsonObjectWrapper Meta; // 0x80(0x20)
};

// ScriptStruct VkEngineTypes.VkCreateModuleVersionRequest
// Size: 0x90 (Inherited: 0x00)
struct FVkCreateModuleVersionRequest {
	struct TMap<struct FString, struct FString> RawFiles; // 0x00(0x50)
	struct TArray<struct FVkModuleVersionRef> Dependencies; // 0x50(0x10)
	struct FJsonObjectWrapper Meta; // 0x60(0x20)
	struct FString Checksum; // 0x80(0x10)
};

// ScriptStruct VkEngineTypes.VkCreateModuleRequest
// Size: 0xa0 (Inherited: 0x00)
struct FVkCreateModuleRequest {
	struct FString ModuleName; // 0x00(0x10)
	struct FJsonObjectWrapper Meta; // 0x10(0x20)
	struct FString ContentType; // 0x30(0x10)
	struct TMap<enum class EConsumerRole, bool> Relevance; // 0x40(0x50)
	struct FString DesiredModuleId; // 0x90(0x10)
};

// ScriptStruct VkEngineTypes.VkCreateProjectRequest
// Size: 0x90 (Inherited: 0x00)
struct FVkCreateProjectRequest {
	struct FString DesiredProjectId; // 0x00(0x10)
	struct FString OwnerId; // 0x10(0x10)
	struct FJsonObjectWrapper Meta; // 0x20(0x20)
	struct TMap<struct FString, struct FVkNamedId> Access; // 0x40(0x50)
};

// ScriptStruct VkEngineTypes.VkNamedId
// Size: 0x20 (Inherited: 0x00)
struct FVkNamedId {
	struct FString Name; // 0x00(0x10)
	struct FString ID; // 0x10(0x10)
};

// ScriptStruct VkEngineTypes.VkProjectDoc
// Size: 0x120 (Inherited: 0x00)
struct FVkProjectDoc {
	struct FString ProjectID; // 0x00(0x10)
	struct FDateTime Created; // 0x10(0x08)
	struct FDateTime Updated; // 0x18(0x08)
	struct FVkNamedId Owner; // 0x20(0x20)
	struct FVkNamedId Author; // 0x40(0x20)
	struct FJsonObjectWrapper Meta; // 0x60(0x20)
	struct TMap<struct FString, struct FVkNamedId> Access; // 0x80(0x50)
	struct TMap<enum class EVkLinkPublishMode, struct FVkPublishedLink> Links; // 0xd0(0x50)
};

// ScriptStruct VkEngineTypes.VkPublishedLink
// Size: 0x48 (Inherited: 0x00)
struct FVkPublishedLink {
	struct FString LinkCode; // 0x00(0x10)
	int32_t LinkVersion; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDateTime LastPublished; // 0x18(0x08)
	struct FString RootModuleId; // 0x20(0x10)
	int32_t ModuleVersion; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString MatchmakingScheme; // 0x38(0x10)
};

// ScriptStruct VkEngineTypes.VkModuleVersionDoc
// Size: 0x160 (Inherited: 0x00)
struct FVkModuleVersionDoc {
	struct FString ModuleId; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProjectID; // 0x18(0x10)
	struct FDateTime Created; // 0x28(0x08)
	struct FVkNamedId Author; // 0x30(0x20)
	struct FJsonObjectWrapper Meta; // 0x50(0x20)
	struct TArray<struct FVkModuleVersionRef> Dependencies; // 0x70(0x10)
	struct FVkJobOutput StagedFiles; // 0x80(0x38)
	struct FVkBuildVersion SourceVersion; // 0xb8(0x18)
	struct FString ContentType; // 0xd0(0x10)
	struct TMap<enum class EConsumerRole, bool> Relevance; // 0xe0(0x50)
	struct FString ArtifactKey; // 0x130(0x10)
	struct FString Checksum; // 0x140(0x10)
	struct TArray<struct FVkArtifactOption> Artifacts; // 0x150(0x10)
};

// ScriptStruct VkEngineTypes.VkArtifactOption
// Size: 0x28 (Inherited: 0x00)
struct FVkArtifactOption {
	struct FString ArtifactId; // 0x00(0x10)
	enum class EConsumerRole Role; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FVkContentFilter Filter; // 0x18(0x10)
};

// ScriptStruct VkEngineTypes.VkContentFilter
// Size: 0x10 (Inherited: 0x00)
struct FVkContentFilter {
	struct FString Platform; // 0x00(0x10)
};

// ScriptStruct VkEngineTypes.VkBuildVersion
// Size: 0x18 (Inherited: 0x00)
struct FVkBuildVersion {
	struct FString Major; // 0x00(0x10)
	int32_t Minor; // 0x10(0x04)
	int32_t Patch; // 0x14(0x04)
};

// ScriptStruct VkEngineTypes.VkJobOutput
// Size: 0x38 (Inherited: 0x00)
struct FVkJobOutput {
	struct FString BaseUrl; // 0x00(0x10)
	int32_t TotalSizeKb; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FString> Files; // 0x18(0x10)
	struct FString Manifest; // 0x28(0x10)
};

// ScriptStruct VkEngineTypes.VkContentManifest
// Size: 0x10 (Inherited: 0x00)
struct FVkContentManifest {
	struct TArray<struct FVkResolvedModule> Content; // 0x00(0x10)
};

// ScriptStruct VkEngineTypes.VkContentPackage
// Size: 0x70 (Inherited: 0x00)
struct FVkContentPackage {
	struct FString ProjectID; // 0x00(0x10)
	struct TMap<struct FString, struct FString> ProjectFlags; // 0x10(0x50)
	struct TArray<struct FVkModuleVersionWithArtifacts> Content; // 0x60(0x10)
};

// ScriptStruct VkEngineTypes.VkModuleVersion
// Size: 0x18 (Inherited: 0x00)
struct FVkModuleVersion {
	struct FString ModuleId; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct VkEngineTypes.VkModuleVersionWithArtifacts
// Size: 0x28 (Inherited: 0x18)
struct FVkModuleVersionWithArtifacts : FVkModuleVersion {
	struct TArray<struct FVkArtifactOption> Artifacts; // 0x18(0x10)
};

// ScriptStruct VkEngineTypes.VkModuleDoc
// Size: 0x148 (Inherited: 0x00)
struct FVkModuleDoc {
	struct FString ModuleId; // 0x00(0x10)
	struct FDateTime Created; // 0x10(0x08)
	struct FDateTime Updated; // 0x18(0x08)
	struct FVkNamedId Author; // 0x20(0x20)
	struct FString ProjectID; // 0x40(0x10)
	struct FString ModuleName; // 0x50(0x10)
	struct FString ContentType; // 0x60(0x10)
	struct TMap<enum class EConsumerRole, bool> Relevance; // 0x70(0x50)
	struct FString AliasForModuleId; // 0xc0(0x10)
	struct FJsonObjectWrapper Meta; // 0xd0(0x20)
	struct TMap<struct FString, int32_t> Labels; // 0xf0(0x50)
	int32_t LatestVersion; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// ScriptStruct VkEngineTypes.VkMetaDataFlags
// Size: 0x50 (Inherited: 0x00)
struct FVkMetaDataFlags {
	struct TMap<struct FString, struct FString> _validation_flags; // 0x00(0x50)
};

