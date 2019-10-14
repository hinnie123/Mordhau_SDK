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

// Function BP_MainMenu.BP_MainMenu_C.Get_ModsButton_Visibility_1
struct UBP_MainMenu_C_Get_ModsButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MainMenu.BP_MainMenu_C.IsMenuContentWidgetVisible
struct UBP_MainMenu_C_IsMenuContentWidgetVisible_Params
{
	class UBP_MenuContentWidget_C*                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsVisible;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainMenu.BP_MainMenu_C.Request Main Navigation Right
struct UBP_MainMenu_C_Request_Main_Navigation_Right_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Request Main Navigation Left
struct UBP_MainMenu_C_Request_Main_Navigation_Left_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.OnKeyDown
struct UBP_MainMenu_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MainMenu.BP_MainMenu_C.Get_ArmorySubNav_Visibility_1
struct UBP_MainMenu_C_Get_ArmorySubNav_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MainMenu.BP_MainMenu_C.AskHUDToHideUs
struct UBP_MainMenu_C_AskHUDToHideUs_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.HideErrorDialog
struct UBP_MainMenu_C_HideErrorDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ShowErrorDialog
struct UBP_MainMenu_C_ShowErrorDialog_Params
{
	struct FText                                       ErrorMessage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MainMenu.BP_MainMenu_C.CreateErrorDialog
struct UBP_MainMenu_C_CreateErrorDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.HideQuitMatchDialog
struct UBP_MainMenu_C_HideQuitMatchDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ShowQuitMatchDialog
struct UBP_MainMenu_C_ShowQuitMatchDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.CreateQuitMatchDialog
struct UBP_MainMenu_C_CreateQuitMatchDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.GetCloseButtonVisibility
struct UBP_MainMenu_C_GetCloseButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MainMenu.BP_MainMenu_C.GetHomeButtonVisibility
struct UBP_MainMenu_C_GetHomeButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MainMenu.BP_MainMenu_C.QuitGame
struct UBP_MainMenu_C_QuitGame_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.HideQuitGameDialog
struct UBP_MainMenu_C_HideQuitGameDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ShowQuitGameDialog
struct UBP_MainMenu_C_ShowQuitGameDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.CreateQuitGameDialog
struct UBP_MainMenu_C_CreateQuitGameDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.OnPreviewKeyDown
struct UBP_MainMenu_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MainMenu.BP_MainMenu_C.SetContentWidget
struct UBP_MainMenu_C_SetContentWidget_Params
{
	class UBP_MenuContentWidget_C*                     NewWidget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MainMenu.BP_MainMenu_C.UpdateNavAndSubNavButtons
struct UBP_MainMenu_C_UpdateNavAndSubNavButtons_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.CleanUpCustomization
struct UBP_MainMenu_C_CleanUpCustomization_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Show
struct UBP_MainMenu_C_Show_Params
{
	TEnumAsByte<E_ArmoryStates>                        Armory_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainMenu.BP_MainMenu_C.Hide
struct UBP_MainMenu_C_Hide_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7
struct UBP_MainMenu_C_OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7
struct UBP_MainMenu_C_OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.OnFailure_16F3D9074C456082C39E6E8B8C445A77
struct UBP_MainMenu_C_OnFailure_16F3D9074C456082C39E6E8B8C445A77_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MainMenu.BP_MainMenu_C.OnSuccess_16F3D9074C456082C39E6E8B8C445A77
struct UBP_MainMenu_C_OnSuccess_16F3D9074C456082C39E6E8B8C445A77_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MainMenu.BP_MainMenu_C.OnShow
struct UBP_MainMenu_C_OnShow_Params
{
	TEnumAsByte<E_ArmoryStates>                        Armory_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainMenu.BP_MainMenu_C.Construct
struct UBP_MainMenu_C_Construct_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.QuitMatch
struct UBP_MainMenu_C_QuitMatch_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__LoadoutsButton_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__LoadoutsButton_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Tick
struct UBP_MainMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainMenu.BP_MainMenu_C.GoToMatchMaking
struct UBP_MainMenu_C_GoToMatchMaking_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ModsButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ModsButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ShowNotConnectedErrorDialog
struct UBP_MainMenu_C_ShowNotConnectedErrorDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu
struct UBP_MainMenu_C_ExecuteUbergraph_BP_MainMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
