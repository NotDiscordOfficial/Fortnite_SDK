// BlueprintGeneratedClass BuildingActorLootDropOnDeathComponent.BuildingActorLootDropOnDeathComponent_C
// Size: 0xda (Inherited: 0xb0)
struct UBuildingActorLootDropOnDeathComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FName LootOnExplodePackage; // 0xb8(0x08)
	struct FVector OffsetLocation; // 0xc0(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct ABuildingActor* BuildingActorOwner; // 0xd0(0x08)
	bool Enabled; // 0xd8(0x01)
	bool AthenaOnly; // 0xd9(0x01)

	struct FVector MakeRelativeOffset(struct AActor* Target, struct FVector InVec); // Function BuildingActorLootDropOnDeathComponent.BuildingActorLootDropOnDeathComponent_C.MakeRelativeOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BuildingActorLootDropOnDeathComponent.BuildingActorLootDropOnDeathComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDied_Event(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BuildingActorLootDropOnDeathComponent.BuildingActorLootDropOnDeathComponent_C.OnDied_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BuildingActorLootDropOnDeathComponent(int32_t EntryPoint); // Function BuildingActorLootDropOnDeathComponent.BuildingActorLootDropOnDeathComponent_C.ExecuteUbergraph_BuildingActorLootDropOnDeathComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

