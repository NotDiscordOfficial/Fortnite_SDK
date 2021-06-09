// BlueprintGeneratedClass LandscapeWaterInfo.LandscapeWaterInfo_C
// Size: 0x290 (Inherited: 0x220)
struct ALandscapeWaterInfo_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	float Flood Water Level; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct UTexture2D* Game Texture- Water Velocity and Height; // 0x238(0x08)
	struct FTransform LS Transform; // 0x240(0x30)
	struct FIntPoint LS RT Res; // 0x270(0x08)
	struct FVector2D Quad Size; // 0x278(0x08)
	bool Use Terrain Velocity and Height Texture; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct UMaterialInstanceDynamic* External Water MID To Update; // 0x288(0x08)

	void ReceiveBeginPlay(); // Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Set Flood Water Level(); // Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Flood Water Level // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LandscapeWaterInfo(int32_t EntryPoint); // Function LandscapeWaterInfo.LandscapeWaterInfo_C.ExecuteUbergraph_LandscapeWaterInfo // (Final|UbergraphFunction) // @ game+0xda7c34
};

