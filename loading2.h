
#include <stdio.h>
#include <conio.h>
#include <myconio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>

HBITMAP hBitmap;
void
imag(char ch[50],HWND hwnd,int x,int y) {HWND hsti;HBITMAP hBitmap;
     hBitmap = LoadImageW(NULL, ch, IMAGE_BITMAP,
        0, 0, LR_LOADFROMFILE);

        hsti = CreateWindowW(L"static", L"",
            WS_CHILD | WS_VISIBLE | SS_BITMAP,
            x, y, 300, 300,
           hwnd, (HMENU) 0, NULL, NULL);

        SendMessage(hsti, STM_SETIMAGE,

            (WPARAM) IMAGE_BITMAP, (LPARAM) hBitmap);
}
void loading2(HWND hwnd)
{
    HWND hsti,hwndt;
    SetWindowTextW(hwnd, L" Loading ");
int a;char i;

a=200;
char ch=L"2.mp4-";
imag( L"loading2\\2.mp4-1.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-2.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-3.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-4.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-5.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-6.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-7.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-8.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-9.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-10.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-11.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-12.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-13.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-14.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-15.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-16.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-17.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-18.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-19.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-20.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-21.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-22.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-23.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-24.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-25.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-26.bmp",hwnd,0,0);

imag( L"loading2\\2.mp4-27.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-28.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-29.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-30.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-31.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-32.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-33.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-34.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-35.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-36.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-37.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-38.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-39.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-40.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-41.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-42.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-43.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-44.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-45.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-46.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-47.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-48.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-49.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-50.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-51.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-52.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-53.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-54.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-55.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-56.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-57.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-58.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-59.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-60.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-61.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-62.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-63.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-64.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-65.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-66.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-67.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-68.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-69.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-70.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-71.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-72.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-73.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-74.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-75.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-76.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-77.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-78.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-79.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-80.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-81.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-82.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-83.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-84.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-85.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-86.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-87.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-88.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-89.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-90.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-91.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-92.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-93.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-94.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-95.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-96.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-97.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-98.bmp",hwnd,0,0);


imag( L"loading2\\2.mp4-99.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-100.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-101.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-102.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-103.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-104.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-105.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-106.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-107.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-108.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-109.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-110.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-111.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-112.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-113.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-114.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-115.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-116.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-117.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-118.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-119.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-120.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-121.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-122.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-123.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-124.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-125.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-126.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-127.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-128.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-129.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-130.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-131.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-132.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-133.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-134.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-135.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-136.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-137.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-138.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-139.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-140.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-141.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-142.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-143.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-144.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-145.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-146.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-147.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-148.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-149.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-150.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-151.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-152.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-153.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-154.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-155.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-156.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-157.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-158.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-159.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-160.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-161.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-162.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-163.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-164.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-165.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-166.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-167.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-168.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-169.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-170.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-171.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-172.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-173.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-174.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-175.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-176.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-177.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-178.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-179.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-180.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-181.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-182.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-183.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-184.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-185.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-186.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-187.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-188.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-189.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-190.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-191.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-192.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-193.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-194.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-195.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-196.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-197.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-198.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-199.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-200.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-201.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-202.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-203.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-204.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-205.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-206.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-207.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-208.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-209.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-210.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-211.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-212.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-213.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-214.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-215.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-216.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-217.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-218.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-219.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-220.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-221.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-222.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-223.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-224.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-225.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-226.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-227.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-228.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-229.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-230.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-231.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-232.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-233.bmp",hwnd,0,0);
imag( L"loading2\\2.mp4-234.bmp",hwnd,0,0);


}
