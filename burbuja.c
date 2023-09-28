#include <stdio.h>

void intercambiar(int * a, int * b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Se realizan (n-1)*(n-1) comparaciones
// aunque la lista ya este ordenada
void burbuja(int arreglo[], int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1; j++){
			if(arreglo[j] > arreglo[j+1]){
				intercambiar(&arreglo[j], &arreglo[j+1]);
			}	
		}
	}
}

void desplegar(int arreglo[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", arreglo[i]);
	}
	printf("\n");
}

int main(){
	int arr[] = {9, 6, -2, 8, 5, -1, 3, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("\nArreglo antes de ordenar: \n");
	desplegar(arr, n);
	printf("\nArreglo despues de ordenar: \n");
	burbuja(arr, n);
	desplegar(arr, n);
	
	return 0;
}
