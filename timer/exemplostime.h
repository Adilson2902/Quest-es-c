void  timeexemplo1(){

    time_t  seg;

    seg = time(NULL);
    printf("\n -------------- Exemplo 1 ---------------- \n");
    printf("N de horas que passou: %d \n",(seg/3600));



}

void timeexemplo2(){

    printf("\n -------------- Exemplo 2 ---------------- \n");
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
    printf("\n -------------- Exemplo 3 ---------------- \n");

    printf("Formato-padrao: %s",asctime(loc_time));
    strftime(buffer,150,"Hoje é %A, %d de %B de %Y. \n",loc_time);
    printf(buffer);
    strftime(buffer,150,"Hoje agora =  %I:%M:%S %p. \n",loc_time);
    printf(buffer);




}


void timeexemplo4(){

    struct  tm str_time;
    time_t hora_do_dia;


    printf("\n -------------- Exemplo 4 ---------------- \n");
    str_time.tm_year = 1990-1900;
    str_time.tm_mon = 2;
    str_time.tm_mday = 7;
    str_time.tm_hour = 11;
    str_time.tm_min = 30;
    str_time.tm_sec = 0;
    str_time.tm_isdst = 0;

    hora_do_dia  = mktime(&str_time);
    printf(ctime(&hora_do_dia));

}
