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

// BlueprintGeneratedClass BP_PushModeInfo.BP_PushModeInfo_C
// 0x0010 (0x0338 - 0x0328)
class ABP_PushModeInfo_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      AttackingTeam;                                            // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	float                                              InitialTime;                                              // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PushModeInfo.BP_PushModeInfo_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
