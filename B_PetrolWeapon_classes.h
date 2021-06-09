// BlueprintGeneratedClass B_PetrolWeapon.B_PetrolWeapon_C
// Size: 0x13c9 (Inherited: 0x1301)
struct AB_PetrolWeapon_C : AB_Ranged_Generic_Athena_Deprecated_C {
	char pad_1301[0x7]; // 0x1301(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1308(0x08)
	struct UFortSplatterSourceComponent* FortSplatterSource; // 0x1310(0x08)
	bool EnableAmmoMod; // 0x1318(0x01)
	char pad_1319[0x7]; // 0x1319(0x07)
	struct ABGA_Petrol_Pickup_C* AttachedBGAActor; // 0x1320(0x08)
	struct FName AttachSocket; // 0x1328(0x08)
	struct FVector AttachedBGAScale; // 0x1330(0x0c)
	char pad_133C[0x4]; // 0x133c(0x04)
	struct FTransform AttachedBGARelativeTransform; // 0x1340(0x30)
	struct TScriptInterface<None> InventoryInterface; // 0x1370(0x10)
	struct FGuid InventoryGUID; // 0x1380(0x10)
	struct UNiagaraComponent* NS_FuelLeaking; // 0x1390(0x08)
	struct FScalableFloat IsShootableWhileHeld; // 0x1398(0x28)
	struct AFortWeapon* WeaponReference; // 0x13c0(0x08)
	bool ShowHUDKeyActions; // 0x13c8(0x01)

	void OnRep_AttachedBGAActor(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnRep_AttachedBGAActor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSpawnProjectile(struct AFortProjectileBase* SpawnProjectile); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnSpawnProjectile // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void UpdateAndAttachBGA(); // Function B_PetrolWeapon.B_PetrolWeapon_C.UpdateAndAttachBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEquip(Copy)(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnEquip(Copy) // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStopWeaponFireFX(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnStopWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUnEquip(Copy)(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnEquip(Copy) // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnUnEquip(); // Function B_PetrolWeapon.B_PetrolWeapon_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_PetrolWeapon.B_PetrolWeapon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HUDKeyAction_Targeting(bool IsTargeting); // Function B_PetrolWeapon.B_PetrolWeapon_C.HUDKeyAction_Targeting // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHolstered(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnHolstered // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnUnholstered(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnholstered // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BindHolsterEvents(); // Function B_PetrolWeapon.B_PetrolWeapon_C.BindHolsterEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnbindHolsterEvents(); // Function B_PetrolWeapon.B_PetrolWeapon_C.UnbindHolsterEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BGADestroyedWhileHeld(); // Function B_PetrolWeapon.B_PetrolWeapon_C.BGADestroyedWhileHeld // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReplicateOnUnholstered(); // Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnUnholstered // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReplicateOnHolstered(); // Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnHolstered // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_PetrolWeapon(int32_t EntryPoint); // Function B_PetrolWeapon.B_PetrolWeapon_C.ExecuteUbergraph_B_PetrolWeapon // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

