#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

HANDLE win_handle;
HWND gmod_win;
DWORD gmod_pid;

HANDLE GetGModWindow( void ){
	gmod_win = FindWindowA(NULL, "Garry's Mod");
	GetWindowThreadProcessId(gmod_win, &gmod_pid);
	win_handle = OpenProcess(PROCESS_ALL_ACCESS, TRUE, gmod_pid);
	return win_handle;
}