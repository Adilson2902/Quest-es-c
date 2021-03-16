#include <stdio.h>
#include <time.h>

int main() 
{ 
  
    struct tm* local; 
    time_t t = time(NULL); 
  

    local = localtime(&t); 
  
    printf("Dias passados do ano -> %d \n",local->tm_yday);
    
    return 0; 
} 