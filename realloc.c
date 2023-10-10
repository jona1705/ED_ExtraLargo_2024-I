#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[10]; // Estatico
	int * ptr = (int *) malloc(10 * sizeof(int));
	if(ptr == NULL) exit(0);
	int i;
	for(i=0; i<10; i++){
		ptr[i] = i+1;
		printf("%d ", ptr[i]);
	}
	printf("\n\n");
	// Funcion realloc (incrementar)
	ptr = (int *) realloc(ptr, 20*sizeof(int));
	if(ptr == NULL) exit(0);
	for(i=0; i<20; i++){
		ptr[i] = i+1;
		printf("%d ", ptr[i]);
	}
	printf("\n\n");
	// Funcion realloc (decrementar)
	ptr = (int *) realloc(ptr, 5*sizeof(int));
	if(ptr == NULL) exit(0);
	for(i=0; i<5; i++){
		ptr[i] = i+1;
		printf("%d ", ptr[i]);
	}
	
	free(ptr);
	ptr = NULL;
}
