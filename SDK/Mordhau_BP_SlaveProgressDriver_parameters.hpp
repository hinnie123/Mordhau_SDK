#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.UpdateProgress
struct ABP_SlaveProgressDriver_C_UpdateProgress_Params
{
	float                                              Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.CanInteract
struct ABP_SlaveProgressDriver_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.UserConstructionScript
struct ABP_SlaveProgressDriver_C_UserConstructionScript_Params
{
};

// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.ReceiveBeginPlay
struct ABP_SlaveProgressDriver_C_ReceiveBeginPlay_Params
{
};

// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.OnInteractionStart
struct ABP_SlaveProgressDriver_C_OnInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.ExecuteUbergraph_BP_SlaveProgressDriver
struct ABP_SlaveProgressDriver_C_ExecuteUbergraph_BP_SlaveProgressDriver_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
