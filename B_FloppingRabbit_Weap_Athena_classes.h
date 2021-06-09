// BlueprintGeneratedClass B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C
// Size: 0xe2a (Inherited: 0xe09)
struct AB_FloppingRabbit_Weap_Athena_C : AB_UtilityItem_Generic_Athena_C {
	char pad_E09[0x7]; // 0xe09(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe10(0x08)
	struct AActor* Projectile; // 0xe18(0x08)
	struct AActor* Wire; // 0xe20(0x08)
	bool HideBobber; // 0xe28(0x01)
	bool OneHandGrip; // 0xe29(0x01)

	struct FName DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.DetermineFishLootTierNameAndSetLootForSpawner // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_OneHandGrip(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_OneHandGrip // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_HideBobber(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_HideBobber // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnUnEquip(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ForceKillFishing(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ForceKillFishing // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTetherDetached(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnTetherDetached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BindHolsterEvents(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.BindHolsterEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnbindHolsterEvents(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.UnbindHolsterEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHolstered(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnHolstered // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_FloppingRabbit_Weap_Athena(int32_t EntryPoint); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ExecuteUbergraph_B_FloppingRabbit_Weap_Athena // (Final|UbergraphFunction) // @ game+0xda7c34
};

