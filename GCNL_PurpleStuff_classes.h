// BlueprintGeneratedClass GCNL_PurpleStuff.GCNL_PurpleStuff_C
// Size: 0x318 (Inherited: 0x308)
struct AGCNL_PurpleStuff_C : AFortGameplayCueNotify_Looping {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct APlayerPawn_Athena_Generic_C* PlayerActor; // 0x310(0x08)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_PurpleStuff(int32_t EntryPoint); // Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ExecuteUbergraph_GCNL_PurpleStuff // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

