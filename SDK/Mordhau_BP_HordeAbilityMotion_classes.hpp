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

// BlueprintGeneratedClass BP_HordeAbilityMotion.BP_HordeAbilityMotion_C
// 0x0018 (0x00B0 - 0x0098)
class UBP_HordeAbilityMotion_C : public UBP_AbilityMotion_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	class ABP_HookshotProjectile_C*                    Projectile;                                               // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Stage2Time;                                               // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentStage;                                             // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeAbilityMotion.BP_HordeAbilityMotion_C");
		return ptr;
	}


	void OnBegin();
	void OnLeave(bool* Interrupted);
	void OnTick(float* DeltaTime);
	void ExecuteUbergraph_BP_HordeAbilityMotion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
