// BlueprintGeneratedClass Hotfix_Container_Parent.Hotfix_Container_Parent_C
// Size: 0xe79 (Inherited: 0xe00)
struct AHotfix_Container_Parent_C : ABuildingContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe00(0x08)
	struct FScalableFloat Row_ActorEnabled; // 0xe08(0x28)
	struct FScalableFloat Row_InteractEnabled; // 0xe30(0x28)
	struct UParticleSystem* FX_Open; // 0xe58(0x08)
	struct FVector FX_OpenOffsetLocation; // 0xe60(0x0c)
	float FX_OpenPitchOffset; // 0xe6c(0x04)
	struct USoundBase* Sound_Open; // 0xe70(0x08)
	bool DisableLootOnDisableInteract; // 0xe78(0x01)

	void OnReady_8BE6ADB6479A5EF3145F32B245E584C6(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.OnReady_8BE6ADB6479A5EF3145F32B245E584C6 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLoot(); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.OnLoot // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Hotfix_Container_Parent(int32_t EntryPoint); // Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.ExecuteUbergraph_Hotfix_Container_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

