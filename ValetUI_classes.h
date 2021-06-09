// Class ValetUI.FortAthenaVehicleDashboardWidget_Valet
// Size: 0x358 (Inherited: 0x348)
struct UFortAthenaVehicleDashboardWidget_Valet : UFortAthenaVehicleDashboardWidget {
	char pad_348[0x8]; // 0x348(0x08)
	struct UCommonTextBlock* Text_ItemName; // 0x350(0x08)

	void SetVehicleUsesRechargableBoost(bool bUsesRechargeableBoost); // Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.SetVehicleUsesRechargableBoost // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnValetNameUpdated(); // Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnValetNameUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateRechargeableBoostPercent(float BoostPercent); // Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnUpdateRechargeableBoostPercent // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRPMChanged(float NormalizedRPM); // Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnRPMChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRechargableBoostFilled(); // Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnRechargableBoostFilled // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	struct AFortDagwoodVehicle* GetDagwoodVehicle(); // Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.GetDagwoodVehicle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce4188
};

// Class ValetUI.FortMobileActionButtonBehavior_ValetBoost
// Size: 0x110 (Inherited: 0x108)
struct UFortMobileActionButtonBehavior_ValetBoost : UFortMobileActionButtonBehavior {
	char pad_108[0x8]; // 0x108(0x08)
};

