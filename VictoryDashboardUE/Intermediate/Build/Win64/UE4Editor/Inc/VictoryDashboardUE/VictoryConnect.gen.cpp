// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VictoryConnect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryConnect() {}
// Cross Module References
	VICTORYDASHBOARDUE_API UClass* Z_Construct_UClass_AVictoryConnect_NoRegister();
	VICTORYDASHBOARDUE_API UClass* Z_Construct_UClass_AVictoryConnect();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VictoryDashboardUE();
	VICTORYDASHBOARDUE_API UFunction* Z_Construct_UFunction_AVictoryConnect_LaunchTCP();
	VICTORYDASHBOARDUE_API UFunction* Z_Construct_UFunction_AVictoryConnect_recievedMessage();
	VICTORYDASHBOARDUE_API UFunction* Z_Construct_UFunction_AVictoryConnect_TCPSend();
// End Cross Module References
	static FName NAME_AVictoryConnect_recievedMessage = FName(TEXT("recievedMessage"));
	void AVictoryConnect::recievedMessage(const FString& message)
	{
		VictoryConnect_eventrecievedMessage_Parms Parms;
		Parms.message=message;
		ProcessEvent(FindFunctionChecked(NAME_AVictoryConnect_recievedMessage),&Parms);
	}
	void AVictoryConnect::StaticRegisterNativesAVictoryConnect()
	{
		UClass* Class = AVictoryConnect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LaunchTCP", (Native)&AVictoryConnect::execLaunchTCP },
			{ "TCPSend", (Native)&AVictoryConnect::execTCPSend },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVictoryConnect_LaunchTCP()
	{
		struct VictoryConnect_eventLaunchTCP_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VictoryConnect_eventLaunchTCP_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VictoryConnect_eventLaunchTCP_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VictoryConnect" },
				{ "ModuleRelativePath", "VictoryConnect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryConnect, "LaunchTCP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VictoryConnect_eventLaunchTCP_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVictoryConnect_recievedMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_message = { UE4CodeGen_Private::EPropertyClass::Str, "message", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryConnect_eventrecievedMessage_Parms, message), METADATA_PARAMS(NewProp_message_MetaData, ARRAY_COUNT(NewProp_message_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_message,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VictoryConnect" },
				{ "ModuleRelativePath", "VictoryConnect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryConnect, "recievedMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(VictoryConnect_eventrecievedMessage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVictoryConnect_TCPSend()
	{
		struct VictoryConnect_eventTCPSend_Parms
		{
			FString message;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_message = { UE4CodeGen_Private::EPropertyClass::Str, "message", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryConnect_eventTCPSend_Parms, message), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_message,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VictoryConnect" },
				{ "ModuleRelativePath", "VictoryConnect.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryConnect, "TCPSend", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VictoryConnect_eventTCPSend_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVictoryConnect_NoRegister()
	{
		return AVictoryConnect::StaticClass();
	}
	UClass* Z_Construct_UClass_AVictoryConnect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_VictoryDashboardUE,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVictoryConnect_LaunchTCP, "LaunchTCP" }, // 4082830839
				{ &Z_Construct_UFunction_AVictoryConnect_recievedMessage, "recievedMessage" }, // 2155644171
				{ &Z_Construct_UFunction_AVictoryConnect_TCPSend, "TCPSend" }, // 513758030
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VictoryConnect.h" },
				{ "ModuleRelativePath", "VictoryConnect.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVictoryConnect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVictoryConnect::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVictoryConnect, 3691099446);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVictoryConnect(Z_Construct_UClass_AVictoryConnect, &AVictoryConnect::StaticClass, TEXT("/Script/VictoryDashboardUE"), TEXT("AVictoryConnect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVictoryConnect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
