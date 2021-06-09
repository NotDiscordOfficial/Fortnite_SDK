// BlueprintGeneratedClass B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C
// Size: 0x2f0 (Inherited: 0x220)
struct AB_SprayDecalTest_Flare_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* 1x1x1BoxCenterAligned; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float Fade_Decal_Out_Timeline_Fade_7EF328CF43B35714D32880AEAEB340F4; // 0x238(0x04)
	enum class ETimelineDirection Fade_Decal_Out_Timeline__Direction_7EF328CF43B35714D32880AEAEB340F4; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct UTimelineComponent* Fade Decal Out Timeline; // 0x240(0x08)
	struct UMaterialInterface* Decal Material; // 0x248(0x08)
	float Decal Scale Min; // 0x250(0x04)
	float Decal Scale Max; // 0x254(0x04)
	struct FRotator Decal Rotation; // 0x258(0x0c)
	struct FVector Decal Location; // 0x264(0x0c)
	struct UMaterialInstanceDynamic* Decal MID; // 0x270(0x08)
	struct FLinearColor Decal Color; // 0x278(0x10)
	char pad_288[0x8]; // 0x288(0x08)
	struct FTransform Decal Transform; // 0x290(0x30)
	float Decal Lifetime; // 0x2c0(0x04)
	float Decal Fadeout Time; // 0x2c4(0x04)
	float Decal RT Delay; // 0x2c8(0x04)
	float Decal Opacity; // 0x2cc(0x04)
	struct FVector Decal Scale; // 0x2d0(0x0c)
	float Decal X Opacity Hardness; // 0x2dc(0x04)
	float Decal Y Opacity Hardness; // 0x2e0(0x04)
	float Decal Z Falloff Hardness; // 0x2e4(0x04)
	struct UTexture* Decal Texture; // 0x2e8(0x08)

	void UserConstructionScript(); // Function B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Fade Decal Out Timeline__FinishedFunc(); // Function B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C.Fade Decal Out Timeline__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Fade Decal Out Timeline__UpdateFunc(); // Function B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C.Fade Decal Out Timeline__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_SprayDecalTest_Flare(int32_t EntryPoint); // Function B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C.ExecuteUbergraph_B_SprayDecalTest_Flare // (Final|UbergraphFunction) // @ game+0xda7c34
};

