// BlueprintGeneratedClass BP_Background_Raytracing.BP_Background_Raytracing_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_Background_Raytracing_C : AActor {
	struct UStaticMeshComponent* SM_InvertedSphere_BackPlate_Half; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	bool FullSphere; // 0x230(0x01)
	bool UseCubemap; // 0x231(0x01)
	char pad_232[0x2]; // 0x232(0x02)
	float Brightness; // 0x234(0x04)
	struct UTexture* 2dTexture; // 0x238(0x08)
	struct UTexture* Cubemap; // 0x240(0x08)
	struct FLinearColor FadeColor; // 0x248(0x10)

	void UserConstructionScript(); // Function BP_Background_Raytracing.BP_Background_Raytracing_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

