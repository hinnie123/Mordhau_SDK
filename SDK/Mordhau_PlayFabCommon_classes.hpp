#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlayFabCommon.PlayFabAuthenticationContext
// 0x0040 (0x0068 - 0x0028)
class UPlayFabAuthenticationContext : public UObject
{
public:
	struct FString                                     ClientSessionTicket;                                      // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     EntityToken;                                              // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     DeveloperSecretKey;                                       // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     PlayFabId;                                                // 0x0058(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabCommon.PlayFabAuthenticationContext");
		return ptr;
	}


	void SetPlayFabId(const struct FString& InKey);
	void SetEntityToken(const struct FString& InToken);
	void SetDeveloperSecretKey(const struct FString& InKey);
	void SetClientSessionTicket(const struct FString& InTicket);
	struct FString GetPlayFabId();
	struct FString GetEntityToken();
	struct FString GetDeveloperSecretKey();
	struct FString GetClientSessionTicket();
	void ForgetAllCredentials();
};


// Class PlayFabCommon.PlayFabRuntimeSettings
// 0x0030 (0x0058 - 0x0028)
class UPlayFabRuntimeSettings : public UObject
{
public:
	struct FString                                     ProductionEnvironmentURL;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     TitleId;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     DeveloperSecretKey;                                       // 0x0048(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabCommon.PlayFabRuntimeSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
