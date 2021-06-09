// Class NevadaUI.FortNevadaVehicleReticle
// Size: 0x358 (Inherited: 0x348)
struct UFortNevadaVehicleReticle : UFortAthenaVehicleDashboardWidget {
	struct AFortNevadaVehicle* OwningNevadaVehicle; // 0x348(0x08)
	char pad_350[0x8]; // 0x350(0x08)

	void OnVehicleStateChanged(enum class ENevadaFlightStates VehicleState); // Function NevadaUI.FortNevadaVehicleReticle.OnVehicleStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTractorBeamDetached(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDetached // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTractorBeamDeactivated(float Cooldown); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTractorBeamChargeStarted(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamChargeStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTractorBeamAttached(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamAttached // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTractorBeamActivated(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEnergyCanonFired(); // Function NevadaUI.FortNevadaVehicleReticle.OnEnergyCanonFired // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBatteryChanged(float BatteryLevel); // Function NevadaUI.FortNevadaVehicleReticle.OnBatteryChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

