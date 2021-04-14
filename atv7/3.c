# include <stdio.h>
# include <stdlib.h>


int main () {
	float num ;
	char nome[61];
	FILE * fptr ;
	fptr = fopen ( "programa.txt" , "w" ) ;
	if ( fptr == NULL ) {
	printf ( "Erro ao abrir arquivo !" ) ;
	exit (1) ;
	}
		 printf("Digite seu nome: ");
  		scanf("%s",nome);
		printf ( "Entre com um número fracionário : " ) ;
		scanf ( "%f" , &num ) ;
		
	fprintf ( fptr , "%.2f , %s" , num , nome ) ;
	fclose ( fptr ) ;
	
	return 0;
	
	// sai um arquivo com todos
}
