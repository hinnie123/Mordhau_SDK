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

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.SetSelectable
struct UBP_SpawnScreenPoint_C_SetSelectable_Params
{
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.SetSelected
struct UBP_SpawnScreenPoint_C_SetSelected_Params
{
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Update
struct UBP_SpawnScreenPoint_C_Update_Params
{
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Initialize
struct UBP_SpawnScreenPoint_C_Initialize_Params
{
	class ABP_CapturePoint_C*                          InCapturePoint;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Tick
struct UBP_SpawnScreenPoint_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_SpawnScreenPoint_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
struct UBP_SpawnScreenPoint_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.ExecuteUbergraph_BP_SpawnScreenPoint
struct UBP_SpawnScreenPoint_C_ExecuteUbergraph_BP_SpawnScreenPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
