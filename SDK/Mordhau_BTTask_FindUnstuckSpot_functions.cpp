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

// Function BTTask_FindUnstuckSpot.BTTask_FindUnstuckSpot_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FindUnstuckSpot_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FindUnstuckSpot.BTTask_FindUnstuckSpot_C.ReceiveExecuteAI");

	UBTTask_FindUnstuckSpot_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_FindUnstuckSpot.BTTask_FindUnstuckSpot_C.ExecuteUbergraph_BTTask_FindUnstuckSpot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_FindUnstuckSpot_C::ExecuteUbergraph_BTTask_FindUnstuckSpot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FindUnstuckSpot.BTTask_FindUnstuckSpot_C.ExecuteUbergraph_BTTask_FindUnstuckSpot");

	UBTTask_FindUnstuckSpot_C_ExecuteUbergraph_BTTask_FindUnstuckSpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
