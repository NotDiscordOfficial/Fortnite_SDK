// SolarisGeneratedClass Entity_entity_util.entity_util
// Size: 0x28 (Inherited: 0x28)
struct Uentity_util : UObject {

	int32_t spawnEntityFromAsset(struct UObject* __verse_0x9866B8E7_contextObject, struct FString __verse_0x2FF42210_assetPath, struct UTransform* __verse_0x61C3007D_Transform, struct FString __verse_0x45A29901_name); // Function Entity_entity_util.entity_util.spawnEntityFromAsset // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43481a4
	int32_t spawnEmptyEntity(struct UObject* __verse_0x9866B8E7_contextObject, struct UTransform* __verse_0x61C3007D_Transform, struct FString __verse_0x45A29901_name); // Function Entity_entity_util.entity_util.spawnEmptyEntity // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x434819c
	struct UEntityComponent* getComponentOfTypeFromComponentForEntity(struct UEntityComponent* __verse_0xB7171E04_Component, int32_t __verse_0x0E84910C_entityID, struct UObject* __verse_0x72E298E9_Type); // Function Entity_entity_util.entity_util.getComponentOfTypeFromComponentForEntity // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347b14
	struct UEntityComponent* getComponentOfTypeFromComponent(struct UEntityComponent* __verse_0xB7171E04_Component, struct UObject* __verse_0x72E298E9_Type); // Function Entity_entity_util.entity_util.getComponentOfTypeFromComponent // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347b1c
	struct UObject* createAndAddComponent(struct UObject* __verse_0x9866B8E7_contextObject, int32_t __verse_0x0E84910C_entityID, struct UObject* __verse_0x159E825F_componentType); // Function Entity_entity_util.entity_util.createAndAddComponent // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43476dc
	void $InitCDO(); // Function Entity_entity_util.entity_util.$InitCDO // (None) // @ game+0xda7c34
};

