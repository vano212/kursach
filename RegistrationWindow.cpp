#include "RegistrationWindow.h"
#include <Windows.h>

using namespace kursov;

[STAThreadAttribute]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew RegistrationWindow());
	return 0;
}