// Class EventModeRuntime.FortGameFrameworkComponent_EventMode
// Size: 0x210 (Inherited: 0xb0)
struct UFortGameFrameworkComponent_EventMode : UGameFrameworkComponent {
	char pad_B0[0x60]; // 0xb0(0x60)
	struct TSoftObjectPtr<struct UFortWeaponItemDefinition> ActivatorAsset; // 0x110(0x28)
	struct TArray<struct FUIExtension> UIExtensions; // 0x138(0x10)
	struct TMap<struct FGameplayTag, SoftClassProperty> TaggedUIExtensions; // 0x148(0x50)
	struct TArray<struct FEventModeFocusActor> FocusActors; // 0x198(0x10)
	char pad_1A8[0x8]; // 0x1a8(0x08)
	struct UInputComponent* InputComponent; // 0x1b0(0x08)
	struct TArray<struct FEventModeWidgetCachedData> CachedWidgetData; // 0x1b8(0x10)
	struct TSoftObjectPtr<struct AActor> CurrentlyFocusedActor; // 0x1c8(0x28)
	char pad_1F0[0x20]; // 0x1f0(0x20)

	void OnPlayerPawnPossessed(struct APawn* PossessedPawn); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnPlayerPawnPossessed // (Final|Native|Private) // @ game+0x3ce1cd8
	void OnExitVehicle(); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnExitVehicle // (Final|Native|Private) // @ game+0x3d41008
	void OnEnterVehicle(); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnEnterVehicle // (Final|Native|Private) // @ game+0x3d40fec
	bool GetIsFocusing(); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d40fd4
	bool GetIsFocusAvailable(); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d40fbc
	bool GetIsEventModeActive(); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsEventModeActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d40fa4
};

// Class EventModeRuntime.FortWeapon_EventMode
// Size: 0xe00 (Inherited: 0xe00)
struct AFortWeapon_EventMode : AFortWeapon {
};

