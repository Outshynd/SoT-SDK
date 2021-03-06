#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Placement_HeightDrop.BP_Placement_HeightDrop_C
// 0x0040 (0x0450 - 0x0410)
class ABP_Placement_HeightDrop_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Drop_Components_to_Floor;                                 // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              Vertical_Displacement;                                    // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Match_Surface_Orientation;                                // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              Maximum_Deviation_Angle;                                  // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     ComponentsToDrop;                                         // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Check_For_Movable_Components;                             // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CreateParentBoundsVolume;                                 // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x043A(0x0002) MISSED OFFSET
	float                                              ParentBoundsPadding;                                      // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UPhysicalMaterial*>                   Physical_Materials_To_Ignore;                             // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Placement_HeightDrop.BP_Placement_HeightDrop_C");
		return ptr;
	}


	void CreateComponentList();
	void CreateParentBounds();
	void CheckMobilityState();
	void Get_Valid_Collision(bool Hit_Success, class USceneComponent* Current_Component, TArray<struct FHitResult>* Hit_Results, bool* Return_Value, struct FVector* Impact_Position, struct FVector* Impact_Normal);
	void Drop_Components();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
