// ScriptStruct LSALiveLink.LSALiveLinkFrameData
// Size: 0xb8 (Inherited: 0xb0)
struct FLSALiveLinkFrameData : FLiveLinkAnimationFrameData {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct LSALiveLink.LSALiveLinkStaticData
// Size: 0x30 (Inherited: 0x30)
struct FLSALiveLinkStaticData : FLiveLinkSkeletonStaticData {
};

// ScriptStruct LSALiveLink.LSALiveLinkTranslationProfile
// Size: 0xe8 (Inherited: 0x00)
struct FLSALiveLinkTranslationProfile {
	struct TSoftObjectPtr<struct USkeleton> Skeleton; // 0x00(0x28)
	struct TMap<struct FName, struct FName> BoneRemappings; // 0x28(0x50)
	struct TArray<struct FName> BonesToUse; // 0x78(0x10)
	char pad_88[0x60]; // 0x88(0x60)
};

// ScriptStruct LSALiveLink.LSALiveLinkSourceOptions
// Size: 0x01 (Inherited: 0x00)
struct FLSALiveLinkSourceOptions {
	char bWithSceneTime : 1; // 0x00(0x01)
	char bWithStringMetaData : 1; // 0x00(0x01)
	char bWithPropertyValues : 1; // 0x00(0x01)
	char bWithTransformTranslation : 1; // 0x00(0x01)
	char bWithTransformRotation : 1; // 0x00(0x01)
	char bWithTransformScale : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
};

