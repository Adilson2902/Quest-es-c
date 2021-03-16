#include <stdio.h>
#include <time.h>


void fun(){
 for(int i = 0; i<2000000 ; i++){
 
 printf("i -> %i \n",i);
 
 }

}



int  main() {
		clock_t t;
		t = clock();
		fun();
		t = clock() - t;
		double x = (( double)t)/CLOCKS_PER_SEC;

		printf("x -> %f \n", x);
		
		
		}
