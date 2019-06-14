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

// BlueprintGeneratedClass BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C
// 0x0030 (0x04A0 - 0x0470)
class ABP_LocalCooldownInteractable_C : public ABP_MordhauActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	bool                                               IsDepleted;                                               // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	float                                              RefillDelay;                                              // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APlayerState*>                        InCooldown;                                               // 0x0480(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<float>                                      InCooldownEndTime;                                        // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C");
		return ptr;
	}


	void UpdateValue();
	bool CanInteract(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void OnInteractionStart(class AMordhauCharacter** Character);
	void AvailableInteractionStart(class AMordhauCharacter* Character);
	void NotAvailableInteractionStart(class AMordhauCharacter* Character);
	void Depleted();
	void Refilled();
	void Deplete(class APlayerState* PlayerState);
	void PopCooldown();
	void ExecuteUbergraph_BP_LocalCooldownInteractable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
