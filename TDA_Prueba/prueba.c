// IMPLEMENTACION
#include <stdio.h>
#include <math.h>
#include "prueba.h"

int suma(int a, int b){
	return a+b;
}

int resta(int a, int b){
	return a-b;
}

int multiplicacion(int a, int b){
	return a*b;
}

float division(int a, int b){
	return (float)a/b;
}

int modulo(int a, int b){
	return a%b;
}

int potencia(int x, int pot){
	int temp = 1;
	int i;
	for(i=1; i<=pot; i++){
		temp = temp * x;
	}
	return temp;
}

float raiz2(int x){
	return (float)sqrt(x);
}
