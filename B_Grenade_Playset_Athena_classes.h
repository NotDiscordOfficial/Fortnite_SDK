// BlueprintGeneratedClass B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C
// Size: 0xe20 (Inherited: 0xe09)
struct AB_Grenade_Playset_Athena_C : AB_Grenade_Tower_Athena_C {
	char pad_E09[0x7]; // 0xe09(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe10(0x08)
	struct UFortPlaysetGrenadeInputComponent* AthenaPlaysetGrenadeInput; // 0xe18(0x08)

	void K2_OnUnEquip(); // Function B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Grenade_Playset_Athena(int32_t EntryPoint); // Function B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C.ExecuteUbergraph_B_Grenade_Playset_Athena // (Final|UbergraphFunction) // @ game+0xda7c34
};

