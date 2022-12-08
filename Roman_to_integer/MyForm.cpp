#include <Windows.h>
#include "MyForm.h"

#include <string>
#include <map>
#include <algorithm>
using namespace Roman_to_integer; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
