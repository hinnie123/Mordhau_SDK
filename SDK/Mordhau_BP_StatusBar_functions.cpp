// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StatusBar.BP_StatusBar_C.Get_VehicleNameText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_StatusBar_C::Get_VehicleNameText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.Get_VehicleNameText_Text_1");

	UBP_StatusBar_C_Get_VehicleNameText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StatusBar.BP_StatusBar_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_StatusBar_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.GetVisibility_1");

	UBP_StatusBar_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StatusBar.BP_StatusBar_C.Get_VehicleHealthBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_StatusBar_C::Get_VehicleHealthBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.Get_VehicleHealthBar_Percent_1");

	UBP_StatusBar_C_Get_VehicleHealthBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StatusBar.BP_StatusBar_C.createDynamicMaterial
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Parent_Material                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UProgressBar*            Progress_Bar                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   Parameter_Name                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* MaterialInstanceDymanicReference (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_StatusBar_C::createDynamicMaterial(class UMaterialInterface* Parent_Material, class UProgressBar* Progress_Bar, const struct FLinearColor& Color, const struct FName& Parameter_Name, class UMaterialInstanceDynamic** MaterialInstanceDymanicReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.createDynamicMaterial");

	UBP_StatusBar_C_createDynamicMaterial_Params params;
	params.Parent_Material = Parent_Material;
	params.Progress_Bar = Progress_Bar;
	params.Color = Color;
	params.Parameter_Name = Parameter_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstanceDymanicReference != nullptr)
		*MaterialInstanceDymanicReference = params.MaterialInstanceDymanicReference;
}


// Function BP_StatusBar.BP_StatusBar_C.SetObservedCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*       NewObserved                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StatusBar_C::SetObservedCharacter(class AMordhauCharacter* NewObserved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.SetObservedCharacter");

	UBP_StatusBar_C_SetObservedCharacter_Params params;
	params.NewObserved = NewObserved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StatusBar.BP_StatusBar_C.getDelayedStaminaPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_StatusBar_C::getDelayedStaminaPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getDelayedStaminaPercentage");

	UBP_StatusBar_C_getDelayedStaminaPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StatusBar.BP_StatusBar_C.getDelayedHealthPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_StatusBar_C::getDelayedHealthPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getDelayedHealthPercentage");

	UBP_StatusBar_C_getDelayedHealthPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetageText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_StatusBar_C::getStaminaPercetageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetageText");

	UBP_StatusBar_C_getStaminaPercetageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StatusBar.BP_StatusBar_C.getHealthPercentageText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_StatusBar_C::getHealthPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getHealthPercentageText");

	UBP_StatusBar_C_getHealthPercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_StatusBar_C::getStaminaPercetage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetage");

	UBP_StatusBar_C_getStaminaPercetage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StatusBar.BP_StatusBar_C.getHealthPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_StatusBar_C::getHealthPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getHealthPercentage");

	UBP_StatusBar_C_getHealthPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StatusBar.BP_StatusBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_StatusBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.Construct");

	UBP_StatusBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StatusBar.BP_StatusBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StatusBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.Tick");

	UBP_StatusBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StatusBar.BP_StatusBar_C.ExecuteUbergraph_BP_StatusBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StatusBar_C::ExecuteUbergraph_BP_StatusBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.ExecuteUbergraph_BP_StatusBar");

	UBP_StatusBar_C_ExecuteUbergraph_BP_StatusBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
