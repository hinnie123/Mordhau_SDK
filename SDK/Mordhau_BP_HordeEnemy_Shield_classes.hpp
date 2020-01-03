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

// BlueprintGeneratedClass BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C
// 0x0013 (0x1CEC - 0x1CD9)
class ABP_HordeEnemy_Shield_C : public ABP_HordeEnemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1CD9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1CE0(0x0008) (Transient, DuplicateTransient)
	float                                              HoldTime;                                                 // 0x1CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C");
		return ptr;
	}


	void UserConstructionScript();
	void BPLODTick(float* DeltaTime);
	void ExecuteUbergraph_BP_HordeEnemy_Shield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
