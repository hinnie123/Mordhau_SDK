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

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Get_Defaults_Text_1
struct UBP_LoadoutPicker_C_Get_Defaults_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetDefaultOrCustomProfileFromSingleton
struct UBP_LoadoutPicker_C_GetDefaultOrCustomProfileFromSingleton_Params
{
	int                                                SelectedIdx;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCharacterProfile                           Profile;                                                  // (Parm, OutParm)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetSelectedIDInCustomProfiles
struct UBP_LoadoutPicker_C_GetSelectedIDInCustomProfiles_Params
{
	int                                                SelectedId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Spawn Loadout
struct UBP_LoadoutPicker_C_Set_Spawn_Loadout_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Selected_Character_Profile;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Move Entry
struct UBP_LoadoutPicker_C_Move_Entry_Params
{
	int                                                ID_to_move;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                New_ID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Remove Entry
struct UBP_LoadoutPicker_C_Remove_Entry_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Add Entry
struct UBP_LoadoutPicker_C_Add_Entry_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Selected Entry
struct UBP_LoadoutPicker_C_Set_Selected_Entry_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Selected_ID;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBP_LoadoutEntry_C*                          Selected_Loadout_Entry;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCharacterProfile                           Selected_Profile;                                         // (Parm, OutParm)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Clear Entry Widgets
struct UBP_LoadoutPicker_C_Clear_Entry_Widgets_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Generate Entry Widgets
struct UBP_LoadoutPicker_C_Generate_Entry_Widgets_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdateWidget
struct UBP_LoadoutPicker_C_UpdateWidget_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.RegisterPreviewEvents
struct UBP_LoadoutPicker_C_RegisterPreviewEvents_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnDrag
struct UBP_LoadoutPicker_C_OnDrag_Params
{
	float                                              DeltaDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnScroll
struct UBP_LoadoutPicker_C_OnScroll_Params
{
	float                                              ScrollDelta;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdatePreviewDoll
struct UBP_LoadoutPicker_C_UpdatePreviewDoll_Params
{
	struct FCharacterProfile                           New_Profile;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.SetActive
struct UBP_LoadoutPicker_C_SetActive_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnClick
struct UBP_LoadoutPicker_C_OnClick_Params
{
	bool                                               Listen_for_Double_Click;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Entry_Id;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnHover
struct UBP_LoadoutPicker_C_OnHover_Params
{
	int                                                Entry_Id;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Tick
struct UBP_LoadoutPicker_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Construct
struct UBP_LoadoutPicker_C_Construct_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_LoadoutPicker_C_BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.ToggleShowDefaultLoadouts
struct UBP_LoadoutPicker_C_ToggleShowDefaultLoadouts_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.ExecuteUbergraph_BP_LoadoutPicker
struct UBP_LoadoutPicker_C_ExecuteUbergraph_BP_LoadoutPicker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
