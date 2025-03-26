#include <iostream>
#include <windows.h>
using namespace std;

const int nScreenWidth = 20;
const int nScreenHeight = 40;

const int nBoardWidth = 10;
const int nBoardHeight = 40;

int main(){

system("MODE 20, 10");

BOOL WINAPI SetConsoleScreenBufferInfoEx(
  _In_ HANDLE                        hConsoleOutput,
  _In_ PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx
);


typedef struct _CONSOLE_SCREEN_BUFFER_INFOEX {
  ULONG      cbSize;
  COORD      dwSize;
  COORD      dwCursorPosition;
  WORD       wAttributes;
  SMALL_RECT srWindow;
  COORD      dwMaximumWindowSize;
  WORD       wPopupAttributes;
  BOOL       bFullscreenSupported;
  COLORREF   ColorTable[16];
} CONSOLE_SCREEN_BUFFER_INFOEX, *PCONSOLE_SCREEN_BUFFER_INFOEX;



HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

CONSOLE_SCREEN_BUFFER_INFOEX csbiex;
csbiex.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);

GetConsoleScreenBufferInfoEx(hConsoleOutput, &csbiex);

csbiex.ColorTable[0] = RGB(0, 188, 212);
csbiex.ColorTable[1] = RGB(63, 81, 181);
csbiex.ColorTable[2] = RGB(255, 87, 34);
csbiex.ColorTable[3] = RGB(255, 235, 59);
csbiex.ColorTable[4] = RGB(76, 175, 80);
csbiex.ColorTable[5] = RGB(156, 39, 176);
csbiex.ColorTable[6] = RGB(237, 28, 36);
csbiex.ColorTable[7] = RGB(242, 242, 242);
csbiex.ColorTable[8] = RGB(248, 248, 248);
csbiex.ColorTable[9] = RGB(20, 20, 20);

SetConsoleScreenBufferInfoEx(hConsoleOutput, &csbiex);








}