// BlueprintGeneratedClass B_Pickups_Parent.B_Pickups_Parent_C
// Size: 0x49c (Inherited: 0x368)
struct AB_Pickups_Parent_C : AFortPickupsParent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct USceneComponent* Root; // 0x370(0x08)
	float MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7; // 0x378(0x04)
	float MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7; // 0x37c(0x04)
	enum class ETimelineDirection MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UTimelineComponent* MobileSelectedTL; // 0x388(0x08)
	struct UStaticMeshComponent* Static_Mesh_Pickup; // 0x390(0x08)
	struct USkeletalMeshComponent* Skeletal_Mesh_Pickup; // 0x398(0x08)
	struct UPrimitiveComponent* SkeletalOrStaticMeshAssetPrimitive; // 0x3a0(0x08)
	int32_t CurrentElementIndex; // 0x3a8(0x04)
	bool Tossed; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	float Component Radius (Scaled); // 0x3b0(0x04)
	float Component Radius Multiplier; // 0x3b4(0x04)
	struct TArray<struct FLinearColor> Outline Rarity Colors; // 0x3b8(0x10)
	float Component Radius; // 0x3c8(0x04)
	float Picked Up Delay Before Glow; // 0x3cc(0x04)
	float Picked Up Fade In Time; // 0x3d0(0x04)
	float Picked Up Hold Time; // 0x3d4(0x04)
	float Picked Up Fade Out Time; // 0x3d8(0x04)
	float Picked Up Sweep Speed; // 0x3dc(0x04)
	struct UParticleSystem* Picked Up Trail PS; // 0x3e0(0x08)
	struct TArray<float> Sparkle Spawn Rate (Picked Up); // 0x3e8(0x10)
	struct TArray<float> Lifetime (Picked Up); // 0x3f8(0x10)
	struct UForceFeedbackEffect* PickupForceFeedback; // 0x408(0x08)
	struct TArray<struct FString> Names of Materials And Parents Exempt from Repartening; // 0x410(0x10)
	bool HasUniqueMaterialIds; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UParticleSystemComponent* BackgroundParticleSystem; // 0x428(0x08)
	struct TArray<struct FLinearColor> BackgroundRarityColors; // 0x430(0x10)
	float Random Rotation; // 0x440(0x04)
	struct FVector MobileSelectedOffset; // 0x444(0x0c)
	struct FVector MobileSelectedScale; // 0x450(0x0c)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct UStaticMeshComponent* MobileInteractIcon; // 0x460(0x08)
	struct FVector MobileInteractIconLocation; // 0x468(0x0c)
	struct FVector MobileInteractIconScale; // 0x474(0x0c)
	struct UMaterialInterface* MobileInteractionMaterial; // 0x480(0x08)
	bool PickedUp; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	struct FLinearColor MissionItemOutlineColor; // 0x48c(0x10)

	void Mobile Interation Icon Setup(); // Function B_Pickups_Parent.B_Pickups_Parent_C.Mobile Interation Icon Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetVisibleMobileInteractIcon(bool Visible); // Function B_Pickups_Parent.B_Pickups_Parent_C.SetVisibleMobileInteractIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetActiveBackgroundParticleSystem(bool Active, bool Reset); // Function B_Pickups_Parent.B_Pickups_Parent_C.SetActiveBackgroundParticleSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetHiddenBackgroundVisualComponents(bool Hidden); // Function B_Pickups_Parent.B_Pickups_Parent_C.SetHiddenBackgroundVisualComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DestroyBackgroundVisualComponents(); // Function B_Pickups_Parent.B_Pickups_Parent_C.DestroyBackgroundVisualComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScaleHologramTimingsForPvP(); // Function B_Pickups_Parent.B_Pickups_Parent_C.ScaleHologramTimingsForPvP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetHologramPickedUpParams(bool Tier 0); // Function B_Pickups_Parent.B_Pickups_Parent_C.SetHologramPickedUpParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnPickedUpTrailPS(); // Function B_Pickups_Parent.B_Pickups_Parent_C.SpawnPickedUpTrailPS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetRarityColor(); // Function B_Pickups_Parent.B_Pickups_Parent_C.SetRarityColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Pickups_Parent.B_Pickups_Parent_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MobileSelectedTL__FinishedFunc(); // Function B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void MobileSelectedTL__UpdateFunc(); // Function B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void EnableBacchusHighlight(); // Function B_Pickups_Parent.B_Pickups_Parent_C.EnableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void DisableBacchusHighlight(); // Function B_Pickups_Parent.B_Pickups_Parent_C.DisableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HideBackgroundAndSpotlight(); // Function B_Pickups_Parent.B_Pickups_Parent_C.HideBackgroundAndSpotlight // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnAttached(); // Function B_Pickups_Parent.B_Pickups_Parent_C.OnAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnTossed(); // Function B_Pickups_Parent.B_Pickups_Parent_C.OnTossed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function B_Pickups_Parent.B_Pickups_Parent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnAboutToEnterBackpack(struct AFortPawn* PickupTarget); // Function B_Pickups_Parent.B_Pickups_Parent_C.OnAboutToEnterBackpack // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPickedUp(struct AFortPawn* PickupTarget); // Function B_Pickups_Parent.B_Pickups_Parent_C.OnPickedUp // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Pickups_Parent.B_Pickups_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Pickups_Parent(int32_t EntryPoint); // Function B_Pickups_Parent.B_Pickups_Parent_C.ExecuteUbergraph_B_Pickups_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

