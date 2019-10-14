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

// Function BP_RankIcon.BP_RankIcon_C.GetRankIndexFromMMR
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MMR                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank_Index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_RankIcon_C::GetRankIndexFromMMR(int MMR, int* Rank_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.GetRankIndexFromMMR");

	UBP_RankIcon_C_GetRankIndexFromMMR_Params params;
	params.MMR = MMR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank_Index != nullptr)
		*Rank_Index = params.Rank_Index;
}


// Function BP_RankIcon.BP_RankIcon_C.Update Widget with Rank Index
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank_Index_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Image_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_RankIcon_C::Update_Widget_with_Rank_Index(int Rank_Index_, const struct FVector2D& Image_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.Update Widget with Rank Index");

	UBP_RankIcon_C_Update_Widget_with_Rank_Index_Params params;
	params.Rank_Index_ = Rank_Index_;
	params.Image_Size = Image_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RankIcon.BP_RankIcon_C.UpdateRankIndexFromMMR
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MMR                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank_Index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_RankIcon_C::UpdateRankIndexFromMMR(int MMR, int* Rank_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.UpdateRankIndexFromMMR");

	UBP_RankIcon_C_UpdateRankIndexFromMMR_Params params;
	params.MMR = MMR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank_Index != nullptr)
		*Rank_Index = params.Rank_Index;
}


// Function BP_RankIcon.BP_RankIcon_C.GetRankDivisionColorFromIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Text_Color                     (Parm, OutParm)

void UBP_RankIcon_C::GetRankDivisionColorFromIndex(int Rank_Index, struct FSlateColor* Text_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.GetRankDivisionColorFromIndex");

	UBP_RankIcon_C_GetRankDivisionColorFromIndex_Params params;
	params.Rank_Index = Rank_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text_Color != nullptr)
		*Text_Color = params.Text_Color;
}


// Function BP_RankIcon.BP_RankIcon_C.Update Widget with MMR
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank_MMR                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Image_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_RankIcon_C::Update_Widget_with_MMR(int Rank_MMR, const struct FVector2D& Image_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.Update Widget with MMR");

	UBP_RankIcon_C_Update_Widget_with_MMR_Params params;
	params.Rank_MMR = Rank_MMR;
	params.Image_Size = Image_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RankIcon.BP_RankIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_RankIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.Construct");

	UBP_RankIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RankIcon.BP_RankIcon_C.ExecuteUbergraph_BP_RankIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RankIcon_C::ExecuteUbergraph_BP_RankIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.ExecuteUbergraph_BP_RankIcon");

	UBP_RankIcon_C_ExecuteUbergraph_BP_RankIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
