#include <graphics.h>
#include <stdio.h>
#include <time.h>


int main() {
    int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;
    initgraph(&gd,&gm,NULL);
 setcolor ( RED );
    char a [10];

    struct tm* local;
    time_t t = time(NULL);


    for (int i = 59; i >=0; i--) {
        time_t t = time(NULL);
        local = localtime(&t);
         
        sprintf (a, "%i:%i:%i\n", local->tm_hour, local->tm_min, local->tm_sec );
       
        outtextxy (getmaxx()/2 , getmaxy()/2 , a);
      
        
        delay (1000) ;
        if (i >= 0){
            cleardevice () ;
            }
     
          
    }
    getch () ;
    return 0;
}
