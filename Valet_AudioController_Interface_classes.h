// BlueprintGeneratedClass Valet_AudioController_Interface.Valet_AudioController_Interface_C
// Size: 0x28 (Inherited: 0x28)
struct UValet_AudioController_Interface_C : UInterface {

	void OnVehicleFadedOut(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnVehicleFadedOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateVehicleFade(float Fade Amount); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnUpdateVehicleFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHitBuilding(struct FVector Impact Point); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnHitBuilding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHitPlayer(struct FVector ImpactPoint); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnHitPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSleepStateChange(bool Awake); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnSleepStateChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBoostEnd(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnBoostEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBoostStart(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnBoostStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDestroy(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDamage(float Damage Value); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTirePop(struct FName Bone Name); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnTirePop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnWindowBreak(struct FName Bone Name); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnWindowBreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnWaterStateChanged(bool Is Entering Water); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnWaterStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDriverStateChanged(bool Enter); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnDriverStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStopTick(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnStopTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHorn(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnHorn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHandbrake(bool Start); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnHandbrake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSuspensionCollision(bool FilteredHit, float Magnitude); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnSuspensionCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBodyCollision(struct FVector HitLocation, struct FVector NormalImpulse, bool FilteredHit, float Magnitude); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnBodyCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCacheReferences(struct AFortDagwoodVehicle* Vehicle); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnCacheReferences // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTick(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

