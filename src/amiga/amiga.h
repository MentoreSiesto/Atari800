#ifndef _ATARI_AMIGA_H_
#define _ATARI_AMIGA_H_

LONG InsertROM(LONG CartType);
LONG InsertDisk( LONG Drive );

VOID FreeDisplay(void);
LONG SetupDisplay(void);
VOID Iconify(void);

enum{
	MEN_PROJECT=1,
	MEN_PROJECT_ABOUT,
	MEN_PROJECT_LOADSTATE,
	MEN_PROJECT_SAVESTATE,
	MEN_PROJECT_LOADBIN,
	MEN_PROJECT_ICONIFY,
	MEN_PROJECT_QUIT,

	MEN_SYSTEM,
	MEN_SYSTEM_BOOT,
	MEN_SYSTEM_ID,
	MEN_SYSTEM_ID1,
	MEN_SYSTEM_ID2,
	MEN_SYSTEM_ID3,
	MEN_SYSTEM_ID4,
	MEN_SYSTEM_ID5,
	MEN_SYSTEM_ID6,
	MEN_SYSTEM_ID7,
	MEN_SYSTEM_ID8,
	MEN_SYSTEM_ED,
	MEN_SYSTEM_ED1,
	MEN_SYSTEM_ED2,
	MEN_SYSTEM_ED3,
	MEN_SYSTEM_ED4,
	MEN_SYSTEM_ED5,
	MEN_SYSTEM_ED6,
	MEN_SYSTEM_ED7,
	MEN_SYSTEM_ED8,

	MEN_SYSTEM_UI,

	MEN_CONSOLE,
	MEN_CONSOLE_OPTION,
	MEN_CONSOLE_SELECT,
	MEN_CONSOLE_START,
	MEN_CONSOLE_HELP,
	MEN_CONSOLE_BREAK,
	MEN_CONSOLE_RESET,
	MEN_CONSOLE_COLDSTART,

	MEN_SETTINGS,
	MEN_SETTINGS_FRAMERATE,
	MEN_SETTINGS_CUSTOMSCREEN,
	MEN_SETTINGS_WINDOW,
	MEN_SETTINGS_SCALABLEWINDOW,
	MEN_SETTINGS_SAVE,

	MEN_SETTINGS_PORT0_GAMEPORT,
	MEN_SETTINGS_PORT0_NUMERICPAD,
	MEN_SETTINGS_PORT0_CURSORKEYS,
	MEN_SETTINGS_PORT0_UNASSIGNED,

	MEN_SETTINGS_PORT1_GAMEPORT,
	MEN_SETTINGS_PORT1_NUMERICPAD,
	MEN_SETTINGS_PORT1_CURSORKEYS,
	MEN_SETTINGS_PORT1_UNASSIGNED,
};

#endif /* _ATARI_AMIGA_H_ */
