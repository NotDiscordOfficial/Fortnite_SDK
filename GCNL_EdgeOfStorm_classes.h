// BlueprintGeneratedClass GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C
// Size: 0x7e9 (Inherited: 0x7d0)
struct AGCNL_EdgeOfStorm_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UAudioComponent* Audio; // 0x7d8(0x08)
	struct AFortPlayerPawn* StormPawn; // 0x7e0(0x08)
	bool bBoundAudioPercent; // 0x7e8(0x01)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnExecute // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnActive // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Activated(struct FVector EdgeOfStorm); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Activated // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Deactivated(); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Deactivated // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_EdgeOfStorm(int32_t EntryPoint); // Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.ExecuteUbergraph_GCNL_EdgeOfStorm // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

