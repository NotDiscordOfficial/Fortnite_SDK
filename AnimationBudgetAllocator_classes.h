// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters InParameters); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3e4b19c
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3e4b0b4
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xef0 (Inherited: 0xed0)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	char pad_ED0[0x18]; // 0xed0(0x18)
	char bAutoRegisterWithBudgetAllocator : 1; // 0xee8(0x01)
	char bAutoCalculateSignificance : 1; // 0xee8(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xee8(0x01)
	char pad_EE8_3 : 5; // 0xee8(0x01)
	char pad_EE9[0x7]; // 0xee9(0x07)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator // (Final|Native|Public|BlueprintCallable) // @ game+0x3e4b298
};

