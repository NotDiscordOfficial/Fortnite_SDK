// BlueprintGeneratedClass GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C
// Size: 0xb10 (Inherited: 0xa70)
struct UGA_Athena_FloppingRabbit_Passive_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UGameplayEffect* GE_Active; // 0xa78(0x08)
	struct FGameplayTagContainer T_Active; // 0xa80(0x20)
	struct UGameplayEffect* GE_InWorld; // 0xaa0(0x08)
	struct FGameplayTagContainer T_InWorld; // 0xaa8(0x20)
	struct AActor* Projectile; // 0xac8(0x08)
	struct AActor* Wire; // 0xad0(0x08)
	float FailsafeDelay; // 0xad8(0x04)
	char pad_ADC[0x4]; // 0xadc(0x04)
	struct UGameplayEffect* GE_ReelIn; // 0xae0(0x08)
	struct FGameplayTagContainer T_ReelIn; // 0xae8(0x20)
	struct AB_FloppingRabbit_Weap_Athena_C* WeaponRod; // 0xb08(0x08)

	void SaveOutRod(); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SaveOutRod // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBobberHidden(bool HideBobber, struct AFortWeapon* CurrentWeapon, struct AB_FloppingRabbit_Weap_Athena_C* CastedToRabbitWeapon); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SetBobberHidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Removed_DCA556AE47E7D8C25D9A27899D5C963C(); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Removed_DCA556AE47E7D8C25D9A27899D5C963C // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Seat Changed(int32_t SeatIndex); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Seat Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EndFishing(); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.EndFishing // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive(int32_t EntryPoint); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

