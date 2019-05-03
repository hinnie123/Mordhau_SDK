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

// Function BP_DefeatPopup.BP_DefeatPopup_C.GetVisibility_1
struct UBP_DefeatPopup_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DefeatPopup.BP_DefeatPopup_C.Timer Done
struct UBP_DefeatPopup_C_Timer_Done_Params
{
};

// Function BP_DefeatPopup.BP_DefeatPopup_C.On Animation Finished
struct UBP_DefeatPopup_C_On_Animation_Finished_Params
{
};

// Function BP_DefeatPopup.BP_DefeatPopup_C.Show
struct UBP_DefeatPopup_C_Show_Params
{
	struct FText                                       Main_Text;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Sub_Text;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefeatPopup.BP_DefeatPopup_C.ExecuteUbergraph_BP_DefeatPopup
struct UBP_DefeatPopup_C_ExecuteUbergraph_BP_DefeatPopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
