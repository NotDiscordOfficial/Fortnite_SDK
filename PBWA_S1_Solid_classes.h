// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
// Size: 0xd18 (Inherited: 0xcf0)
struct APBWA_S1_Solid_C : ABuildingWall {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xcf0(0x08)
	int32_t GnomeWallChance; // 0xcf8(0x04)
	int32_t GnomeWallMax; // 0xcfc(0x04)
	bool Gnomed; // 0xd00(0x01)
	char pad_D01[0x7]; // 0xd01(0x07)
	struct UMaterialInstanceConstant* GnomeMaterial; // 0xd08(0x08)
	struct UStaticMesh* GnomeWall; // 0xd10(0x08)

	void UserConstructionScript(); // Function PBWA_S1_Solid.PBWA_S1_Solid_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function PBWA_S1_Solid.PBWA_S1_Solid_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PBWA_S1_Solid(int32_t EntryPoint); // Function PBWA_S1_Solid.PBWA_S1_Solid_C.ExecuteUbergraph_PBWA_S1_Solid // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

