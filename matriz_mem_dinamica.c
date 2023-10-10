#include <stdio.h>
#define M 3
#define N 4

int main(){
	int ** ptr = (int **) malloc(M * sizeof(int *));
	if(ptr == NULL)exit(0);
	int i, j;
	for(i=0; i<M; i++){
		ptr[i] = malloc(N * sizeof(int));
		if(ptr[i] == NULL exit(0));
	}
	// Asignando valores
	for(i=0; i<M; i++){
		for(i=0; i<N; i++){
			ptr[i][j] = i+j+1;
		}
	}
	// Imprimiendo valores
	for(i=0; i<M; i++){
		for(i=0; i<N; i++){
			printf("%.2d", ptr[i][j]);
		}
		printf("\n");
	}
	
	// Liberar memoria
	for(i=0; i<M; i++){
		free(ptr[i]);
	}
	free(ptr);
}
