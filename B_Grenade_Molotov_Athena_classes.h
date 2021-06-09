// BlueprintGeneratedClass B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C
// Size: 0xe30 (Inherited: 0xe09)
struct AB_Grenade_Molotov_Athena_C : AB_ConsumableSmall_Athena_C {
	char pad_E09[0x7]; // 0xe09(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe10(0x08)
	struct UAudioComponent* AmbientAudio; // 0xe18(0x08)
	struct UNiagaraComponent* Niagara_Light; // 0xe20(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0xe28(0x08)

	void OnWeaponAttached(); // Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnUnEquip(); // Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Grenade_Molotov_Athena(int32_t EntryPoint); // Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.ExecuteUbergraph_B_Grenade_Molotov_Athena // (Final|UbergraphFunction) // @ game+0xda7c34
};

