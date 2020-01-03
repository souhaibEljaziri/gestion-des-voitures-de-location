#include<windows.h>
#include <commctrl.h>
#include <wchar.h>

HWND hStat;
HWND hMonthCal;
void image( char ch[50],HWND hwnd,int x,int y) {
HWND hsti;HBITMAP hBitmap;
     hBitmap = LoadImageW(NULL, ch, IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);

        hsti = CreateWindowW(L"static", L"",
            WS_CHILD | WS_VISIBLE | SS_BITMAP,
            x, y, 300, 300,
           hwnd, (HMENU) 0, NULL, NULL);

        SendMessage(hsti, STM_SETIMAGE,

            (WPARAM) IMAGE_BITMAP, (LPARAM) hBitmap);
}
void bouton(HWND hwnd,char ch[50],int x,int y,int xx, int yy,int i) {
HWND boutton;
 boutton = CreateWindow (TEXT("button"),                      // The class name required is button
                               TEXT(ch),                  // the caption of the button
                               WS_CHILD |WS_VISIBLE | BS_PUSHBUTTON,  // the styles
                               x,y,                                  // the left and top co-ordinates
                               xx,yy,                              // width and height
                               hwnd,                                 // parent window handle
                               (HMENU)i,                   // the ID of your button
                               NULL,
                               NULL) ;
}
void edit(HWND hwnd,char ch[50],int x,int y,int xx, int yy,int i) {
HWND hwndt;
hwndt= CreateWindow("edit",   ch,
                        WS_VISIBLE | WS_TILEDWINDOW, //basic window style
                        x,y,       //set starting point to default value
                        xx,yy,       //set all the dimensions to default value
                        hwnd,                //no parent window
                        (HMENU) 0,                //no menu
                        NULL,
                        NULL);
                        SendMessage(    hwndt ,WM_SETTEXT  , 25,  (LPARAM) TEXT("  "));
}
void barre_text(HWND hwnd,int x,int y,int xx, int yy,int i) {
HWND hwndt;
 hwndt = CreateWindowW(WC_EDITW, NULL, WS_CHILD | WS_VISIBLE | WS_BORDER,
               x, y, xx, yy, hwnd, (HMENU) i, NULL, NULL);
}
void Calendrier_funetre(HWND hwnd) {



//  INITCOMMONCONTROLSEX icex;

  //icex.dwSize = sizeof(icex);
  //icex.dwICC  = ICC_DATE_CLASSES;
  //InitCommonControlsEx(&icex);
HWND hwndt;

hwndt= CreateWindow("edit",   "Calendrier",
                        WS_VISIBLE | WS_TILEDWINDOW, //basic window style
                        1150,40,       //set starting point to default value
                        190,210,       //set all the dimensions to default value
                        hwnd,                //no parent window
                        (HMENU) 0,                //no menu
                        NULL,
                        NULL);
                        SendMessage(    hwndt ,WM_SETTEXT  , 25,  (LPARAM) TEXT("  "));
  hMonthCal = CreateWindowW(MONTHCAL_CLASSW, L"",
    WS_BORDER | WS_CHILD | WS_VISIBLE ,
    0,0,175,170, hwndt, (HMENU)0, NULL, NULL);


}
void Calendrier(HWND hwnd,int x,int y,int xx,int yy) {



//  INITCOMMONCONTROLSEX icex;

  //icex.dwSize = sizeof(icex);
  //icex.dwICC  = ICC_DATE_CLASSES;
  //InitCommonControlsEx(&icex);

  hMonthCal = CreateWindowW(MONTHCAL_CLASSW, L"",
    WS_BORDER | WS_CHILD | WS_VISIBLE ,
    x, y, xx, yy, hwnd, (HMENU)0, NULL, NULL);

}

void GetSelectedDate(HWND hMonthCal, HWND hStat) {

  SYSTEMTIME time;
  int const dsize = 20;
  wchar_t buf[dsize];

  ZeroMemory(&time, sizeof(SYSTEMTIME));
  SendMessage(hMonthCal, MCM_GETCURSEL, 0, (LPARAM) &time);

  size_t cbDest = dsize * sizeof(wchar_t);
  //StringCbPrintfW(buf, cbDest, L"%d-%d-%d",time.wYear, time.wMonth, time.wDay);

  SetWindowTextW(hStat, buf);
}

int thread(void* a,void* b)
{
    HANDLE h1;
    HANDLE h2;
    h1=CreateThread(NULL,0,a,NULL,0,0);
    h2=CreateThread(NULL,0,b,NULL,0,0);

    system("PAUSE");
    //TerminateThread(h1,0);
    //system("PAUSE");
    return 0;
}
