// Class LiveStreamAnimation.LiveStreamAnimationChannel
// Size: 0x78 (Inherited: 0x68)
struct ULiveStreamAnimationChannel : UChannel {
	char pad_68[0x10]; // 0x68(0x10)
};

// Class LiveStreamAnimation.LiveStreamAnimationDataHandler
// Size: 0x38 (Inherited: 0x28)
struct ULiveStreamAnimationDataHandler : UObject {
	struct ULiveStreamAnimationSubsystem* OwningSubsystem; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// Class LiveStreamAnimation.LiveStreamAnimationSettings
// Size: 0x70 (Inherited: 0x38)
struct ULiveStreamAnimationSettings : UDeveloperSettings {
	struct TArray<struct FName> HandleNames; // 0x38(0x10)
	struct TArray<struct FSoftClassPath> ConfiguredDataHandlers; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)
};

// Class LiveStreamAnimation.LiveStreamAnimationSubsystem
// Size: 0x78 (Inherited: 0x30)
struct ULiveStreamAnimationSubsystem : UGameInstanceSubsystem {
	char pad_30[0x20]; // 0x30(0x20)
	bool bEnabled; // 0x50(0x01)
	char pad_51[0x17]; // 0x51(0x17)
	struct TArray<struct ULiveStreamAnimationDataHandler*> ConfiguredDataHandlers; // 0x68(0x10)

	void SetRole(enum class ELiveStreamAnimationRole NewRole); // Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetRole // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3fdb044
	void SetAcceptClientPackets_Private(bool bInShouldAcceptClientPackets); // Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetAcceptClientPackets_Private // (Final|Native|Private|BlueprintCallable) // @ game+0x3fdafb0
	enum class ELiveStreamAnimationRole GetRole(); // Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetRole // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdaf9c
	struct ULiveStreamAnimationDataHandler* GetDataHandler(struct ULiveStreamAnimationDataHandler* Type); // Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetDataHandler // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdaef4
};

