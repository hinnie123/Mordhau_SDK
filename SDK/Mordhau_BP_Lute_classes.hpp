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

// BlueprintGeneratedClass BP_Lute.BP_Lute_C
// 0x0064 (0x1BAC - 0x1B48)
class ABP_Lute_C : public ABP_MordhauWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1B48(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Audio3;                                                   // 0x1B50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio2;                                                   // 0x1B58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x1B60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio0;                                                   // 0x1B68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      ReplicatedTone;                                           // 0x1B70(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1B71(0x0003) MISSED OFFSET
	float                                              ToneCooldown;                                             // 0x1B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChordCooldown;                                            // 0x1B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1B7C(0x0004) MISSED OFFSET
	TArray<class USoundWave*>                          LuteSounds;                                               // 0x1B80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // 0x1B90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LastAudioComponent;                                       // 0x1BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextChordTime;                                            // 0x1BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextPlayTime;                                             // 0x1BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lute.BP_Lute_C");
		return ptr;
	}


	void ServerSetToneAndPlay(unsigned char Tone);
	bool RequestBlock(EBlockType* BlockType, bool* bAllowFTP);
	void GetToneFromAttack(EAttackMove Move, float Angle, unsigned char* Tone);
	void PlayTone(unsigned char Tone);
	void OnRep_ReplicatedTone();
	void UserConstructionScript();
	void RequestAttack(EAttackMove* Move, float* Angle);
	void ServerSetTone(unsigned char Tone);
	void EquipmentCommand(int* Command);
	void ExecuteUbergraph_BP_Lute(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
