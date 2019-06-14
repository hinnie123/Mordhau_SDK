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

// Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InKey                          (Parm, ZeroConstructor)

void UPlayFabAuthenticationContext::SetPlayFabId(const struct FString& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId");

	UPlayFabAuthenticationContext_SetPlayFabId_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InToken                        (Parm, ZeroConstructor)

void UPlayFabAuthenticationContext::SetEntityToken(const struct FString& InToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken");

	UPlayFabAuthenticationContext_SetEntityToken_Params params;
	params.InToken = InToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InKey                          (Parm, ZeroConstructor)

void UPlayFabAuthenticationContext::SetDeveloperSecretKey(const struct FString& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey");

	UPlayFabAuthenticationContext_SetDeveloperSecretKey_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InTicket                       (Parm, ZeroConstructor)

void UPlayFabAuthenticationContext::SetClientSessionTicket(const struct FString& InTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket");

	UPlayFabAuthenticationContext_SetClientSessionTicket_Params params;
	params.InTicket = InTicket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlayFabAuthenticationContext::GetPlayFabId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId");

	UPlayFabAuthenticationContext_GetPlayFabId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlayFabAuthenticationContext::GetEntityToken()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken");

	UPlayFabAuthenticationContext_GetEntityToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlayFabAuthenticationContext::GetDeveloperSecretKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey");

	UPlayFabAuthenticationContext_GetDeveloperSecretKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlayFabAuthenticationContext::GetClientSessionTicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket");

	UPlayFabAuthenticationContext_GetClientSessionTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials
// (Final, Native, Public, BlueprintCallable)

void UPlayFabAuthenticationContext::ForgetAllCredentials()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials");

	UPlayFabAuthenticationContext_ForgetAllCredentials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
