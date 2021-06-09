// BlueprintGeneratedClass B_CameraRainDrops_01.B_CameraRainDrops_01_C
// Size: 0x2f8 (Inherited: 0x2e0)
struct AB_CameraRainDrops_01_C : AEmitterCameraLensEffectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	float Alpha_Alpha_06897833405CC2B231B02C93C4E725A3; // 0x2e8(0x04)
	enum class ETimelineDirection Alpha__Direction_06897833405CC2B231B02C93C4E725A3; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct UTimelineComponent* Alpha; // 0x2f0(0x08)

	void Alpha__FinishedFunc(); // Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Alpha__UpdateFunc(); // Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_CameraRainDrops_01(int32_t EntryPoint); // Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01 // (Final|UbergraphFunction) // @ game+0xda7c34
};

