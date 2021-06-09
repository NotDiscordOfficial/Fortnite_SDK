// Class PapayaTimedEvents.PapayaTimedEvents
// Size: 0x3f8 (Inherited: 0x220)
struct APapayaTimedEvents : AActor {
	struct TMap<struct FString, struct UMediaPlayer*> MediaPlayerMap; // 0x220(0x50)
	struct UPapayaTimedEventsResponderComponent* MeshEventResponder; // 0x270(0x08)
	struct TArray<struct AActor*> TimedEventActorTargets; // 0x278(0x10)
	char pad_288[0x8]; // 0x288(0x08)
	struct FMediaTimeEventArray TimedEventsArray; // 0x290(0x118)
	char pad_3A8[0x18]; // 0x3a8(0x18)
	struct FString ScreenName; // 0x3c0(0x10)
	char pad_3D0[0x28]; // 0x3d0(0x28)

	void ShutdownTimedEvents_Native(); // Function PapayaTimedEvents.PapayaTimedEvents.ShutdownTimedEvents_Native // (Final|Native|Public|BlueprintCallable) // @ game+0x3df0b5c
	void SetupTimedEvents_Native(struct FString ScreenName); // Function PapayaTimedEvents.PapayaTimedEvents.SetupTimedEvents_Native // (Final|Native|Public|BlueprintCallable) // @ game+0x3df0ab4
	void ResetTimedEvents_Native(); // Function PapayaTimedEvents.PapayaTimedEvents.ResetTimedEvents_Native // (Final|Native|Public|BlueprintCallable) // @ game+0x3df0aa0
	void OnRep_TimedEventsArray(struct FMediaTimeEventArray PreviousValue); // Function PapayaTimedEvents.PapayaTimedEvents.OnRep_TimedEventsArray // (Final|Native|Private|HasOutParms) // @ game+0x3df0978
	void OnRep_ScreenName(struct FString PreviousValue); // Function PapayaTimedEvents.PapayaTimedEvents.OnRep_ScreenName // (Final|Native|Private) // @ game+0x3df08d4
	void AddTimedEvent_Native(struct FString EventName, int64_t Time, struct FString EventParam); // Function PapayaTimedEvents.PapayaTimedEvents.AddTimedEvent_Native // (Final|Native|Public|BlueprintCallable) // @ game+0x3df0764
};

// Class PapayaTimedEvents.PapayaTimedEventsResponderComponent
// Size: 0x170 (Inherited: 0xf8)
struct UPapayaTimedEventsResponderComponent : UFortEventResponderComponent {
	char pad_F8[0x78]; // 0xf8(0x78)
};

