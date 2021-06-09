// BlueprintGeneratedClass SR_Core.SR_Core_C
// Size: 0x453 (Inherited: 0x448)
struct USR_Core_C : UStreamingRadioPlayerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	bool bMixIsActive; // 0x450(0x01)
	bool bIsADS; // 0x451(0x01)
	bool bIsInsideVehicle; // 0x452(0x01)

	void GetIsMixAllowed(bool MixAllowed); // Function SR_Core.SR_Core_C.GetIsMixAllowed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UpdateMixState(); // Function SR_Core.SR_Core_C.UpdateMixState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleOnSourcePlayed(struct UStreamingRadioPlayerComponent* Component, struct FAthenaRadioStation AffectedSource); // Function SR_Core.SR_Core_C.HandleOnSourcePlayed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleADSStateUpdated(bool Is Targeting); // Function SR_Core.SR_Core_C.HandleADSStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleWeaponStateUpdated(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function SR_Core.SR_Core_C.HandleWeaponStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleSeatStateUpdated(struct AFortPawn* Pawn, bool Entering, int32_t SeatIdx); // Function SR_Core.SR_Core_C.HandleSeatStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPawnEnterSeat(struct TScriptInterface<None> Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SR_Core.SR_Core_C.OnPawnEnterSeat // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnPawnExitSeat(struct TScriptInterface<None> Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SR_Core.SR_Core_C.OnPawnExitSeat // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SR_Core(int32_t EntryPoint); // Function SR_Core.SR_Core_C.ExecuteUbergraph_SR_Core // (Final|UbergraphFunction) // @ game+0xda7c34
};

