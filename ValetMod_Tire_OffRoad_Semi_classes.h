// BlueprintGeneratedClass ValetMod_Tire_OffRoad_Semi.ValetMod_Tire_OffRoad_Semi_C
// Size: 0x410 (Inherited: 0x3f8)
struct AValetMod_Tire_OffRoad_Semi_C : AFortValetMod_Tire {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x400(0x08)
	struct FGameplayTag GC_ApplyTireMod; // 0x408(0x08)

	void ReceiveBeginPlay(); // Function ValetMod_Tire_OffRoad_Semi.ValetMod_Tire_OffRoad_Semi_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnModAppliedClient(struct AFortDagwoodVehicle* ModdedVehicle); // Function ValetMod_Tire_OffRoad_Semi.ValetMod_Tire_OffRoad_Semi_C.OnModAppliedClient // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ValetMod_Tire_OffRoad_Semi(int32_t EntryPoint); // Function ValetMod_Tire_OffRoad_Semi.ValetMod_Tire_OffRoad_Semi_C.ExecuteUbergraph_ValetMod_Tire_OffRoad_Semi // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

