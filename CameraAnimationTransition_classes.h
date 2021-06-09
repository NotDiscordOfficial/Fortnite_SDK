// BlueprintGeneratedClass CameraAnimationTransition.CameraAnimationTransition_C
// Size: 0x2d8 (Inherited: 0x220)
struct ACameraAnimationTransition_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	float Timeline_0_NewTrack_0_2750533A46B9AEF2BE294F8153FE4FD4; // 0x230(0x04)
	enum class ETimelineDirection Timeline_0__Direction_2750533A46B9AEF2BE294F8153FE4FD4; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct UTimelineComponent* Timeline_1; // 0x238(0x08)
	struct AFortnitePartyBackdrop_Camera_C* CameraBR; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)
	struct FTransform CameraLocationBR; // 0x250(0x30)
	struct AFortnitePartyBackdrop_Camera_C* CameraBR16Player; // 0x280(0x08)
	struct AFortnitePartyBackdrop_Camera_C* CameraCreative; // 0x288(0x08)
	struct AFortnitePartyBackdrop_Camera_C* CameraCreative16Player; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
	struct FTransform CameraLocationCreative; // 0x2a0(0x30)
	float FOVPostion1; // 0x2d0(0x04)
	float FOVPostion2; // 0x2d4(0x04)

	void UserConstructionScript(); // Function CameraAnimationTransition.CameraAnimationTransition_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__FinishedFunc(); // Function CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void MoveCameraUp(); // Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraUp // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MoveCameraDown(); // Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraDown // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_CameraAnimationTransition(int32_t EntryPoint); // Function CameraAnimationTransition.CameraAnimationTransition_C.ExecuteUbergraph_CameraAnimationTransition // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

