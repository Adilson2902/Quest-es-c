#include <graphics.h>
#include <stdio.h>
#include <time.h>

 int main () {
 initwindow (300 , 300) ;
 char a [5	];
settextjustify ( CENTER_TEXT , CENTER_TEXT );
settextstyle ( DEFAULT_FONT , HORIZ_DIR ,3) ;
 setcolor ( WHITE );
 
     struct tm* local; 
    time_t t = time(NULL); 

    // Get the localtime 

 for (int i = 59; i >=0; i--) {
 time_t t = time(NULL); 
 local = localtime(&t);
 sprintf (a , "%i:%i:%i", local->tm_hour, local->tm_min, local->tm_sec );
 outtextxy ( getmaxx () /2 , getmaxy () /2 , a);
 delay (1000) ;
 if (i >= 0)
 cleardevice () ;
 }
 getch () ;
 }
