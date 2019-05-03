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

// Function BP_VictoryPopup.BP_VictoryPopup_C.GetVisibility_1
struct UBP_VictoryPopup_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_VictoryPopup.BP_VictoryPopup_C.Timer Done
struct UBP_VictoryPopup_C_Timer_Done_Params
{
};

// Function BP_VictoryPopup.BP_VictoryPopup_C.On Animation Finished
struct UBP_VictoryPopup_C_On_Animation_Finished_Params
{
};

// Function BP_VictoryPopup.BP_VictoryPopup_C.Show
struct UBP_VictoryPopup_C_Show_Params
{
	struct FText                                       Main_Text;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Sub_Text;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VictoryPopup.BP_VictoryPopup_C.ExecuteUbergraph_BP_VictoryPopup
struct UBP_VictoryPopup_C_ExecuteUbergraph_BP_VictoryPopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
