// BlueprintGeneratedClass Hotfix_BuildingPropWithLootComp_Parent.Hotfix_BuildingPropWithLootComp_Parent_C
// Size: 0xd11 (Inherited: 0xc90)
struct AHotfix_BuildingPropWithLootComp_Parent_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc90(0x08)
	struct UBuildingActorLootDropOnDeathComponent_C* BuildingActorLootDropOnDeathComponent; // 0xc98(0x08)
	struct FScalableFloat Row_ActorEnabled; // 0xca0(0x28)
	struct FScalableFloat Row_InteractEnabled; // 0xcc8(0x28)
	struct UParticleSystem* FX_Open; // 0xcf0(0x08)
	struct FVector FX_OpenOffsetLocation; // 0xcf8(0x0c)
	float FX_OpenPitchOffset; // 0xd04(0x04)
	struct USoundBase* Sound_Open; // 0xd08(0x08)
	bool DisableLootOnDisableInteract; // 0xd10(0x01)

	void OnReady_66411D114A9FDC07FF39F89B35B7E7AB(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function Hotfix_BuildingPropWithLootComp_Parent.Hotfix_BuildingPropWithLootComp_Parent_C.OnReady_66411D114A9FDC07FF39F89B35B7E7AB // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Hotfix_BuildingPropWithLootComp_Parent.Hotfix_BuildingPropWithLootComp_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLoot_2(); // Function Hotfix_BuildingPropWithLootComp_Parent.Hotfix_BuildingPropWithLootComp_Parent_C.OnLoot_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Hotfix_BuildingPropWithLootComp_Parent(int32_t EntryPoint); // Function Hotfix_BuildingPropWithLootComp_Parent.Hotfix_BuildingPropWithLootComp_Parent_C.ExecuteUbergraph_Hotfix_BuildingPropWithLootComp_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

