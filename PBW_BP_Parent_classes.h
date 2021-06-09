// BlueprintGeneratedClass PBW_BP_Parent.PBW_BP_Parent_C
// Size: 0xd08 (Inherited: 0xcf0)
struct APBW_BP_Parent_C : ABuildingWall {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xcf0(0x08)
	struct TArray<struct UStaticMesh*> StaticMeshAlternateArray; // 0xcf8(0x10)

	void OnRep_Random Chance(); // Function PBW_BP_Parent.PBW_BP_Parent_C.OnRep_Random Chance // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function PBW_BP_Parent.PBW_BP_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PBW_BP_Parent(int32_t EntryPoint); // Function PBW_BP_Parent.PBW_BP_Parent_C.ExecuteUbergraph_PBW_BP_Parent // (Final|UbergraphFunction) // @ game+0xda7c34
};

