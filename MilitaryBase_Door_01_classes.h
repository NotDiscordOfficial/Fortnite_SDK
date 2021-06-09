// BlueprintGeneratedClass MilitaryBase_Door_01.MilitaryBase_Door_01_C
// Size: 0xd80 (Inherited: 0xcf0)
struct AMilitaryBase_Door_01_C : AParent_BuildingWall_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xcf0(0x08)
	struct UBoxComponent* DoorSlideOverlapVolume; // 0xcf8(0x08)
	struct UStaticMeshComponent* DoorStaticMesh1; // 0xd00(0x08)
	float Timeline_0_EmissiveColorLerp_75727DFA4F9CA24A009D23ADC967876F; // 0xd08(0x04)
	float Timeline_0_SlideAnimation_75727DFA4F9CA24A009D23ADC967876F; // 0xd0c(0x04)
	enum class ETimelineDirection Timeline_0__Direction_75727DFA4F9CA24A009D23ADC967876F; // 0xd10(0x01)
	char pad_D11[0x7]; // 0xd11(0x07)
	struct UTimelineComponent* Timeline_1; // 0xd18(0x08)
	int32_t NumberOfPawnsWithinVolume; // 0xd20(0x04)
	bool DoorOpen; // 0xd24(0x01)
	char pad_D25[0x3]; // 0xd25(0x03)
	struct UMaterialInstanceDynamic* DoorMID; // 0xd28(0x08)
	struct FLinearColor DefaultDoorEmissiveValue; // 0xd30(0x10)
	struct FLinearColor ActiveDoorEmissiveValue; // 0xd40(0x10)
	struct UMaterialInterface* DoorBaseMaterial; // 0xd50(0x08)
	struct UMaterialInterface* Door_Source_Materials; // 0xd58(0x08)
	struct USoundBase* SlidingDoorClose_Sound; // 0xd60(0x08)
	struct USoundBase* SlidingDoorOpen_Sound; // 0xd68(0x08)
	struct FMulticastInlineDelegate OnDoorOpened; // 0xd70(0x10)

	bool IsOpen(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.IsOpen // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	struct TArray<struct UPrimitiveComponent*> GetComponentToLock(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetComponentToLock // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_DoorOpen(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnRep_DoorOpen // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetDoorMID(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetDoorMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__FinishedFunc(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OpenDoor(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OpenDoor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CloseDoor(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.CloseDoor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Open(struct AController* ControllerInstigator); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Open // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Close(struct AController* ControllerInstigator); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Close // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnUnLocked(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnUnLocked // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnLocked(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnLocked // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MilitaryBase_Door_01(int32_t EntryPoint); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.ExecuteUbergraph_MilitaryBase_Door_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnDoorOpened__DelegateSignature(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnDoorOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

