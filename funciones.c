#include <stdio.h>

int MAX = 5; // MAX existe en un ambito global

// Funcion paso por valor
void valor(int a, int b){
	printf("\ndir(a)=%p", &a);
	printf("\ndir(b)=%p", &b);
}

// Funcion paso por referencia
void referencia(int * a, int * b){
	printf("\ndir(a)=%p", a);
	printf("\ndir(b)=%p", b);
}

// Crear una funcion para intercambiar dos numeros
void intercambiar(int * a, int * b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a=5;
	int b=6;
	printf("\ndir(a)=%p", &a);
	printf("\ndir(b)=%p", &b);
	// Paso por valor
	printf("\nPaso por valor: ");
	valor(a, b);
	// Paso por referencia
	printf("\nPaso por referencia: ");
	referencia(&a, &b);
	
	// Ejemplo del intercambio de variables
	// Paso por referencia
	intercambiar(&a, &b);
	printf("\n\na=%d, b=%d", a, b);
	
}
