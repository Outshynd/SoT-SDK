#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.UserConstructionScript
struct ABP_large_mast_mizzen_C_UserConstructionScript_Params
{
};

// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.OnMastDescLoaded
struct ABP_large_mast_mizzen_C_OnMastDescLoaded_Params
{
	class UMastDescAsset**                             MastDesc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.ExecuteUbergraph_BP_large_mast_mizzen
struct ABP_large_mast_mizzen_C_ExecuteUbergraph_BP_large_mast_mizzen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
