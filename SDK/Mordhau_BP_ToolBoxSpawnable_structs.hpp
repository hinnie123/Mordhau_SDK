#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_ToolBoxSpawnable.BP_ToolBoxSpawnable
// 0x0065
struct FBP_ToolBoxSpawnable
{
	class UStaticMesh*                                 Preview_5_2199FA324279776E26CF8D94C5B5B71B;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               PreviewSkeletal_16_F127718E4CC9262BB43BBF846E200428;      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Cost_2_3FE5E6C242579A2FB40131B381BE0852;                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FRotator                                    RotationOffset_13_ED46831A45C264F69093958C73920A03;       // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffsetPreview_19_166AE01D40328502CF6878924CF328B3;// 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ScalePreview_39_95AAE0F84CB90D4DB603DFBF354166F0;         // 0x002C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UClass*                                      Class_9_52116F214F63A71A89EE438ACAE9AE21;                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       PlaceableLimitName_22_3ED07C554A73DE74451717868639F95D;   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PleaceableLimitMax_26_9860251E42753A8D1391B39EF7D66532;   // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PerformCapsuleCheck_28_5608460A4A56B455116FB2BBC9083067;  // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              CapsuleCheckRadius_31_281444B8406D0DA743BCBAB34686B9AF;   // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleCheckHalfHeight_33_EBD4FE0A4E5A667392A5628B1040B9A4;// 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnActorOffset_36_8DFF3968447DA5478505C4A626FC494A;     // 0x0058(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               DoNotAttach_41_23D7DA6D43927E8B2BD03896E629F39B;          // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
