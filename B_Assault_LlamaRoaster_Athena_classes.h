// BlueprintGeneratedClass B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C
// Size: 0x14c1 (Inherited: 0x13c0)
struct AB_Assault_LlamaRoaster_Athena_C : AB_Assault_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13c0(0x08)
	struct UFortWeaponComponent_RecoilCurve* FortWeaponComponent_RecoilCurve; // 0x13c8(0x08)
	struct UFortAudioShapeLineComponent* FortAudioShapeLine; // 0x13d0(0x08)
	struct UNiagaraComponent* NS_LlamaRoaster_Chargeup_02; // 0x13d8(0x08)
	struct UNiagaraComponent* NS_LlamaRoaster_Overheat; // 0x13e0(0x08)
	struct UNiagaraComponent* NS_LlamaRoaster_NeutronStar; // 0x13e8(0x08)
	struct UFortWeaponFxComponent_Beam* FortWeaponFxComponent_Beam; // 0x13f0(0x08)
	struct UNiagaraComponent* NiagaraBeam; // 0x13f8(0x08)
	struct UAudioComponent* OverheatAudioLayer; // 0x1400(0x08)
	float AlphaFade_NewTrack_0_17351A5D470468D5E52E508982FAA76F; // 0x1408(0x04)
	enum class ETimelineDirection AlphaFade__Direction_17351A5D470468D5E52E508982FAA76F; // 0x140c(0x01)
	char pad_140D[0x3]; // 0x140d(0x03)
	struct UTimelineComponent* AlphaFade; // 0x1410(0x08)
	struct UCurveFloat* OverheatAudioFeedbackCurve; // 0x1418(0x08)
	struct FTimerHandle OverheatFXTimer; // 0x1420(0x08)
	struct FTimerHandle OverheatFXTimerReplicated; // 0x1428(0x08)
	float Range; // 0x1430(0x04)
	struct FGameplayTag GC_Firing; // 0x1434(0x08)
	bool AppliesCurieFire; // 0x143c(0x01)
	char pad_143D[0x3]; // 0x143d(0x03)
	struct AActor* LastDamagedActor; // 0x1440(0x08)
	struct FVector HitPoint; // 0x1448(0x0c)
	struct FVector SavePoint; // 0x1454(0x0c)
	bool bTriggerDown; // 0x1460(0x01)
	char pad_1461[0x3]; // 0x1461(0x03)
	float TriggerDownTime; // 0x1464(0x04)
	struct UCurveVector* RecoilVectorCurve; // 0x1468(0x08)
	struct FVector AccumulatedRecoil; // 0x1470(0x0c)
	float HorizRecoilMult; // 0x147c(0x04)
	float VertRecoilMult; // 0x1480(0x04)
	float LerpedAlpha; // 0x1484(0x04)
	bool debugRecoil; // 0x1488(0x01)
	char pad_1489[0x3]; // 0x1489(0x03)
	float Tick Delta Seconds; // 0x148c(0x04)
	struct UAnimMontage* Montage_Chargeup_Weapon; // 0x1490(0x08)
	struct UAnimMontage* Montage_Chargeup_Player; // 0x1498(0x08)
	struct UAnimMontage* Montage_StartFiring_Weapon; // 0x14a0(0x08)
	struct UAnimMontage* Montage_StartFriing_Player; // 0x14a8(0x08)
	struct UAnimMontage* Montage_FinishFiring_Weapon; // 0x14b0(0x08)
	struct UAnimMontage* Montage_FinishFiring_Player; // 0x14b8(0x08)
	bool bPlayFinishFiringFX; // 0x14c0(0x01)

	void AlphaFade__FinishedFunc(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.AlphaFade__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void AlphaFade__UpdateFunc(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.AlphaFade__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_2EE5A63F4B69BA44C3316CB357391388(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyEnd_2EE5A63F4B69BA44C3316CB357391388 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_2EE5A63F4B69BA44C3316CB357391388(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyBegin_2EE5A63F4B69BA44C3316CB357391388 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_2EE5A63F4B69BA44C3316CB357391388(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnInterrupted_2EE5A63F4B69BA44C3316CB357391388 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_2EE5A63F4B69BA44C3316CB357391388(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnBlendOut_2EE5A63F4B69BA44C3316CB357391388 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_2EE5A63F4B69BA44C3316CB357391388(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnCompleted_2EE5A63F4B69BA44C3316CB357391388 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_7451062C436093CBBE2AF3980E8F7950(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyEnd_7451062C436093CBBE2AF3980E8F7950 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_7451062C436093CBBE2AF3980E8F7950(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyBegin_7451062C436093CBBE2AF3980E8F7950 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_7451062C436093CBBE2AF3980E8F7950(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnInterrupted_7451062C436093CBBE2AF3980E8F7950 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_7451062C436093CBBE2AF3980E8F7950(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnBlendOut_7451062C436093CBBE2AF3980E8F7950 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_7451062C436093CBBE2AF3980E8F7950(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnCompleted_7451062C436093CBBE2AF3980E8F7950 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_6E7D44A54F7168F1B2016ABE4CA8589F(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyEnd_6E7D44A54F7168F1B2016ABE4CA8589F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_6E7D44A54F7168F1B2016ABE4CA8589F(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyBegin_6E7D44A54F7168F1B2016ABE4CA8589F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_6E7D44A54F7168F1B2016ABE4CA8589F(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnInterrupted_6E7D44A54F7168F1B2016ABE4CA8589F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_6E7D44A54F7168F1B2016ABE4CA8589F(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnBlendOut_6E7D44A54F7168F1B2016ABE4CA8589F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_6E7D44A54F7168F1B2016ABE4CA8589F(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnCompleted_6E7D44A54F7168F1B2016ABE4CA8589F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_BB649A224020969A85BD01A5F23E6B4A(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyEnd_BB649A224020969A85BD01A5F23E6B4A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_BB649A224020969A85BD01A5F23E6B4A(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyBegin_BB649A224020969A85BD01A5F23E6B4A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_BB649A224020969A85BD01A5F23E6B4A(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnInterrupted_BB649A224020969A85BD01A5F23E6B4A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_BB649A224020969A85BD01A5F23E6B4A(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnBlendOut_BB649A224020969A85BD01A5F23E6B4A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_BB649A224020969A85BD01A5F23E6B4A(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnCompleted_BB649A224020969A85BD01A5F23E6B4A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_2C3CBDAC4FB573571577D9BA5421AE52(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyEnd_2C3CBDAC4FB573571577D9BA5421AE52 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_2C3CBDAC4FB573571577D9BA5421AE52(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyBegin_2C3CBDAC4FB573571577D9BA5421AE52 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_2C3CBDAC4FB573571577D9BA5421AE52(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnInterrupted_2C3CBDAC4FB573571577D9BA5421AE52 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_2C3CBDAC4FB573571577D9BA5421AE52(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnBlendOut_2C3CBDAC4FB573571577D9BA5421AE52 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_2C3CBDAC4FB573571577D9BA5421AE52(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnCompleted_2C3CBDAC4FB573571577D9BA5421AE52 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_1471B9C640E1AA0B098754B9AD6438F6(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyEnd_1471B9C640E1AA0B098754B9AD6438F6 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_1471B9C640E1AA0B098754B9AD6438F6(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnNotifyBegin_1471B9C640E1AA0B098754B9AD6438F6 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_1471B9C640E1AA0B098754B9AD6438F6(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnInterrupted_1471B9C640E1AA0B098754B9AD6438F6 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_1471B9C640E1AA0B098754B9AD6438F6(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnBlendOut_1471B9C640E1AA0B098754B9AD6438F6 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_1471B9C640E1AA0B098754B9AD6438F6(struct FName NotifyName); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnCompleted_1471B9C640E1AA0B098754B9AD6438F6 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerDown(struct AFortWeapon* Weapon); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.TriggerDown // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CustomEvent_1(struct AFortWeapon* Weapon); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStartOverheated(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnStartOverheated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateRecoil(float RecoilAlpha); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.UpdateRecoil // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Apply Cam Deltas(struct FVector RecoilRaw); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.Apply Cam Deltas // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStopWeaponFireFX(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnStopWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnFinishedCooling(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnFinishedCooling // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartCooling(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnStartCooling // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnOverheatValueChanged_Event_1(float CurrentValue, float MaxValue, enum class EFortWeaponOverheatState State, bool bIsInCooldown); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnOverheatValueChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayImpactFX(struct FHitResult HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnStartHeating(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnStartHeating // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PlayFinishedFiringMontage(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.PlayFinishedFiringMontage // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayStartFiringMontage(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.PlayStartFiringMontage // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayChargeupMontage(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.PlayChargeupMontage // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStartCharge(); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.OnStartCharge // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Assault_LlamaRoaster_Athena(int32_t EntryPoint); // Function B_Assault_LlamaRoaster_Athena.B_Assault_LlamaRoaster_Athena_C.ExecuteUbergraph_B_Assault_LlamaRoaster_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

