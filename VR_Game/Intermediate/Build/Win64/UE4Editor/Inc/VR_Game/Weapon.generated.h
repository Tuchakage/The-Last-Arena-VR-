// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef VR_GAME_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define VR_GAME_Weapon_generated_h

#define VR_Game_Source_VR_Game_Public_Weapon_h_13_SPARSE_DATA
#define VR_Game_Source_VR_Game_Public_Weapon_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonOverlapBegin);


#define VR_Game_Source_VR_Game_Public_Weapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonOverlapBegin);


#define VR_Game_Source_VR_Game_Public_Weapon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeapon(); \
	friend struct Z_Construct_UClass_UWeapon_Statics; \
public: \
	DECLARE_CLASS(UWeapon, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VR_Game"), NO_API) \
	DECLARE_SERIALIZER(UWeapon)


#define VR_Game_Source_VR_Game_Public_Weapon_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWeapon(); \
	friend struct Z_Construct_UClass_UWeapon_Statics; \
public: \
	DECLARE_CLASS(UWeapon, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VR_Game"), NO_API) \
	DECLARE_SERIALIZER(UWeapon)


#define VR_Game_Source_VR_Game_Public_Weapon_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeapon(UWeapon&&); \
	NO_API UWeapon(const UWeapon&); \
public:


#define VR_Game_Source_VR_Game_Public_Weapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeapon(UWeapon&&); \
	NO_API UWeapon(const UWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeapon)


#define VR_Game_Source_VR_Game_Public_Weapon_h_13_PRIVATE_PROPERTY_OFFSET
#define VR_Game_Source_VR_Game_Public_Weapon_h_10_PROLOG
#define VR_Game_Source_VR_Game_Public_Weapon_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VR_Game_Source_VR_Game_Public_Weapon_h_13_PRIVATE_PROPERTY_OFFSET \
	VR_Game_Source_VR_Game_Public_Weapon_h_13_SPARSE_DATA \
	VR_Game_Source_VR_Game_Public_Weapon_h_13_RPC_WRAPPERS \
	VR_Game_Source_VR_Game_Public_Weapon_h_13_INCLASS \
	VR_Game_Source_VR_Game_Public_Weapon_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VR_Game_Source_VR_Game_Public_Weapon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VR_Game_Source_VR_Game_Public_Weapon_h_13_PRIVATE_PROPERTY_OFFSET \
	VR_Game_Source_VR_Game_Public_Weapon_h_13_SPARSE_DATA \
	VR_Game_Source_VR_Game_Public_Weapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	VR_Game_Source_VR_Game_Public_Weapon_h_13_INCLASS_NO_PURE_DECLS \
	VR_Game_Source_VR_Game_Public_Weapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VR_GAME_API UClass* StaticClass<class UWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VR_Game_Source_VR_Game_Public_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
