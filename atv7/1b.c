# include <stdio.h>

int main () {

//<1234.560000>
// mostra os 0
printf ( "<%f>\n" , 1234.56) ;

//<1.234560e+03>
// limita a quantidade de caracteres pra mostrar
printf ( "<%e>\n " , 1234.56) ;

//<1234.56>
//limita das casas decimais
printf ( "<%10.2f>\n " , 1234.56) ;

//<1234.6>
//limita as casas decimais
printf ( "<%-10.1f>\n " , 1234.56) ;


// <  1234.560>
// espaçamento pra direita
printf ( "<%10.3f>\n " , 1234.56) ;

//< 1.235e+03>
// espaçamento com limitação de caracteres
printf ( "<%10.3e>\n " , 1234.56) ;

return 0;

 }
