# include <stdio.h>
# include <stdlib.h>


int main () {
	float num ;
	FILE * fptr ;
	fptr = fopen ( "programa.txt" , "w" ) ;
	if ( fptr == NULL ) {
	printf ( "Erro ao abrir arquivo !" ) ;
	exit (1) ;
	}
		printf ( "Entre com um número fracionário : " ) ;
		scanf ( "%f" , & num ) ;
	fprintf ( fptr , "%.2f" , num ) ;
	fclose ( fptr ) ;
	
	return 0;
	
	// sai um arquivo com todos
}
