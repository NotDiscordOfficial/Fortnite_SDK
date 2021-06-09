// BlueprintGeneratedClass BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C
// Size: 0xe21 (Inherited: 0xe00)
struct ABuildingContainer_Physics_Parent_C : ABuildingContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe00(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0xe08(0x08)
	struct UFortPhysicsObjectComponent* FortPhysicsObject; // 0xe10(0x08)
	struct AActor* LinkedActor; // 0xe18(0x08)
	bool Rep_WakeUp; // 0xe20(0x01)

	void OnRep_Rep_WakeUp(); // Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.OnRep_Rep_WakeUp // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature(); // Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature(struct UPrimitiveComponent* SimulatingComponent, bool bIsAwake); // Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BuildingContainer_Physics_Parent(int32_t EntryPoint); // Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.ExecuteUbergraph_BuildingContainer_Physics_Parent // (Final|UbergraphFunction) // @ game+0xda7c34
};

