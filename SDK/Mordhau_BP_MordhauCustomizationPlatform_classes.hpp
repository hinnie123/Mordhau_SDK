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

// BlueprintGeneratedClass BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C
// 0x0134 (0x045C - 0x0328)
class ABP_MordhauCustomizationPlatform_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_MordhauCustomizationObserver_C*          CustomizationObserver;                                    // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_MordhauCharacter_C*                      CharacterDoll;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMordhauEquipment*                           EquipmentDoll;                                            // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              EquipmentDollRotation;                                    // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class UWidget*                                     ControllingWidget;                                        // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CharacterDollRotation;                                    // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EquipmentDollZoom;                                        // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterDollZoom;                                        // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentZoom;                                              // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCharacterProfile                           QueuedProfileUpdate;                                      // 0x0370(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                LastProfileUpdateFrame;                                   // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WantsProfileUpdate;                                       // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	int                                                LastEquipmentId;                                          // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterDollRotationTarget;                              // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EquipmentDollRotationTarget;                              // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastEquipmentSkin;                                        // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FastRotationUpdate;                                       // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	class UClass*                                      LastShield;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LastNonShieldEquipment;                                   // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CharacterInstantEquipmentSwitch;                          // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class ABP_EquipmentCustomizationSpot_C*            EquipmentCustomizationSpot;                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CharacterDollCreatedFrame;                                // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoCharacterPreviewPose;                                   // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	int                                                PreviewPoseRandom;                                        // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C");
		return ptr;
	}


	void GetProfileWrapper(class UCharacterProfileBPWrapper** Wrapper);
	void UpdateEquipmentDollRotation(float DeltaTime);
	void UpdateCharacterDollRotation(float DeltaTime);
	void TryUpdateCharacterDollInternal();
	void UpdateCharacterDoll(const struct FCharacterProfile& Profile, bool OnlyUpdateMaterials, bool InstantEquipmentSwitch, bool DoPreviewPose, int PreviewPoseRandom);
	void UpdateCamera(float DeltaSeconds);
	void ZoomCharacterDoll(float Delta);
	void ZoomEquipmentDoll(float Delta);
	void RotateCharacterDoll(float Delta, bool Smooth);
	void DestroyCharacterDoll();
	void DestroyEquipmentDoll();
	void RotateEquipmentDoll(float Delta, bool Smooth);
	void SpawnCharacterDollIfNone();
	void DestroyDolls();
	void SpawnEquipment(int EquipmentIndex, class AMordhauEquipment** Equipment);
	void Init();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_MordhauCustomizationPlatform(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
