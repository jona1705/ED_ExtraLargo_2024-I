#include <stdio.h>
#define P 2
#define M 3
#define N 4

int main(){
	int *** ptr = (int ***) malloc(P * sizeof(int **));
	if(ptr == NULL)exit(0);
	int i, j, k;
	for(i=0; i<P; i++){
		ptr[i] = (int **) malloc(M * sizeof(int *));
		if(ptr[i] == NULL exit(0));
		for(j=0; j<M; j++){
			ptr[i][j] = (int *) malloc(N * sizeof(int));
			if(ptr[i][j] == NULL exit(0));
		}
	}
	
	// Asignando valores
	for(i=0; i<P; i++){
		for(j=0; j<M; j++){
			for(k=0; k<N; k++){
				ptr[i][j][k] = i+j+k+1;
			}	
		}
	}
	// Imprimiendo valores
	for(i=0; i<P; i++){
		for(j=0; j<M; j++){
			for(k=0; k<N; k++){
				printf("%d", ptr[i][j][k]);
			}
			printf("\n");	
		}
		printf("\n");
	}
	
	for(i=0; i<M; i++){
		free(ptr[i][j]);
		for(j=0; j<P; j++){
			free(ptr[j]);
		}
	}
	free(ptr);
}
