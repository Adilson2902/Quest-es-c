#include <cstdio>
#include <ctime>
#include <ctime>



int main() {

    time_t  seg;

    seg = time(NULL);
    printf("N de horas que passou: %d",(seg/3600));

    return 0;
}
