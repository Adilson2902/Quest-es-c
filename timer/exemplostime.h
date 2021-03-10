void  timeexemplo1(){

    time_t  seg;

    seg = time(NULL);
    printf("N de horas que passou: %d \n",(seg/3600));

}

void timeexemplo2(){


    time_t  seg;

    seg = time(NULL);

    printf(ctime(&seg));



}

