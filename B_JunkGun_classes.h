// BlueprintGeneratedClass B_JunkGun.B_JunkGun_C
// Size: 0x1478 (Inherited: 0x13c0)
struct AB_JunkGun_C : AB_Ranged_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13c0(0x08)
	struct UAudioComponent* Motor Loop; // 0x13c8(0x08)
	struct UNiagaraComponent* NS_Idle_JunkGun; // 0x13d0(0x08)
	bool IsHit; // 0x13d8(0x01)
	char pad_13D9[0x3]; // 0x13d9(0x03)
	struct FVector HitLocation; // 0x13dc(0x0c)
	float StoredResource; // 0x13e8(0x04)
	char pad_13EC[0x4]; // 0x13ec(0x04)
	struct USoundBase* LowAmmoSound; // 0x13f0(0x08)
	bool IsNotFull; // 0x13f8(0x01)
	char pad_13F9[0x7]; // 0x13f9(0x07)
	struct USoundBase* MotorLoop3P; // 0x1400(0x08)
	struct USoundBase* MotorLoop1P; // 0x1408(0x08)
	struct FGameplayTagContainer PickupTruckTag; // 0x1410(0x20)
	struct FGameplayTagContainer HelicopterTag; // 0x1430(0x20)
	struct APlayerPawn_Athena_Generic_Parent_C* WeaponOwnerReference; // 0x1450(0x08)
	struct FVector Normal; // 0x1458(0x0c)
	char pad_1464[0x4]; // 0x1464(0x04)
	struct FMulticastInlineDelegate OnAmmoPickup; // 0x1468(0x10)

	void SetSuctionValues(bool IsHit, bool IsNotFull, struct FVector HitLocation, float StoredResource, struct FVector Normal); // Function B_JunkGun.B_JunkGun_C.SetSuctionValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StoreSuctionValues(bool IsHit, bool IsNotFull, struct FVector HitLocation, float StoredResource, struct FVector Normal); // Function B_JunkGun.B_JunkGun_C.StoreSuctionValues // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_JunkGun.B_JunkGun_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_JunkGun.B_JunkGun_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void StartMotorIdleSound(); // Function B_JunkGun.B_JunkGun_C.StartMotorIdleSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopMotorIdleSound(); // Function B_JunkGun.B_JunkGun_C.StopMotorIdleSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHolsterHandleMotorIdle(); // Function B_JunkGun.B_JunkGun_C.OnHolsterHandleMotorIdle // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EnterVehicleEvent(); // Function B_JunkGun.B_JunkGun_C.EnterVehicleEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExitVehicleEvent(); // Function B_JunkGun.B_JunkGun_C.ExitVehicleEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponDetached(); // Function B_JunkGun.B_JunkGun_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void On Ammo Pickup(); // Function B_JunkGun.B_JunkGun_C.On Ammo Pickup // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EmoteStarted(struct UFortItemDefinition* MontageItemDef, struct AFortPawn* PawnEmoting); // Function B_JunkGun.B_JunkGun_C.EmoteStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EmoteStopped(struct UFortItemDefinition* MontageItemDef, struct AFortPawn* PawnEmoting); // Function B_JunkGun.B_JunkGun_C.EmoteStopped // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_JunkGun(int32_t EntryPoint); // Function B_JunkGun.B_JunkGun_C.ExecuteUbergraph_B_JunkGun // (Final|UbergraphFunction) // @ game+0xda7c34
	void OnAmmoPickup__DelegateSignature(); // Function B_JunkGun.B_JunkGun_C.OnAmmoPickup__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

