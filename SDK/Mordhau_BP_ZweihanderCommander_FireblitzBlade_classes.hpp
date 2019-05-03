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

// BlueprintGeneratedClass BP_ZweihanderCommander_FireblitzBlade.BP_ZweihanderCommander_FireblitzBlade_C
// 0x0008 (0x0080 - 0x0078)
class UBP_ZweihanderCommander_FireblitzBlade_C : public UBP_MordhauEquipmentPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZweihanderCommander_FireblitzBlade.BP_ZweihanderCommander_FireblitzBlade_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ZweihanderCommander_FireblitzBlade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
