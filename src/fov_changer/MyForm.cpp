#include <Windows.h>
#include "MyForm.h"
#pragma comment(lib, "user32.lib")

using namespace System;
using namespace System::Windows::Forms;

INT WINAPI CALLBACK WinMain(HINSTANCE, HINSTANCE, LPSTR, INT){
	Application::Run(gcnew fov_changer::MyForm());
	return TRUE;
}