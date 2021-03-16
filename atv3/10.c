#include <stdio.h>
#include <time.h>

int main() 
{ 
  
    struct tm* local; 
    time_t t = time(NULL); 
  
    // Get the localtime 
    local = localtime(&t); 
  
    printf("Hora %d:%d:%d  \n",local->tm_hour, local->tm_min, local->tm_sec);
    printf("Data local : %d/%d/%d \n ", local->tm_mday,local->tm_mon+1,local->tm_year+1900);

    
    return 0; 
} 