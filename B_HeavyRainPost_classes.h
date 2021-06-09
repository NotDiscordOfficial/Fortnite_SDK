// BlueprintGeneratedClass B_HeavyRainPost.B_HeavyRainPost_C
// Size: 0x248 (Inherited: 0x220)
struct AB_HeavyRainPost_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPostProcessComponent* PostProcess; // 0x228(0x08)
	float Timeline_0_NewTrack_0_94328C264A3D77D59B39B9A6A4A4A124; // 0x230(0x04)
	enum class ETimelineDirection Timeline_0__Direction_94328C264A3D77D59B39B9A6A4A4A124; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct UTimelineComponent* Timeline_1; // 0x238(0x08)
	struct UMaterialInstanceDynamic* PP_MID; // 0x240(0x08)

	void UserConstructionScript(); // Function B_HeavyRainPost.B_HeavyRainPost_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__FinishedFunc(); // Function B_HeavyRainPost.B_HeavyRainPost_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function B_HeavyRainPost.B_HeavyRainPost_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void CE_Deactivate(); // Function B_HeavyRainPost.B_HeavyRainPost_C.CE_Deactivate // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_HeavyRainPost.B_HeavyRainPost_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_HeavyRainPost(int32_t EntryPoint); // Function B_HeavyRainPost.B_HeavyRainPost_C.ExecuteUbergraph_B_HeavyRainPost // (Final|UbergraphFunction) // @ game+0xda7c34
};

