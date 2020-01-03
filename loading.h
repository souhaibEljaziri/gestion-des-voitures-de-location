#include "load.h"
#include <stdio.h>
#include <conio.h>
#include <myconio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>
HBITMAP hBitmap;
void loading(HWND hwnd)
{
    HWND hsti,hwndt;
    SetWindowTextW(hwnd, L" Loading ");
int i,a;

a=200;

/*for(i=0;i<6;i++)
{
 SetWindowTextW(hwnd, L" Loading 20%");
 Loading1();
        hsti = CreateWindowW(L"static", L"",
            WS_CHILD | WS_VISIBLE | SS_BITMAP,
            5, 5, 300, 300,
           hwnd, (HMENU) 1, NULL, NULL);

        SendMessage(hsti, STM_SETIMAGE,

            (WPARAM) IMAGE_BITMAP, (LPARAM) hBitmap);
            Sleep(a);
        //    DestroyWindow(hsti);
            SetWindowTextW(hwnd, L" Loading 40%");
 Loading2();
        hsti = CreateWindowW(L"static", L"",
            WS_CHILD | WS_VISIBLE | SS_BITMAP,
            5, 5, 300, 300,
           hwnd, (HMENU) 1, NULL, NULL);

        SendMessage(hsti, STM_SETIMAGE,

            (WPARAM) IMAGE_BITMAP, (LPARAM) hBitmap);



            Sleep(a);
      //      DestroyWindow(hsti);
            SetWindowTextW(hwnd, L" Loading 60%");
 Loading3();
        hsti = CreateWindowW(L"static", L"",
            WS_CHILD | WS_VISIBLE | SS_BITMAP,
            5, 5, 300, 300,
           hwnd, (HMENU) 1, NULL, NULL);

        SendMessage(hsti, STM_SETIMAGE,

            (WPARAM) IMAGE_BITMAP, (LPARAM) hBitmap);



            Sleep(a);
    //        DestroyWindow(hsti);
            SetWindowTextW(hwnd, L" Loading 80%");
 Loading4();
        hsti = CreateWindowW(L"static", L"",
            WS_CHILD | WS_VISIBLE | SS_BITMAP,
            5, 5, 300, 300,
           hwnd, (HMENU) 1, NULL, NULL);

        SendMessage(hsti, STM_SETIMAGE,

            (WPARAM) IMAGE_BITMAP, (LPARAM) hBitmap);



            Sleep(a);
  //          DestroyWindow(hsti);
            SetWindowTextW(hwnd, L" Loading 100%");
 Loading5();
        hsti = CreateWindowW(L"static", L"",
            WS_CHILD | WS_VISIBLE | SS_BITMAP,
            5, 5, 300, 300,
           hwnd, (HMENU) 1, NULL, NULL);

        SendMessage(hsti, STM_SETIMAGE,

            (WPARAM) IMAGE_BITMAP, (LPARAM) hBitmap);

Sleep(a);
//DestroyWindow(hsti);
}*/
load(hwnd);

}
/*void LoadMyImage(void) {

    hBitmap = LoadImageW(NULL, L"image\\a.bmp", IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);
}

void LoadMyImage2(void) {

    hBitmap = LoadImageW(NULL, L"image\\b.bmp", IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);
}
void LoadMyImage3(void) {

    hBitmap = LoadImageW(NULL, L"image\\c.bmp", IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);
}
void Loading1(void) {

    hBitmap = LoadImageW(NULL, L"image1\\loading1.bmp", IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);
}
void Loading2(void) {

    hBitmap = LoadImageW(NULL, L"image1\\loading2.bmp", IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);
}
void Loading3(void) {

    hBitmap = LoadImageW(NULL, L"image1\\loading3.bmp", IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);
}
void Loading4(void) {

    hBitmap = LoadImageW(NULL, L"image1\\loading4.bmp", IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);
}
void Loading5(void) {

    hBitmap = LoadImageW(NULL, L"image1\\loading5.bmp", IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);
}
*/
