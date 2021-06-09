// Enum LiveStreamAnimation.ELiveStreamAnimationRole
enum class ELiveStreamAnimationRole : uint8 {
	Proxy,
	Processor,
	Tracker,
	ELiveStreamAnimationRole_MAX,
};

// ScriptStruct LiveStreamAnimation.LiveStreamAnimationHandleWrapper
// Size: 0x08 (Inherited: 0x00)
struct FLiveStreamAnimationHandleWrapper {
	struct FName Handle; // 0x00(0x08)
};

