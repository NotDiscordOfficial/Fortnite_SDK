// SolarisGeneratedClass Entity_Geometry_skeletal_mesh_component.skeletal_mesh_component
// Size: 0xb0 (Inherited: 0x80)
struct Uskeletal_mesh_component : UEntityActorSkeletalMeshRenderComponent {
	char pad_80[0x10]; // 0x80(0x10)
	struct FDelegate __verse_0x60405F67_setDefaultAnimationMode; // 0x90(0x10)
	struct FDelegate __verse_0x10488C20_setMaterial; // 0xa0(0x10)
	struct FDelegate __verse_0xBED7755C_setSkeletalMesh; // 0x80(0x10)

	void SetSkeletalMesh(struct Uskeletal_mesh* __verse_0x0CD60CB0_mesh); // Function Entity_Geometry_skeletal_mesh_component.skeletal_mesh_component.SetSkeletalMesh // (Native|Public|BlueprintCallable) // @ game+0x43480bc
	void SetMaterial(struct Umaterial_v* __verse_0xF2313B1F_Material); // Function Entity_Geometry_skeletal_mesh_component.skeletal_mesh_component.SetMaterial // (Native|Public|BlueprintCallable) // @ game+0x434807c
	void setDefaultAnimationMode(enum class DefaultAnimationModeType __verse_0x7B7108C3_animMode); // Function Entity_Geometry_skeletal_mesh_component.skeletal_mesh_component.setDefaultAnimationMode // (Native|Public|BlueprintCallable) // @ game+0x4348024
	void $InitCDO(); // Function Entity_Geometry_skeletal_mesh_component.skeletal_mesh_component.$InitCDO // (None) // @ game+0xda7c34
};

