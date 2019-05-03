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

// Function BP_VoiceMenu.BP_VoiceMenu_C.DoVoiceCommand
struct UBP_VoiceMenu_C_DoVoiceCommand_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceMenu.BP_VoiceMenu_C.OptionChosen
struct UBP_VoiceMenu_C_OptionChosen_Params
{
	int*                                               Choice;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceMenu.BP_VoiceMenu_C.Show
struct UBP_VoiceMenu_C_Show_Params
{
};

// Function BP_VoiceMenu.BP_VoiceMenu_C.Tick
struct UBP_VoiceMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceMenu.BP_VoiceMenu_C.ExecuteUbergraph_BP_VoiceMenu
struct UBP_VoiceMenu_C_ExecuteUbergraph_BP_VoiceMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
