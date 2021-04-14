#include <stdio.h>


int main(){


// <123>
// não muda nada
printf ("<%d>\n", 123) ;

//<123>
// não muda nada
printf ("<%2d>\n", 123) ;


//<       123>
// espaçamento pra direita
printf ("<%10d>\n" , 123) ;

//<123       >
// espaçamento pra esquerda
printf ( "<%-10d>\n" , 123) ;

return 0;
 }
