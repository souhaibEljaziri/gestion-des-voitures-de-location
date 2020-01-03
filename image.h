#include <stdio.h>
HBITMAP hBitmap;
void imag
(
           char ch[50]
          ,HWND hwnd
          ,int x,int y)
{
    HWND hsti;
     hBitmap = LoadImageW(NULL, ch, IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);

        hsti = CreateWindowW(L"static", L"",
            WS_CHILD | WS_VISIBLE | SS_BITMAP,
            x, y, 300, 300,
           hwnd, (HMENU) 0, NULL, NULL);

        SendMessage(hsti, STM_SETIMAGE,

            (WPARAM) IMAGE_BITMAP, (LPARAM) hBitmap);
}
