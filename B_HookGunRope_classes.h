// BlueprintGeneratedClass B_HookGunRope.B_HookGunRope_C
// Size: 0x2fc (Inherited: 0x290)
struct AB_HookGunRope_C : AFortHookGunRope {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	float Tight_NewTrack_0_FFAA67BE44D4D10C00414E828FA9423F; // 0x298(0x04)
	enum class ETimelineDirection Tight__Direction_FFAA67BE44D4D10C00414E828FA9423F; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Tight; // 0x2a0(0x08)
	float Reel_In_Tighten_22145CB34BE582F3E6C3B88B44E066FE; // 0x2a8(0x04)
	float Reel_In_Reel_Lerp_Controller_22145CB34BE582F3E6C3B88B44E066FE; // 0x2ac(0x04)
	enum class ETimelineDirection Reel_In__Direction_22145CB34BE582F3E6C3B88B44E066FE; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct UTimelineComponent* Reel In; // 0x2b8(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x2c0(0x08)
	struct USoundBase* ReelSound; // 0x2c8(0x08)
	struct USoundBase* ReattachSound; // 0x2d0(0x08)
	struct FActiveGameplayEffectHandle RopeGE; // 0x2d8(0x08)
	struct FGameplayTag RopeActiveTag; // 0x2e0(0x08)
	struct FGameplayTag BlockIncomingPickups; // 0x2e8(0x08)
	float MaxWiggleAmount; // 0x2f0(0x04)
	struct FGameplayTag Event_Reattach; // 0x2f4(0x08)

	void Reel In__FinishedFunc(); // Function B_HookGunRope.B_HookGunRope_C.Reel In__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Reel In__UpdateFunc(); // Function B_HookGunRope.B_HookGunRope_C.Reel In__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Tight__FinishedFunc(); // Function B_HookGunRope.B_HookGunRope_C.Tight__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Tight__UpdateFunc(); // Function B_HookGunRope.B_HookGunRope_C.Tight__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void End Reel(); // Function B_HookGunRope.B_HookGunRope_C.End Reel // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TightenRope(); // Function B_HookGunRope.B_HookGunRope_C.TightenRope // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_HookGunRope.B_HookGunRope_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function B_HookGunRope.B_HookGunRope_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_HookGunRope(int32_t EntryPoint); // Function B_HookGunRope.B_HookGunRope_C.ExecuteUbergraph_B_HookGunRope // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

