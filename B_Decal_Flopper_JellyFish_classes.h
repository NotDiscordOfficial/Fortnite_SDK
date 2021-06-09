// BlueprintGeneratedClass B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C
// Size: 0x248 (Inherited: 0x228)
struct AB_Decal_Flopper_JellyFish_C : ADecalActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	float FadeIn_NewTrack_0_2F2CC4164B50B3516AA9909D745FF7CB; // 0x230(0x04)
	enum class ETimelineDirection FadeIn__Direction_2F2CC4164B50B3516AA9909D745FF7CB; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct UTimelineComponent* FadeIn; // 0x238(0x08)
	struct UMaterialInstanceDynamic* Decal_MID; // 0x240(0x08)

	void UserConstructionScript(); // Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FadeIn__FinishedFunc(); // Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void FadeIn__UpdateFunc(); // Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Decal_Flopper_JellyFish(int32_t EntryPoint); // Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.ExecuteUbergraph_B_Decal_Flopper_JellyFish // (Final|UbergraphFunction) // @ game+0xda7c34
};

