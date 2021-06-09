// BlueprintGeneratedClass B_CameraLens_Geyser.B_CameraLens_Geyser_C
// Size: 0x2f8 (Inherited: 0x2e0)
struct AB_CameraLens_Geyser_C : AEmitterCameraLensEffectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	float Timeline_0_Alpha_3D5AA2144E9B8D6D3B409B845315B143; // 0x2e8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_3D5AA2144E9B8D6D3B409B845315B143; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2f0(0x08)

	void Timeline_0__FinishedFunc(); // Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_CameraLens_Geyser(int32_t EntryPoint); // Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ExecuteUbergraph_B_CameraLens_Geyser // (Final|UbergraphFunction) // @ game+0xda7c34
};

