// BlueprintGeneratedClass Parent_Tree.Parent_Tree_C
// Size: 0xd4c (Inherited: 0xc90)
struct AParent_Tree_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc90(0x08)
	struct FVector Wind Direction; // 0xc98(0x0c)
	bool StormActive?; // 0xca4(0x01)
	bool DistanceFieldsEnabled?; // 0xca5(0x01)
	char pad_CA6[0x2]; // 0xca6(0x02)
	struct FFortWindImpulseHandle WindHandle; // 0xca8(0x04)
	bool DebugWind; // 0xcac(0x01)
	char pad_CAD[0x3]; // 0xcad(0x03)
	float Debug Wind Intensity; // 0xcb0(0x04)
	char pad_CB4[0x4]; // 0xcb4(0x04)
	struct UMaterialInstanceDynamic* Debug_TempMaterial; // 0xcb8(0x08)
	float DebugWindYaw; // 0xcc0(0x04)
	char pad_CC4[0x4]; // 0xcc4(0x04)
	struct UStaticMeshComponent* Wind Intensity Debug Mesh; // 0xcc8(0x08)
	bool SpawnWindFX?; // 0xcd0(0x01)
	char pad_CD1[0xf]; // 0xcd1(0x0f)
	struct FTransform WindFX_Transform; // 0xce0(0x30)
	float WindFX_MaxDrawDistance; // 0xd10(0x04)
	char pad_D14[0x4]; // 0xd14(0x04)
	struct UParticleSystemComponent* WindFX; // 0xd18(0x08)
	float LeafRadius; // 0xd20(0x04)
	struct FVector LeafCenter_Offset; // 0xd24(0x0c)
	bool UseCylinder; // 0xd30(0x01)
	char pad_D31[0x3]; // 0xd31(0x03)
	float Hue; // 0xd34(0x04)
	struct FVector WindDirection; // 0xd38(0x0c)
	float BoundRadius; // 0xd44(0x04)
	float BoundsHeight(CylinderOnly); // 0xd48(0x04)

	void RemoveTestWind(float BlendTime); // Function Parent_Tree.Parent_Tree_C.RemoveTestWind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function Parent_Tree.Parent_Tree_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ChangeWindIntensity(float Intensity, float Time It Takes To Reach New Intensity); // Function Parent_Tree.Parent_Tree_C.ChangeWindIntensity // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function Parent_Tree.Parent_Tree_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Parent_Tree.Parent_Tree_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Parent_Tree(int32_t EntryPoint); // Function Parent_Tree.Parent_Tree_C.ExecuteUbergraph_Parent_Tree // (Final|UbergraphFunction) // @ game+0xda7c34
};

