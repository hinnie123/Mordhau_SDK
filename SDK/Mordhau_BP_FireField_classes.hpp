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

// BlueprintGeneratedClass BP_FireField.BP_FireField_C
// 0x0064 (0x04BC - 0x0458)
class ABP_FireField_C : public ABP_MasterField_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSpawnComponent*                        FieldSpawn6;                                              // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSpawnComponent*                        FieldSpawn5;                                              // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSpawnComponent*                        FieldSpawn4;                                              // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSpawnComponent*                        FieldSpawn3;                                              // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSpawnComponent*                        FieldSpawn2;                                              // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSpawnComponent*                        FieldSpawn1;                                              // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSpawnComponent*                        FieldSpawn;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OtherDamage;                                              // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CharFireDmgByTime;                                        // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CharFireTickByTime;                                       // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarmupTime;                                               // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FireField.BP_FireField_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void BeginFieldDeactivation();
	void ExecuteUbergraph_BP_FireField(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
