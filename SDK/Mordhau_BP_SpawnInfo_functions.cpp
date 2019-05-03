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

// Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_SpawnInfo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_1");

	UBP_SpawnInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnCharacterName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (Parm, OutParm)

void UBP_SpawnInfo_C::GetSpawnCharacterName(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnCharacterName");

	UBP_SpawnInfo_C_GetSpawnCharacterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_SpawnInfo_C::GetSpawnText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnText");

	UBP_SpawnInfo_C_GetSpawnText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
