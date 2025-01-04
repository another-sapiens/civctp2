//----------------------------------------------------------------------------
//
// Project      : Call To Power 2
// File type    : C++ header
// Description  : Cursor Manager, with cursor indeces
//
//----------------------------------------------------------------------------
//
// Disclaimer
//
// THIS FILE IS NOT GENERATED OR SUPPORTED BY ACTIVISION.
//
// This material has been developed at apolyton.net by the Apolyton CtP2
// Source Code Project. Contact the authors at ctp2source@apolyton.net.
//
//----------------------------------------------------------------------------
//
// Compiler flags
//
// - None
//
//----------------------------------------------------------------------------
//
// Modifications from the original Activision code:
//
// - Added 6 new cursor indeces. - April 30th 2005 Martin G�hmann
//
//----------------------------------------------------------------------------
#ifdef HAVE_PRAGMA_ONCE
#pragma once
#endif
#ifndef __CURSORMANAGER_H__
#define __CURSORMANAGER_H__

enum CURSORINDEX {
	CURSORINDEX_DEFAULT = 0,

	CURSORINDEX_MOVE,
	CURSORINDEX_NOMOVE,
	CURSORINDEX_ASSAULT,
	CURSORINDEX_NOASSAULT,
	CURSORINDEX_BOMBARD,
	CURSORINDEX_NOBOMBARD,
	CURSORINDEX_SPECIAL_ACTION,
	CURSORINDEX_NOSPECIAL_ACTION,

	CURSORINDEX_ZOOMIN,
	CURSORINDEX_ZOOMOUT,

	CURSORINDEX_SCROLLUP,
	CURSORINDEX_SCROLLDOWN,
	CURSORINDEX_SCROLLLEFT,
	CURSORINDEX_SCROLLRIGHT,

	CURSORINDEX_SELECTION,

	CURSORINDEX_EXPEL,
	CURSORINDEX_EXPEL_INVALID,
	CURSORINDEX_PILLAGE,
	CURSORINDEX_PILLAGE_INVALID,
	CURSORINDEX_ESTABLISH_EMBASSY,
	CURSORINDEX_ESTABLISH_EMBASSY_INVALID,
	CURSORINDEX_REFORM,
	CURSORINDEX_REFORM_INVALID,
	CURSORINDEX_DISBAND_ARMY,
	CURSORINDEX_DISBAND_ARMY_INVALID,
	CURSORINDEX_SLAVE_RAID,
	CURSORINDEX_SLAVE_RAID_INVALID,
	CURSORINDEX_SLEEP,
	CURSORINDEX_SLEEP_INVALID,
	CURSORINDEX_INVESTIGATE_CITY,
	CURSORINDEX_INVESTIGATE_CITY_INVALID,
	CURSORINDEX_AID_UPRISING,
	CURSORINDEX_AID_UPRISING_INVALID,
	CURSORINDEX_CONVERT,
	CURSORINDEX_CONVERT_INVALID,
	CURSORINDEX_INDULGENCE,
	CURSORINDEX_INDULGENCE_INVALID,
	CURSORINDEX_SOOTHSAY,
	CURSORINDEX_SOOTHSAY_INVALID,
	CURSORINDEX_INCITE_REVOLUTION,
	CURSORINDEX_INCITE_REVOLUTION_INVALID,
	CURSORINDEX_STEAL_TECHNOLOGY,
	CURSORINDEX_STEAL_TECHNOLOGY_INVALID,
	CURSORINDEX_SABOTAGE_INDUSTRY,
	CURSORINDEX_SABOTAGE_INDUSTRY_INVALID,
	CURSORINDEX_PLANT_NUKE,
	CURSORINDEX_PLANT_NUKE_INVALID,
	CURSORINDEX_INJOIN,
	CURSORINDEX_INJOIN_INVALID,
	CURSORINDEX_SUE,
	CURSORINDEX_SUE_INVALID,
	CURSORINDEX_HOSTILE_TAKEOVER,
	CURSORINDEX_HOSTILE_TAKEOVER_INVALID,
	CURSORINDEX_ASSASSINATE,
	CURSORINDEX_ASSASSINATE_INVALID,
	CURSORINDEX_NANO_INFECT,
	CURSORINDEX_NANO_INFECT_INVALID,
	CURSORINDEX_BIO_INFECT,
	CURSORINDEX_BIO_INFECT_INVALID,
	CURSORINDEX_NANITE_CLEANSING,
	CURSORINDEX_NANITE_CLEANSING_INVALID,
	CURSORINDEX_FORTIFY,
	CURSORINDEX_FORTIFY_INVALID,
	CURSORINDEX_FRANCHISE,
	CURSORINDEX_FRANCHISE_INVALID,
	CURSORINDEX_BOARD_TRANSPORT,
	CURSORINDEX_BOARD_TRANSPORT_INVALID,
	CURSORINDEX_UNLOAD,
	CURSORINDEX_UNLOAD_INVALID,
	CURSORINDEX_SETTLE,
	CURSORINDEX_SETTLE_INVALID,
	CURSORINDEX_UNDERGROUND_RAILWAY,
	CURSORINDEX_UNDERGROUND_RAILWAY_INVALID,
	CURSORINDEX_PIRACY,
	CURSORINDEX_PIRACY_INVALID,
	CURSORINDEX_THROW_PARTY,
	CURSORINDEX_THROW_PARTY_INVALID,
	CURSORINDEX_ADVERTISE,
	CURSORINDEX_ADVERTISE_INVALID,
	CURSORINDEX_LAUNCH,
	CURSORINDEX_LAUNCH_INVALID,
	CURSORINDEX_TARGET,
	CURSORINDEX_TARGET_INVALID,
	CURSORINDEX_PLAGUE,
	CURSORINDEX_PLAGUE_INVALID,
	CURSORINDEX_FAITH_HEALING,
	CURSORINDEX_FAITH_HEALING_INVALID,

	CURSORINDEX_CLEAR_TARGET,
	CURSORINDEX_CLEAR_TARGET_INVALID,
	CURSORINDEX_REFUEL,
	CURSORINDEX_REFUEL_INVALID,
	CURSORINDEX_ERASE,
	CURSORINDEX_EXTRA,  // Rename when needed

	CURSORINDEX_MAX
};

class CursorManager
{
public:
	CursorManager();
	~CursorManager();

	static void Initialize(void);
	static void Cleanup(void);

	void SetCursor(CURSORINDEX cursor);
	CURSORINDEX	GetCursor(void) const { return m_curCursor; }

	void SaveCursor(void);
	void RestoreCursor(void);

private:
	CURSORINDEX		m_curCursor;
	CURSORINDEX		m_savedCursor;
};

extern CursorManager *g_cursorManager;

#endif
