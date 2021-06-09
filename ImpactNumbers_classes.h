// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
// Size: 0x468 (Inherited: 0x458)
struct AImpactNumbers_C : AFortDamageNumbersActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x460(0x08)

	void init a new number set(struct FFortDamageNumberInfo NewDamageHitInfoStruct, struct FTransform OutCameraTransform, struct FVector OutNumberLocation); // Function ImpactNumbers.ImpactNumbers_C.init a new number set // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNewDamageNumber(struct FFortDamageNumberInfo NewDamageNumberInfo); // Function ImpactNumbers.ImpactNumbers_C.OnNewDamageNumber // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ImpactNumbers(int32_t EntryPoint); // Function ImpactNumbers.ImpactNumbers_C.ExecuteUbergraph_ImpactNumbers // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

