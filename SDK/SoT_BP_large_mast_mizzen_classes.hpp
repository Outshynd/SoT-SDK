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

// BlueprintGeneratedClass BP_large_mast_mizzen.BP_large_mast_mizzen_C
// 0x0018 (0x0A40 - 0x0A28)
class ABP_large_mast_mizzen_C : public ABP_Mast_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        shp_flag_pennant_01_b;                                    // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_flag_pennant_pole_01_a;                               // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_large_mast_mizzen.BP_large_mast_mizzen_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset** MastDesc);
	void ExecuteUbergraph_BP_large_mast_mizzen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
