// BlueprintGeneratedClass GAB_CarryPlayer.GAB_CarryPlayer_C
// Size: 0xacc (Inherited: 0xaa0)
struct UGAB_CarryPlayer_C : UFortGameplayAbility_CarryPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaa0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xaa8(0x08)
	struct FName DBNOCarryHolster; // 0xab0(0x08)
	bool bCompletedPickup; // 0xab8(0x01)
	char pad_AB9[0x3]; // 0xab9(0x03)
	struct FVector PickupLocation; // 0xabc(0x0c)
	int32_t CarryLongDistanceThreshold; // 0xac8(0x04)

	void OnCancelled_C4440F1640E9A8D79E44FD8C23525824(); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.OnCancelled_C4440F1640E9A8D79E44FD8C23525824 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_C4440F1640E9A8D79E44FD8C23525824(); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.OnInterrupted_C4440F1640E9A8D79E44FD8C23525824 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_C4440F1640E9A8D79E44FD8C23525824(); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.OnBlendOut_C4440F1640E9A8D79E44FD8C23525824 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_C4440F1640E9A8D79E44FD8C23525824(); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.OnCompleted_C4440F1640E9A8D79E44FD8C23525824 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_CarryPlayer(int32_t EntryPoint); // Function GAB_CarryPlayer.GAB_CarryPlayer_C.ExecuteUbergraph_GAB_CarryPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

