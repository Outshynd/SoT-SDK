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

// BlueprintGeneratedClass BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C
// 0x0018 (0x05A8 - 0x0590)
class ABP_LargeShip_CageLatch_03_a_C : public APetCageSwitchMechanismTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        cap_cage_door_03_a;                                       // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C");
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void OnAnimationStarted();
	void OnAnimationCompleted();
	void ExecuteUbergraph_BP_LargeShip_CageLatch_03_a(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
