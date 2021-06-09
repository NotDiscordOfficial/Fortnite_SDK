// BlueprintGeneratedClass BP_Mother_Scooter_FX.BP_Mother_Scooter_FX_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_Mother_Scooter_FX_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioComponent* ScanningLoopingAudio; // 0x228(0x08)
	struct UNiagaraComponent* NS_Scooter_ScanPulse; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float ScanSpeed; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct FTimerHandle Timer_Ref; // 0x248(0x08)
	int32_t Timer_Count; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct FScalableFloat Radius; // 0x258(0x28)

	void PlayPingSound(); // Function BP_Mother_Scooter_FX.BP_Mother_Scooter_FX_C.PlayPingSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_Mother_Scooter_FX.BP_Mother_Scooter_FX_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function BP_Mother_Scooter_FX.BP_Mother_Scooter_FX_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_Mother_Scooter_FX(int32_t EntryPoint); // Function BP_Mother_Scooter_FX.BP_Mother_Scooter_FX_C.ExecuteUbergraph_BP_Mother_Scooter_FX // (Final|UbergraphFunction) // @ game+0xda7c34
};

