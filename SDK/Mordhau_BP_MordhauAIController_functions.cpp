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

// Function BP_MordhauAIController.BP_MordhauAIController_C.GetTeamFilterClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  FilterClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauAIController_C::GetTeamFilterClass(class UClass** FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.GetTeamFilterClass");

	ABP_MordhauAIController_C_GetTeamFilterClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FilterClass != nullptr)
		*FilterClass = params.FilterClass;
}


// Function BP_MordhauAIController.BP_MordhauAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.UserConstructionScript");

	ABP_MordhauAIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauAIController.BP_MordhauAIController_C.OnPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauAIController_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.OnPossess");

	ABP_MordhauAIController_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauAIController.BP_MordhauAIController_C.OnAfterUnPossess
// (Event, Public, BlueprintEvent)

void ABP_MordhauAIController_C::OnAfterUnPossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.OnAfterUnPossess");

	ABP_MordhauAIController_C_OnAfterUnPossess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauAIController.BP_MordhauAIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MordhauAIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.ReceiveBeginPlay");

	ABP_MordhauAIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauAIController.BP_MordhauAIController_C.OnStartedPerceivingCharacter
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter**     PerceivedCharacter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPerceptionInfo*        PerceptionInfo                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MordhauAIController_C::OnStartedPerceivingCharacter(class AAdvancedCharacter** PerceivedCharacter, struct FPerceptionInfo* PerceptionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.OnStartedPerceivingCharacter");

	ABP_MordhauAIController_C_OnStartedPerceivingCharacter_Params params;
	params.PerceivedCharacter = PerceivedCharacter;
	params.PerceptionInfo = PerceptionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauAIController.BP_MordhauAIController_C.OnStoppedPerceivingCharacter
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter**     PerceivedCharacter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPerceptionInfo*        PerceptionInfo                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MordhauAIController_C::OnStoppedPerceivingCharacter(class AAdvancedCharacter** PerceivedCharacter, struct FPerceptionInfo* PerceptionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.OnStoppedPerceivingCharacter");

	ABP_MordhauAIController_C_OnStoppedPerceivingCharacter_Params params;
	params.PerceivedCharacter = PerceivedCharacter;
	params.PerceptionInfo = PerceptionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauAIController.BP_MordhauAIController_C.ExecuteUbergraph_BP_MordhauAIController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauAIController_C::ExecuteUbergraph_BP_MordhauAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.ExecuteUbergraph_BP_MordhauAIController");

	ABP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
