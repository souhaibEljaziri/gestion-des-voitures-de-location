#include <stdio.h>
#include <conio.h>
#include <myconio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>

HBITMAP hBitmap;
void imagee(char ch[50],HWND hwnd,int x,int y) {HWND hsti;HBITMAP hBitmap;
     hBitmap = LoadImageW(NULL, ch, IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);

        hsti = CreateWindowW(L"static", L"",
            WS_CHILD | WS_VISIBLE | SS_BITMAP,
            x, y, 300, 300,
           hwnd, (HMENU) 0, NULL, NULL);

        SendMessage(hsti, STM_SETIMAGE,

            (WPARAM) IMAGE_BITMAP, (LPARAM) hBitmap);
}
void loading_fermer(HWND hwnd)
{
    HWND hsti,hwndt;
    SetWindowTextW(hwnd, L" Loading ");
int a;char i;

a=200;
char ch=L"2.mp4-";
imagee( L"loading_fermer\\2.mp4-1.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-2.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-3.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-4.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-5.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-6.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-7.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-8.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-9.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-10.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-11.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-12.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-13.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-14.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-15.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-16.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-17.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-18.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-19.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-20.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-21.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-22.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-23.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-24.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-25.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-26.bmp",hwnd,0,0);

imagee( L"loading_fermer\\2.mp4-27.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-28.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-29.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-30.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-31.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-32.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-33.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-34.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-35.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-36.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-37.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-38.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-39.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-40.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-41.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-42.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-43.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-44.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-45.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-46.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-47.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-48.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-49.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-50.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-51.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-52.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-53.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-54.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-55.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-56.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-57.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-58.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-59.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-60.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-61.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-62.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-63.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-64.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-65.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-66.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-67.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-68.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-69.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-70.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-71.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-72.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-73.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-74.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-75.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-76.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-77.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-78.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-79.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-80.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-81.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-82.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-83.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-84.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-85.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-86.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-87.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-88.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-89.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-90.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-91.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-92.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-93.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-94.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-95.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-96.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-97.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-98.bmp",hwnd,0,0);


imagee( L"loading_fermer\\2.mp4-99.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-100.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-101.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-102.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-103.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-104.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-105.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-106.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-107.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-108.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-109.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-110.bmp",hwnd,0,0);
imagee( L"loading_fermer\\2.mp4-111.bmp",hwnd,0,0);


}
