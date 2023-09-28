#include <stdio.h>
#include <limits.h>

int busquedaLineal(int arreglo[], int n, int buscado){
	int i;
	for(i=0; i<n; i++){
		if(arreglo[i] == buscado) return i;
	}
	
	return INT_MIN;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int buscado = 7;
	int indice = busquedaLineal(arr, n, buscado);
	if(indice == INT_MIN){
		printf("\nEl valor buscado no se encuentra en el arreglo");
	} else{
		printf("\nEl valor buscado se encuentra en el indice: %d", indice);
	}
	
	
	return 0;
}
