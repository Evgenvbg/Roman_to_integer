#include <Windows.h>
#include "MyForm.h"

#include <string>
#include <map>
#include <algorithm>
using namespace Project2; // �������� �������
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
