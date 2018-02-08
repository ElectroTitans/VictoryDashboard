// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VICTORYDASHBOARDUE_VictoryConnect_generated_h
#error "VictoryConnect.generated.h already included, missing '#pragma once' in VictoryConnect.h"
#endif
#define VICTORYDASHBOARDUE_VictoryConnect_generated_h

#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTCPSend) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TCPSend(Z_Param_message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchTCP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->LaunchTCP(); \
		P_NATIVE_END; \
	}


#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTCPSend) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TCPSend(Z_Param_message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchTCP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->LaunchTCP(); \
		P_NATIVE_END; \
	}


#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_EVENT_PARMS \
	struct VictoryConnect_eventrecievedMessage_Parms \
	{ \
		FString message; \
	};


#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_CALLBACK_WRAPPERS
#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVictoryConnect(); \
	friend VICTORYDASHBOARDUE_API class UClass* Z_Construct_UClass_AVictoryConnect(); \
public: \
	DECLARE_CLASS(AVictoryConnect, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryDashboardUE"), NO_API) \
	DECLARE_SERIALIZER(AVictoryConnect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVictoryConnect(); \
	friend VICTORYDASHBOARDUE_API class UClass* Z_Construct_UClass_AVictoryConnect(); \
public: \
	DECLARE_CLASS(AVictoryConnect, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryDashboardUE"), NO_API) \
	DECLARE_SERIALIZER(AVictoryConnect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVictoryConnect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVictoryConnect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictoryConnect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictoryConnect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVictoryConnect(AVictoryConnect&&); \
	NO_API AVictoryConnect(const AVictoryConnect&); \
public:


#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVictoryConnect(AVictoryConnect&&); \
	NO_API AVictoryConnect(const AVictoryConnect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictoryConnect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictoryConnect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVictoryConnect)


#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_PRIVATE_PROPERTY_OFFSET
#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_12_PROLOG \
	VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_EVENT_PARMS


#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_PRIVATE_PROPERTY_OFFSET \
	VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_RPC_WRAPPERS \
	VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_CALLBACK_WRAPPERS \
	VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_INCLASS \
	VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_PRIVATE_PROPERTY_OFFSET \
	VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_CALLBACK_WRAPPERS \
	VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_INCLASS_NO_PURE_DECLS \
	VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VictoryDashboardUE_Source_VictoryDashboardUE_VictoryConnect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
