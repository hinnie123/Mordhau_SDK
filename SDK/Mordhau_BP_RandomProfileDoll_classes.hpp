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

// BlueprintGeneratedClass BP_RandomProfileDoll.BP_RandomProfileDoll_C
// 0x00B1 (0x1CB5 - 0x1C04)
class ABP_RandomProfileDoll_C : public ABP_CharacterDoll_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1C04(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C08(0x0008) (Transient, DuplicateTransient)
	struct FCharacterProfile                           CurrentProfileStored;                                     // 0x1C10(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                RerolledFrame;                                            // 0x1CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkippedFirstFrame;                                        // 0x1CB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RandomProfileDoll.BP_RandomProfileDoll_C");
		return ptr;
	}


	void UserConstructionScript();
	void Reroll();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_RandomProfileDoll(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
