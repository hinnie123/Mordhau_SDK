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

// Function BP_Credits.BP_Credits_C.Construct
struct UBP_Credits_C_Construct_Params
{
};

// Function BP_Credits.BP_Credits_C.Tick
struct UBP_Credits_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Credits.BP_Credits_C.OnShown
struct UBP_Credits_C_OnShown_Params
{
};

// Function BP_Credits.BP_Credits_C.ExecuteUbergraph_BP_Credits
struct UBP_Credits_C_ExecuteUbergraph_BP_Credits_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
