// BlueprintGeneratedClass BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C
// Size: 0x8cc (Inherited: 0x898)
struct ABGA_Athena_Physics_Parent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UStaticMeshComponent* ParentMesh; // 0x8a0(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x8a8(0x08)
	struct UFortPhysicsObjectComponent* FortPhysicsObject; // 0x8b0(0x08)
	struct AActor* LinkedActor; // 0x8b8(0x08)
	bool Rep_WakeUp; // 0x8c0(0x01)
	enum class Enum_HeldObject_GenericWeights ObjectWeights; // 0x8c1(0x01)
	char pad_8C2[0x2]; // 0x8c2(0x02)
	struct FGameplayTag GC_EnterWater; // 0x8c4(0x08)

	void OnRep_Rep_WakeUp(); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.OnRep_Rep_WakeUp // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature(struct UPrimitiveComponent* SimulatingComponent, bool bIsAwake); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature(); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEnterWater(struct FSphericalPontoon Pontoon); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.OnEnterWater // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlaySplashGC(); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.PlaySplashGC // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_Athena_Physics_Parent(int32_t EntryPoint); // Function BGA_Athena_Physics_Parent.BGA_Athena_Physics_Parent_C.ExecuteUbergraph_BGA_Athena_Physics_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

