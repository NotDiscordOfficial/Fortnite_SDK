// BlueprintGeneratedClass B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C
// Size: 0x13b8 (Inherited: 0x1301)
struct AB_FireExtinguisherWeapon_C : AB_Ranged_Generic_Athena_Deprecated_C {
	char pad_1301[0x7]; // 0x1301(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1308(0x08)
	struct ABGA_FireExtinguisher_Pickup_C* AttachedBGAActor; // 0x1310(0x08)
	struct FName AttachSocket; // 0x1318(0x08)
	struct FTransform AttachedBGARelativeTransform; // 0x1320(0x30)
	bool EnableAmmoMod; // 0x1350(0x01)
	char pad_1351[0x7]; // 0x1351(0x07)
	struct FScalableFloat IsShootableWhileHeld; // 0x1358(0x28)
	struct FGuid InventoryGUID; // 0x1380(0x10)
	struct AFortWeapon* WeaponReference; // 0x1390(0x08)
	struct TScriptInterface<None> InventoryInterface; // 0x1398(0x10)
	bool ShowHUDKeyActions; // 0x13a8(0x01)
	char pad_13A9[0x3]; // 0x13a9(0x03)
	struct FVector AttachedBGAScale; // 0x13ac(0x0c)

	void OnRep_AttachedBGAActor(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.OnRep_AttachedBGAActor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BGADestroyedWhileHeld(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.BGADestroyedWhileHeld // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BindHolsterEvents(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.BindHolsterEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnbindHolsterEvents(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.UnbindHolsterEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnUnEquip(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnHolstered(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.OnHolstered // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReplicateOnHolstered(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.ReplicateOnHolstered // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateAndAttachBGA(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.UpdateAndAttachBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReplicateOnUnholstered(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.ReplicateOnUnholstered // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HUDKeyAction_Targeting(bool IsTargeting); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.HUDKeyAction_Targeting // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnUnholstered(); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.OnUnholstered // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_FireExtinguisherWeapon(int32_t EntryPoint); // Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.ExecuteUbergraph_B_FireExtinguisherWeapon // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

