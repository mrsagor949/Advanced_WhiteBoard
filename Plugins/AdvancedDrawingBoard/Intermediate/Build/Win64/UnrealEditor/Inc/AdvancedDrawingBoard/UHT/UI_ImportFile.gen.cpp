// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedDrawingBoard/Public/UI/UI_ImportFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_ImportFile() {}

// Begin Cross Module References
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UUI_ImportFile();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UUI_ImportFile_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AdvancedDrawingBoard();
// End Cross Module References

// Begin Class UUI_ImportFile Function OpenFileDialog
struct Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics
{
	struct UI_ImportFile_eventOpenFileDialog_Parms
	{
		FString DialogTitle;
		FString DefaultPath;
		FString FileTypes;
		TArray<FString> OutFileNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FilePicker" },
		{ "ModuleRelativePath", "Public/UI/UI_ImportFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFileNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFileNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_ImportFile_eventOpenFileDialog_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogTitle_MetaData), NewProp_DialogTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_ImportFile_eventOpenFileDialog_Parms, DefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPath_MetaData), NewProp_DefaultPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_ImportFile_eventOpenFileDialog_Parms, FileTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileTypes_MetaData), NewProp_FileTypes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::NewProp_OutFileNames_Inner = { "OutFileNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::NewProp_OutFileNames = { "OutFileNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_ImportFile_eventOpenFileDialog_Parms, OutFileNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::NewProp_DialogTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::NewProp_DefaultPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::NewProp_FileTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::NewProp_OutFileNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::NewProp_OutFileNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_ImportFile, nullptr, "OpenFileDialog", nullptr, nullptr, Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::UI_ImportFile_eventOpenFileDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::UI_ImportFile_eventOpenFileDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_ImportFile::execOpenFileDialog)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutFileNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenFileDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_FileTypes,Z_Param_Out_OutFileNames);
	P_NATIVE_END;
}
// End Class UUI_ImportFile Function OpenFileDialog

// Begin Class UUI_ImportFile Function PrintData
struct Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics
{
	struct UI_ImportFile_eventPrintData_Parms
	{
		FString File;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FilePicker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Prints the data of the given file*/" },
#endif
		{ "ModuleRelativePath", "Public/UI/UI_ImportFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints the data of the given file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_ImportFile_eventPrintData_Parms, File), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_File_MetaData), NewProp_File_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::NewProp_File,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_ImportFile, nullptr, "PrintData", nullptr, nullptr, Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::UI_ImportFile_eventPrintData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::UI_ImportFile_eventPrintData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_ImportFile_PrintData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_ImportFile_PrintData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_ImportFile::execPrintData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintData(Z_Param_File);
	P_NATIVE_END;
}
// End Class UUI_ImportFile Function PrintData

// Begin Class UUI_ImportFile
void UUI_ImportFile::StaticRegisterNativesUUI_ImportFile()
{
	UClass* Class = UUI_ImportFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OpenFileDialog", &UUI_ImportFile::execOpenFileDialog },
		{ "PrintData", &UUI_ImportFile::execPrintData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_ImportFile);
UClass* Z_Construct_UClass_UUI_ImportFile_NoRegister()
{
	return UUI_ImportFile::StaticClass();
}
struct Z_Construct_UClass_UUI_ImportFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/UI_ImportFile.h" },
		{ "ModuleRelativePath", "Public/UI/UI_ImportFile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUI_ImportFile_OpenFileDialog, "OpenFileDialog" }, // 2061642479
		{ &Z_Construct_UFunction_UUI_ImportFile_PrintData, "PrintData" }, // 4230439218
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_ImportFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUI_ImportFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedDrawingBoard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ImportFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_ImportFile_Statics::ClassParams = {
	&UUI_ImportFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ImportFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UUI_ImportFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUI_ImportFile()
{
	if (!Z_Registration_Info_UClass_UUI_ImportFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_ImportFile.OuterSingleton, Z_Construct_UClass_UUI_ImportFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUI_ImportFile.OuterSingleton;
}
template<> ADVANCEDDRAWINGBOARD_API UClass* StaticClass<UUI_ImportFile>()
{
	return UUI_ImportFile::StaticClass();
}
UUI_ImportFile::UUI_ImportFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_ImportFile);
UUI_ImportFile::~UUI_ImportFile() {}
// End Class UUI_ImportFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_ImportFile, UUI_ImportFile::StaticClass, TEXT("UUI_ImportFile"), &Z_Registration_Info_UClass_UUI_ImportFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_ImportFile), 2815700902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_3274375757(TEXT("/Script/AdvancedDrawingBoard"),
	Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
