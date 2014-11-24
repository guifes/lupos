/* Entry point for Lupo's Project */

#include <windows.h>

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	MessageBox(0, "Lupo's World is running for the first time, OMG!", "Lupo's World", MB_OK | MB_ICONINFORMATION);

	return 0;
}