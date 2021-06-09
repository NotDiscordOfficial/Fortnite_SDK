// Class LSALiveLink.LSALiveLinkDataHandler
// Size: 0x48 (Inherited: 0x38)
struct ULSALiveLinkDataHandler : ULiveStreamAnimationDataHandler {
	char pad_38[0x10]; // 0x38(0x10)

	void StopTrackingLiveLinkSubject(struct FLiveStreamAnimationHandleWrapper RegisteredName); // Function LSALiveLink.LSALiveLinkDataHandler.StopTrackingLiveLinkSubject // (Final|Native|Public|BlueprintCallable) // @ game+0x3fe4f9c
	bool StartTrackingLiveLinkSubject(struct FName LiveLinkSubject, struct FLiveStreamAnimationHandleWrapper RegisteredName, struct FLSALiveLinkSourceOptions Options, struct FLiveStreamAnimationHandleWrapper TranslationProfile); // Function LSALiveLink.LSALiveLinkDataHandler.StartTrackingLiveLinkSubject // (Final|Native|Public|BlueprintCallable) // @ game+0x3fe4d64
};

// Class LSALiveLink.LSALiveLinkFrameTranslator
// Size: 0x88 (Inherited: 0x28)
struct ULSALiveLinkFrameTranslator : ULiveLinkFrameTranslator {
	struct TMap<struct FLiveStreamAnimationHandleWrapper, struct FLSALiveLinkTranslationProfile> TranslationProfiles; // 0x28(0x50)
	char pad_78[0x10]; // 0x78(0x10)
};

// Class LSALiveLink.LSALiveLinkRole
// Size: 0x28 (Inherited: 0x28)
struct ULSALiveLinkRole : ULiveLinkBasicRole {
};

// Class LSALiveLink.LSALiveLinkSettings
// Size: 0x78 (Inherited: 0x38)
struct ULSALiveLinkSettings : UDeveloperSettings {
	struct TSoftObjectPtr<struct ULSALiveLinkFrameTranslator> FrameTranslator; // 0x38(0x28)
	char pad_60[0x18]; // 0x60(0x18)
};

// Class LSALiveLink.LiveLinkTestSkelMeshTrackerComponent
// Size: 0x180 (Inherited: 0xb0)
struct ULiveLinkTestSkelMeshTrackerComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct FName TranslationProfile; // 0xb8(0x08)
	struct FComponentReference SkelMeshComp; // 0xc0(0x28)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> WeakSkelMeshComp; // 0xe8(0x08)
	struct TArray<struct FBoneReference> BonesToTrack; // 0xf0(0x10)
	char pad_100[0x80]; // 0x100(0x80)

	void StopTrackingSkelMesh(); // Function LSALiveLink.LiveLinkTestSkelMeshTrackerComponent.StopTrackingSkelMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x3fe5034
	void StartTrackingSkelMesh(struct FName InSubjectName); // Function LSALiveLink.LiveLinkTestSkelMeshTrackerComponent.StartTrackingSkelMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x3fe4f04
};

