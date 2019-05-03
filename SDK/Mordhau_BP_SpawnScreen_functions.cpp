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

// Function BP_SpawnScreen.BP_SpawnScreen_C.SetColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FLinearColor>    Team_Color_Array               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// unsigned char                  Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnScreen_C::SetColor(class UImage* Image, TArray<struct FLinearColor> Team_Color_Array, unsigned char Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.SetColor");

	UBP_SpawnScreen_C_SetColor_Params params;
	params.Image = Image;
	params.Team_Color_Array = Team_Color_Array;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnScreenIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SpawnScreen_C::UpdateSpawnScreenIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnScreenIcons");

	UBP_SpawnScreen_C_UpdateSpawnScreenIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_SpawnScreen_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.OnKeyDown");

	UBP_SpawnScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnPointWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SpawnScreen_C::UpdateSpawnPointWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnPointWidgets");

	UBP_SpawnScreen_C_UpdateSpawnPointWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SpawnScreen_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.Hide");

	UBP_SpawnScreen_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnScreen.BP_SpawnScreen_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SpawnScreen_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.Show");

	UBP_SpawnScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
