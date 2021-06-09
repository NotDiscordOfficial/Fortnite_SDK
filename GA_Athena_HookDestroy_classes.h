// BlueprintGeneratedClass GA_Athena_HookDestroy.GA_Athena_HookDestroy_C
// Size: 0xb20 (Inherited: 0xa70)
struct UGA_Athena_HookDestroy_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	float CleanedAngle; // 0xa80(0x04)
	char pad_A84[0x4]; // 0xa84(0x04)
	struct TArray<struct FToyAngleSelectorInfo> LaunchAngleVariations; // 0xa88(0x10)
	struct UAnimMontage* TravelMontage; // 0xa98(0x08)
	bool debug; // 0xaa0(0x01)
	char pad_AA1[0x7]; // 0xaa1(0x07)
	struct AB_Hookgun_Athena_C* WeaponActor; // 0xaa8(0x08)
	struct FGameplayTagContainer ChangeEquipmentTag; // 0xab0(0x20)
	struct FGameplayTag RopeActiveTag; // 0xad0(0x08)
	struct UObject* NullMontage; // 0xad8(0x08)
	bool GliderGrappler; // 0xae0(0x01)
	char pad_AE1[0x3]; // 0xae1(0x03)
	float BadgerGrapeDelayFailsafe; // 0xae4(0x04)
	struct FGameplayTag DestroyEvent; // 0xae8(0x08)
	struct FGameplayTag Event_GrapplerHit; // 0xaf0(0x08)
	struct FGameplayTag Event_GrapplerReturn; // 0xaf8(0x08)
	struct FGameplayTagContainer T_HoverboardMontage; // 0xb00(0x20)

	void OnRep_BadgerGrapeDelayFailsafe(); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnRep_BadgerGrapeDelayFailsafe // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_OnEndAbility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PickGrappleMontage(float PitchAngle, struct FName SectionName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.PickGrappleMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnRep_AmmoReserves(); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnRep_AmmoReserves // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_CB1C85E64FAE092AD81A04933C6C3263(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_CB1C85E64FAE092AD81A04933C6C3263 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_056D82C6464BB95E4DA717BEB307DB74(struct FGameplayEventData Payload); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_056D82C6464BB95E4DA717BEB307DB74 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_556AB31A412041E7414C21AA5F4A70CC(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_556AB31A412041E7414C21AA5F4A70CC // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_556AB31A412041E7414C21AA5F4A70CC(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_556AB31A412041E7414C21AA5F4A70CC // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_556AB31A412041E7414C21AA5F4A70CC(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_556AB31A412041E7414C21AA5F4A70CC // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_3FEADD91456C78D266936684DE918289(struct FGameplayEventData Payload); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_3FEADD91456C78D266936684DE918289 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_28C962BC449D96C668F3C4BE36E6CA62(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_28C962BC449D96C668F3C4BE36E6CA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_7CDAB77949F908D1F388AB845AE6C282(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_7CDAB77949F908D1F388AB845AE6C282 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_7CDAB77949F908D1F388AB845AE6C282(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_7CDAB77949F908D1F388AB845AE6C282 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_7CDAB77949F908D1F388AB845AE6C282(struct FName NotifyName); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_7CDAB77949F908D1F388AB845AE6C282 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_1B71851D49048B6433DA75B0D6007B6E(struct FGameplayEventData Payload); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_1B71851D49048B6433DA75B0D6007B6E // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSync_A7AA33494F9F686A79A026809EAEF410(); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnSync_A7AA33494F9F686A79A026809EAEF410 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ResetDoOnce(); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.ResetDoOnce // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_HookDestroy(int32_t EntryPoint); // Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.ExecuteUbergraph_GA_Athena_HookDestroy // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

