#include "StdInc.h"
#include "RegisterTypes.h"

#include "../mapping/CMapInfo.h"
#include "../StartInfo.h"
#include "../BattleState.h"
#include "../CGameState.h"
#include "../mapping/CMap.h"
#include "../CModHandler.h"
#include "../mapObjects/CObjectHandler.h"
#include "../CCreatureHandler.h"
#include "../VCMI_Lib.h"
#include "../CArtHandler.h"
#include "../CHeroHandler.h"
#include "../CSpellHandler.h"
#include "../CTownHandler.h"
#include "../mapping/CCampaignHandler.h"
#include "../NetPacks.h"
#include "../mapObjects/CObjectClassesHandler.h"


template void registerTypesMapObjects2<CISer>(CISer & s);
template void registerTypesMapObjects2<COSer>(COSer & s);
template void registerTypesMapObjects2<CTypeList>(CTypeList & s);

