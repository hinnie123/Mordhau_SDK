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

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.GetSkillPoints
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SkillTreeNode_C::GetSkillPoints(int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.GetSkillPoints");

	UBP_SkillTreeNode_C_GetSkillPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.CanUpgrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SkillTreeNode_C::CanUpgrade(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.CanUpgrade");

	UBP_SkillTreeNode_C_CanUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.SetActiveStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SkillTreeNode_C::SetActiveStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.SetActiveStyle");

	UBP_SkillTreeNode_C_SetActiveStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Get_LockOverlay_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_SkillTreeNode_C::Get_LockOverlay_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.Get_LockOverlay_Visibility_1");

	UBP_SkillTreeNode_C_Get_LockOverlay_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Animate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SkillTreeNode_C::Update(bool Animate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.Update");

	UBP_SkillTreeNode_C_Update_Params params;
	params.Animate = Animate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Get_Image_Icon_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UBP_SkillTreeNode_C::Get_Image_Icon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.Get_Image_Icon_Brush_1");

	UBP_SkillTreeNode_C_Get_Image_Icon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_SkillTreeNode_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.GetText_1");

	UBP_SkillTreeNode_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Get_Image_Icon_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBP_SkillTreeNode_C::Get_Image_Icon_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.Get_Image_Icon_ColorAndOpacity_1");

	UBP_SkillTreeNode_C_Get_Image_Icon_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SkillTreeNode_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_SkillTreeNode_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Activate
// (BlueprintCallable, BlueprintEvent)

void UBP_SkillTreeNode_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.Activate");

	UBP_SkillTreeNode_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SkillTreeNode_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBP_SkillTreeNode_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SkillTreeNode_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UBP_SkillTreeNode_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_SkillTreeNode_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.Construct");

	UBP_SkillTreeNode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.ExecuteUbergraph_BP_SkillTreeNode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SkillTreeNode_C::ExecuteUbergraph_BP_SkillTreeNode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.ExecuteUbergraph_BP_SkillTreeNode");

	UBP_SkillTreeNode_C_ExecuteUbergraph_BP_SkillTreeNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.NodeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SkillTreeNode_C*     Ref                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SkillTreeNode_C::NodeClicked__DelegateSignature(class UBP_SkillTreeNode_C* Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.NodeClicked__DelegateSignature");

	UBP_SkillTreeNode_C_NodeClicked__DelegateSignature_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeNode.BP_SkillTreeNode_C.NodeHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SkillTreeNode_C*     Ref                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SkillTreeNode_C::NodeHovered__DelegateSignature(class UBP_SkillTreeNode_C* Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeNode.BP_SkillTreeNode_C.NodeHovered__DelegateSignature");

	UBP_SkillTreeNode_C_NodeHovered__DelegateSignature_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
