#include <stdio.h>

int main(){
	int * p = (int *) calloc(5, sizeof(int)); // El tamaño de un entero
	if(p == NULL) exit(0);
	p[0] = 10;
	p[1] = 14;
	p[2] = -3;
	p[3] = 8;
	p[4] = 7;
	for(i=0; i<5; i++){
		printf("\nEl valor de p[%d] es: %d", i, p[i]);
	}
	
	free(p); // Liberar la memoria
	
	return 0;
}
