// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MiddleDeckDamageZone_01.BP_MiddleDeckDamageZone_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiddleDeckDamageZone_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiddleDeckDamageZone_01.BP_MiddleDeckDamageZone_01_C.UserConstructionScript");

	ABP_MiddleDeckDamageZone_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
