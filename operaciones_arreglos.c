#include <stdio.h>
#define N 20

void insertar(int arr[], int pos, int valor, int * len){
	int i;
	if(pos<0 || pos>(*len) || pos>=N) return;
	for(i=*len; i>=pos; i--){
		arr[i+1] = arr[i];
	}
	arr[pos] = valor;
	(*len)++;
}

void borrar(int arr[], int pos, int * len){
	int i;
	if(pos<0 || pos>(*len) ||pos>=N) return;
	for(i=pos; i<*len; i++){
			arr[i] = arr[i+1];
	}
	(*len)--;
}

void actualizar(int arr[], int pos, int nuevo_valor, int * len){
	if(pos<0 || pos>(*len) ||pos>=N) return;
	arr[pos] = nuevo_valor;
}

void desplegar(int arr[], int * len){
	int i;
	if(*len == 0) printf("<Empty>\n");
	else{
		for(i=0; i<*len; i++){
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
}

int main(){
	int arreglo[N] = {0};
	int len = 0;
	printf("Arreglo antes de insertar elementos: \n");
	desplegar(arreglo, &len);
	printf("Arreglo despues de insertar elementos: \n");
	insertar(arreglo, 0, 7, &len);
	insertar(arreglo, 0, 2, &len);
	insertar(arreglo, 1, -5, &len);
	insertar(arreglo, 9, 4, &len); // No ingresa al arreglo
	insertar(arreglo, 2, 8, &len);
	insertar(arreglo, 1, 6, &len);
	insertar(arreglo, 4, 9, &len);
	insertar(arreglo, 10, 19, &len); // No ingresa al arreglo
	desplegar(arreglo, &len);
	printf("Elementos actualmente en el arreglo: %d\n\n", len);
	// Borrando elementos
	borrar(arreglo, 1, &len);
	borrar(arreglo, 4, &len); // No se borra del arreglo
	printf("Arreglo despues de borrar elementos: \n");
	desplegar(arreglo, &len);
	printf("Elementos actualmente en el arreglo: %d\n\n", len);
	// Actualizando valor
	actualizar(arreglo, 1, 29, &len);
	actualizar(arreglo, 3, 27, &len);
	actualizar(arreglo, 7, 29, &len); // No se actualiza
	printf("Arreglo despues de actualizar elementos: \n");
	desplegar(arreglo, &len);
	printf("Elementos actualmente en el arreglo: %d\n\n", len);
	
	return 0;
}
