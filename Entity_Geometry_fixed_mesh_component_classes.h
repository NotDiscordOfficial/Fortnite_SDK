// SolarisGeneratedClass Entity_Geometry_fixed_mesh_component.fixed_mesh_component
// Size: 0x130 (Inherited: 0xb0)
struct Ufixed_mesh_component : UEntityActorStaticMeshRenderComponent {
	char pad_B0[0x70]; // 0xb0(0x70)
	struct FDelegate __verse_0x3480D90D_isVisible; // 0x120(0x10)
	struct FDelegate __verse_0x6A1218AE_setAsRootComponent; // 0xe0(0x10)
	struct FDelegate __verse_0x7A5B1B93_setDefaultStaticMesh; // 0xc0(0x10)
	struct FDelegate __verse_0x5B64EBF2_setEnableCollision; // 0xd0(0x10)
	struct FDelegate __verse_0x10488C20_setMaterial; // 0xf0(0x10)
	struct FDelegate __verse_0xFAFEA60D_setMaterialAtIndex; // 0x100(0x10)
	struct FDelegate __verse_0x3EEF3585_setStaticMesh; // 0xb0(0x10)
	struct FDelegate __verse_0x5D990471_setVisibility; // 0x110(0x10)

	void SetVisibility(char __verse_0xFCE80DC8_newVisibility); // Function Entity_Geometry_fixed_mesh_component.fixed_mesh_component.SetVisibility // (Native|Public|BlueprintCallable) // @ game+0x43480ec
	void SetStaticMesh(struct Ustatic_mesh* __verse_0x0CD60CB0_mesh); // Function Entity_Geometry_fixed_mesh_component.fixed_mesh_component.SetStaticMesh // (Native|Public|BlueprintCallable) // @ game+0x43480c4
	void setMaterialAtIndex(struct Umaterial_v* __verse_0xF2313B1F_Material, int32_t __verse_0x938C7ADC_index); // Function Entity_Geometry_fixed_mesh_component.fixed_mesh_component.setMaterialAtIndex // (Native|Public|BlueprintCallable) // @ game+0x434806c
	void SetMaterial(struct Umaterial_v* __verse_0xF2313B1F_Material); // Function Entity_Geometry_fixed_mesh_component.fixed_mesh_component.SetMaterial // (Native|Public|BlueprintCallable) // @ game+0x4348074
	void setEnableCollision(enum class CollisionType __verse_0x99A47985_enabledCollision); // Function Entity_Geometry_fixed_mesh_component.fixed_mesh_component.setEnableCollision // (Native|Public|BlueprintCallable) // @ game+0x434803c
	void setDefaultStaticMesh(enum class DefaultMeshType __verse_0x5B6BF27F_defaultMesh); // Function Entity_Geometry_fixed_mesh_component.fixed_mesh_component.setDefaultStaticMesh // (Native|Public|BlueprintCallable) // @ game+0x434802c
	void setAsRootComponent(char __verse_0x7B59C809_keepExistingRootTransform, char __verse_0x5436DB8B_destroyOldRoot); // Function Entity_Geometry_fixed_mesh_component.fixed_mesh_component.setAsRootComponent // (Native|Public|BlueprintCallable) // @ game+0x4348004
	char IsVisible(); // Function Entity_Geometry_fixed_mesh_component.fixed_mesh_component.IsVisible // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347eec
	void $InitCDO(); // Function Entity_Geometry_fixed_mesh_component.fixed_mesh_component.$InitCDO // (None) // @ game+0xda7c34
};

