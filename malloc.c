#include <stdio.h>

int main(){
	int * p = (int *) malloc(sizeof(int)); // El tama�o de un entero
	if(p == NULL) exit(0);
	*p = 10;
	printf("\nEl valor de p es: %d", *p);
	
	free(p); // Liberar la memoria
	
	return 0;
}
