// BlueprintGeneratedClass BP_AISC_Cosmetics_DangerGrape.BP_AISC_Cosmetics_DangerGrape_C
// Size: 0x2e0 (Inherited: 0x190)
struct UBP_AISC_Cosmetics_DangerGrape_C : UFortAthenaAISpawnerDataComponent_CosmeticLoadout {
	struct FFortAthenaLoadout PlayerPawnLoadout; // 0x190(0x140)
	struct TArray<struct UCustomCharacterPart*> PlayerCustomCharacterParts; // 0x2d0(0x10)

	void GetCustomCharacterParts(struct TArray<struct UCustomCharacterPart*> OutCustomCharacterParts); // Function BP_AISC_Cosmetics_DangerGrape.BP_AISC_Cosmetics_DangerGrape_C.GetCustomCharacterParts // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetLoadout(struct FFortAthenaLoadout OutLoadout); // Function BP_AISC_Cosmetics_DangerGrape.BP_AISC_Cosmetics_DangerGrape_C.GetLoadout // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

