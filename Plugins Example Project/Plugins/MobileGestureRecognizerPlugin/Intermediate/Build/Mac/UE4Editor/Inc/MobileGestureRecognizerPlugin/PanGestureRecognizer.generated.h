// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef MOBILEGESTURERECOGNIZERPLUGIN_PanGestureRecognizer_generated_h
#error "PanGestureRecognizer.generated.h already included, missing '#pragma once' in PanGestureRecognizer.h"
#endif
#define MOBILEGESTURERECOGNIZERPLUGIN_PanGestureRecognizer_generated_h

#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLastMoveDistanceForFirstTouchInPoints) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->LastMoveDistanceForFirstTouchInPoints(); \
	} \
 \
	DECLARE_FUNCTION(execLastMoveDistanceForFirstTouch) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->LastMoveDistanceForFirstTouch(); \
	} \
 \
	DECLARE_FUNCTION(execLastMoveDistanceInPointsForTouch) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Touch); \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->LastMoveDistanceInPointsForTouch(Z_Param_Touch); \
	} \
 \
	DECLARE_FUNCTION(execLastMoveDistanceForTouch) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Touch); \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->LastMoveDistanceForTouch(Z_Param_Touch); \
	} \
 \
	DECLARE_FUNCTION(execGetTouchCount) \
	{ \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetTouchCount(); \
	} \
 \
	DECLARE_FUNCTION(execFirstFingerTouchLocation) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->FirstFingerTouchLocation(); \
	} \
 \
	DECLARE_FUNCTION(execGetTouchPoints) \
	{ \
		P_FINISH; \
		*(TArray<FVector2D>*)Z_Param__Result=this->GetTouchPoints(); \
	}


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLastMoveDistanceForFirstTouchInPoints) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->LastMoveDistanceForFirstTouchInPoints(); \
	} \
 \
	DECLARE_FUNCTION(execLastMoveDistanceForFirstTouch) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->LastMoveDistanceForFirstTouch(); \
	} \
 \
	DECLARE_FUNCTION(execLastMoveDistanceInPointsForTouch) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Touch); \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->LastMoveDistanceInPointsForTouch(Z_Param_Touch); \
	} \
 \
	DECLARE_FUNCTION(execLastMoveDistanceForTouch) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Touch); \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->LastMoveDistanceForTouch(Z_Param_Touch); \
	} \
 \
	DECLARE_FUNCTION(execGetTouchCount) \
	{ \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetTouchCount(); \
	} \
 \
	DECLARE_FUNCTION(execFirstFingerTouchLocation) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->FirstFingerTouchLocation(); \
	} \
 \
	DECLARE_FUNCTION(execGetTouchPoints) \
	{ \
		P_FINISH; \
		*(TArray<FVector2D>*)Z_Param__Result=this->GetTouchPoints(); \
	}


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUPanGestureRecognizer(); \
	friend MOBILEGESTURERECOGNIZERPLUGIN_API class UClass* Z_Construct_UClass_UPanGestureRecognizer(); \
	public: \
	DECLARE_CLASS(UPanGestureRecognizer, UDynamicGestureRecognizer, COMPILED_IN_FLAGS(0), 0, MobileGestureRecognizerPlugin, NO_API) \
	DECLARE_SERIALIZER(UPanGestureRecognizer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPanGestureRecognizer*>(this); }


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_INCLASS \
	private: \
	static void StaticRegisterNativesUPanGestureRecognizer(); \
	friend MOBILEGESTURERECOGNIZERPLUGIN_API class UClass* Z_Construct_UClass_UPanGestureRecognizer(); \
	public: \
	DECLARE_CLASS(UPanGestureRecognizer, UDynamicGestureRecognizer, COMPILED_IN_FLAGS(0), 0, MobileGestureRecognizerPlugin, NO_API) \
	DECLARE_SERIALIZER(UPanGestureRecognizer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPanGestureRecognizer*>(this); }


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPanGestureRecognizer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPanGestureRecognizer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPanGestureRecognizer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPanGestureRecognizer); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPanGestureRecognizer(const UPanGestureRecognizer& InCopy); \
public:


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPanGestureRecognizer(const UPanGestureRecognizer& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPanGestureRecognizer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPanGestureRecognizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPanGestureRecognizer)


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_42_PROLOG
#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_RPC_WRAPPERS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_INCLASS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_INCLASS_NO_PURE_DECLS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_PanGestureRecognizer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS