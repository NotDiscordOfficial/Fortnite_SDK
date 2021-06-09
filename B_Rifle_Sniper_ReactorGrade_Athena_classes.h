// BlueprintGeneratedClass B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C
// Size: 0x1440 (Inherited: 0x13c0)
struct AB_Rifle_Sniper_ReactorGrade_Athena_C : AB_Rifle_NoScope_Athena_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13c0(0x08)
	struct UAudioComponent* Audio_MinChargedReached; // 0x13c8(0x08)
	struct UFortWeaponComponent_RecoilCurve* FortWeaponComponent_RecoilCurve; // 0x13d0(0x08)
	struct UFortWeaponFxComponent_ChargeAimLocation* FortWeaponFxComponent_ChargeAimLocation; // 0x13d8(0x08)
	struct FTimerHandle Charging Handle; // 0x13e0(0x08)
	struct FScalableFloat Row_TraceThroughBuildingsLimit; // 0x13e8(0x28)
	struct UForceFeedbackEffect* FF Effect Min Charge Reached; // 0x1410(0x08)
	struct UForceFeedbackComponent* RefFFEvent; // 0x1418(0x08)
	struct UForceFeedbackEffect* FF Effect Min To Max Charge; // 0x1420(0x08)
	struct UAnimMontage* Montage_Chargeup_Weapon; // 0x1428(0x08)
	struct UAnimMontage* Montage_Chargeup_Player; // 0x1430(0x08)
	struct FGameplayTag IsTargetingTag; // 0x1438(0x08)

	void GetDamageStartAndDirection(struct FVector DamageStart, struct FVector Direction); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.GetDamageStartAndDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_73D1D33E4FEC2AE3F6340B9CEC25CD3A(struct FName NotifyName); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnNotifyEnd_73D1D33E4FEC2AE3F6340B9CEC25CD3A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_73D1D33E4FEC2AE3F6340B9CEC25CD3A(struct FName NotifyName); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnNotifyBegin_73D1D33E4FEC2AE3F6340B9CEC25CD3A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_73D1D33E4FEC2AE3F6340B9CEC25CD3A(struct FName NotifyName); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnInterrupted_73D1D33E4FEC2AE3F6340B9CEC25CD3A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_73D1D33E4FEC2AE3F6340B9CEC25CD3A(struct FName NotifyName); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnBlendOut_73D1D33E4FEC2AE3F6340B9CEC25CD3A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_73D1D33E4FEC2AE3F6340B9CEC25CD3A(struct FName NotifyName); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnCompleted_73D1D33E4FEC2AE3F6340B9CEC25CD3A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_7319C0D84136FBA734AF66BA1F9E9C6D(struct FName NotifyName); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnNotifyEnd_7319C0D84136FBA734AF66BA1F9E9C6D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_7319C0D84136FBA734AF66BA1F9E9C6D(struct FName NotifyName); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnNotifyBegin_7319C0D84136FBA734AF66BA1F9E9C6D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_7319C0D84136FBA734AF66BA1F9E9C6D(struct FName NotifyName); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnInterrupted_7319C0D84136FBA734AF66BA1F9E9C6D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_7319C0D84136FBA734AF66BA1F9E9C6D(struct FName NotifyName); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnBlendOut_7319C0D84136FBA734AF66BA1F9E9C6D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_7319C0D84136FBA734AF66BA1F9E9C6D(struct FName NotifyName); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnCompleted_7319C0D84136FBA734AF66BA1F9E9C6D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnChargeUp(); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnChargeUp // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Tick Charge Aim(); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.Tick Charge Aim // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEndCharge(); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnEndCharge // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnUnEquip(); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnReachedMinCharge(); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnReachedMinCharge // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Play Charge Montage(); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.Play Charge Montage // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Start Recoil(); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.Start Recoil // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSetTargeting(bool bNewIsTargeting); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnSetTargeting // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EndRecoil(); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.EndRecoil // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRemoteClientReachedMinCharge(); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.OnRemoteClientReachedMinCharge // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Rifle_Sniper_ReactorGrade_Athena(int32_t EntryPoint); // Function B_Rifle_Sniper_ReactorGrade_Athena.B_Rifle_Sniper_ReactorGrade_Athena_C.ExecuteUbergraph_B_Rifle_Sniper_ReactorGrade_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

