// Class GooseUI.GooseInventoryWidget
// Size: 0x388 (Inherited: 0x320)
struct UGooseInventoryWidget : ULTMWidgetBase {
	struct FScalableFloat WidgetEnabled; // 0x320(0x28)
	char pad_348[0x40]; // 0x348(0x40)

	void OpenWidget(struct UTexture2D* IconTexture, struct UFortWorldItemDefinition* ItemDef); // Function GooseUI.GooseInventoryWidget.OpenWidget // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void CloseWidget(); // Function GooseUI.GooseInventoryWidget.CloseWidget // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

// Class GooseUI.GooseWidgetBase
// Size: 0x338 (Inherited: 0x320)
struct UGooseWidgetBase : ULTMWidgetBase {
	char pad_320[0x18]; // 0x320(0x18)

	void OnUpdateNumberOfPlanes(int32_t FriendlyPlaneCount, int32_t EnemyPlaneCount); // Function GooseUI.GooseWidgetBase.OnUpdateNumberOfPlanes // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class GooseUI.GooseLeaderboardWidget
// Size: 0x340 (Inherited: 0x338)
struct UGooseLeaderboardWidget : UGooseWidgetBase {
	char pad_338[0x4]; // 0x338(0x04)
	bool bOnlyListEnemySquads; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)

	void UpdateLeaderboardUI(struct TArray<struct FGooseLeaderboardData> SortedLeaderboardInfo); // Function GooseUI.GooseLeaderboardWidget.UpdateLeaderboardUI // (BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
};

// Class GooseUI.GoosePlanePickupWidget
// Size: 0x350 (Inherited: 0x320)
struct UGoosePlanePickupWidget : ULTMWidgetBase {
	struct TArray<struct FGoosePickupDisplayData> DisplayData; // 0x320(0x10)
	char pad_330[0x20]; // 0x330(0x20)

	void OpenWidget(int32_t DisplayIndex, struct FName ChestName, struct FText DisplayText); // Function GooseUI.GoosePlanePickupWidget.OpenWidget // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void CloseWidget(); // Function GooseUI.GoosePlanePickupWidget.CloseWidget // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

// Class GooseUI.GoosePlaneWeaponWidget
// Size: 0x350 (Inherited: 0x320)
struct UGoosePlaneWeaponWidget : ULTMWidgetBase {
	struct TArray<struct FGooseWeaponDisplayData> DisplayData; // 0x320(0x10)
	char pad_330[0x20]; // 0x330(0x20)

	void OpenWidget(int32_t DisplayIndex, struct FGooseWeaponDisplayData InDisplayData, float StartTime); // Function GooseUI.GoosePlaneWeaponWidget.OpenWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CloseWidget(); // Function GooseUI.GoosePlaneWeaponWidget.CloseWidget // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

// Class GooseUI.GooseRadarIconWidget
// Size: 0x298 (Inherited: 0x288)
struct UGooseRadarIconWidget : UCommonUserWidget {
	enum class ERadarIconState IconState; // 0x288(0x01)
	char pad_289[0xf]; // 0x289(0x0f)

	void OnNewIconState(enum class ERadarIconState NewState); // Function GooseUI.GooseRadarIconWidget.OnNewIconState // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class GooseUI.GooseRadarWidgetBase
// Size: 0x2e0 (Inherited: 0x2c8)
struct UGooseRadarWidgetBase : UFortHUDElementWidget {
	struct UCanvasPanel* MyPanel; // 0x2c8(0x08)
	struct TArray<struct UGooseRadarIconWidget*> IconWidgets; // 0x2d0(0x10)

	void OnPlaneRep(struct TArray<struct AFortAthenaVehicle*> Planes); // Function GooseUI.GooseRadarWidgetBase.OnPlaneRep // (Final|Native|Protected|HasOutParms) // @ game+0x3dc9da0
};

// Class GooseUI.GooseSkydivingWidget
// Size: 0x330 (Inherited: 0x320)
struct UGooseSkydivingWidget : ULTMWidgetBase {
	char pad_320[0x10]; // 0x320(0x10)

	void OnStartSkydiving(); // Function GooseUI.GooseSkydivingWidget.OnStartSkydiving // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEndSkydiving(); // Function GooseUI.GooseSkydivingWidget.OnEndSkydiving // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class GooseUI.GooseTargetLeadingWidget
// Size: 0x4e0 (Inherited: 0x338)
struct UGooseTargetLeadingWidget : UGooseWidgetBase {
	struct AFortAthenaVehicle* TargetVehicle; // 0x338(0x08)
	struct AFortAthenaVehicle* BestNextTargetCandidate; // 0x340(0x08)
	struct AFortAthenaVehicle* ViewingPlayerVehicle; // 0x348(0x08)
	struct UWidgetComponent* AimingReticleWidgetComponent; // 0x350(0x08)
	struct AFortWeapon* PlayerWeapon; // 0x358(0x08)
	char pad_360[0x18]; // 0x360(0x18)
	struct FScalableFloat AimAtLocationLerpSpeed; // 0x378(0x28)
	struct FName AimingReticleComponentTag; // 0x3a0(0x08)
	struct FScalableFloat TargetChangeDelay; // 0x3a8(0x28)
	struct FScalableFloat TargetFindDelay; // 0x3d0(0x28)
	struct FScalableFloat VehicleDetectionRange; // 0x3f8(0x28)
	struct FScalableFloat VehicleDetectionAngle; // 0x420(0x28)
	struct FScalableFloat ScreenDetectionBoxHalfSize; // 0x448(0x28)
	struct FScalableFloat TargetUpdateRate; // 0x470(0x28)
	char pad_498[0x10]; // 0x498(0x10)
	struct FScalableFloat AimAtLocationUpdateRate; // 0x4a8(0x28)
	char pad_4D0[0x8]; // 0x4d0(0x08)
	struct TWeakObjectPtr<struct AFortPawn> CachedPawn; // 0x4d8(0x08)

	void UpdateTargetVehicle(); // Function GooseUI.GooseTargetLeadingWidget.UpdateTargetVehicle // (Final|Native|Private) // @ game+0x3dca068
	void UpdateLeadingReticlePosition(struct FVector TargetPosition, float InDeltaTime); // Function GooseUI.GooseTargetLeadingWidget.UpdateLeadingReticlePosition // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0xda7c34
	void UpdateAimAtLocation(); // Function GooseUI.GooseTargetLeadingWidget.UpdateAimAtLocation // (Final|Native|Private) // @ game+0x3dca054
	void ShowLeadingReticle(bool bShow); // Function GooseUI.GooseTargetLeadingWidget.ShowLeadingReticle // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayerWeaponChanged(struct AFortPawn* InPawn, struct AFortWeapon* InNewWeapon, struct AFortWeapon* InPlayerWeapon); // Function GooseUI.GooseTargetLeadingWidget.OnPlayerWeaponChanged // (Final|Native|Private) // @ game+0x3dc9f14
	void OnPlayerExitVehicle(); // Function GooseUI.GooseTargetLeadingWidget.OnPlayerExitVehicle // (Final|Native|Private) // @ game+0x3dc9f00
	void OnPlayerEnterVehicle(); // Function GooseUI.GooseTargetLeadingWidget.OnPlayerEnterVehicle // (Final|Native|Private) // @ game+0x3dc9eec
	void OnPlayerControllerPawnChanged(struct AFortPawn* NewPawn); // Function GooseUI.GooseTargetLeadingWidget.OnPlayerControllerPawnChanged // (Final|Native|Private) // @ game+0x3dc9e50
};

