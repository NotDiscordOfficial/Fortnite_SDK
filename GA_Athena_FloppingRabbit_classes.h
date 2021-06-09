// BlueprintGeneratedClass GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C
// Size: 0xe30 (Inherited: 0xe04)
struct UGA_Athena_FloppingRabbit_C : UGA_Athena_Consumable_Throw_Parent_C {
	char pad_E04[0x4]; // 0xe04(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe08(0x08)
	struct FGameplayTag T_Active; // 0xe10(0x08)
	struct FGameplayTag T_InWorld; // 0xe18(0x08)
	struct UAnimMontage* CastMontageWeapon; // 0xe20(0x08)
	struct FGameplayTag InVehicleTag; // 0xe28(0x08)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer RelevantTags); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7(struct FName NotifyName); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7(struct FName NotifyName); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7(struct FName NotifyName); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7(struct FName NotifyName); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7(struct FName NotifyName); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_5FF18B9B4B9A1DE12D88D68E50AB8A5B(); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.Added_5FF18B9B4B9A1DE12D88D68E50AB8A5B // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ThrowMontageStarted(); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.ThrowMontageStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_FloppingRabbit(int32_t EntryPoint); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.ExecuteUbergraph_GA_Athena_FloppingRabbit // (Final|UbergraphFunction) // @ game+0xda7c34
};

