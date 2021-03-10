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


void timeexemplo3(){
    char  buffer[150];
    time_t curtime;

    struct  tm *loc_time;

    curtime = time(NULL);

    loc_time = localtime(&curtime);


    printf("Formato-padrao: %s",asctime(loc_time));
    strftime(buffer,150,"Hoje é %A, %d de %B de %Y. \n",loc_time);
    printf(buffer);
    strftime(buffer,150,"Hoje agora =  %I:%M:%S %p. \n",loc_time);
    printf(buffer);




}

