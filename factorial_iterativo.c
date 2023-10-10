#include <stdio.h>

/* 
	Clase: 25/09/2023
	Factorial iterativo
*/

int factorial(int n){
    int i, fact=1;
    for(i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int i;
    printf("\nPrimeros 10 numeros factoriales: ");
    for(i=1; i<=16; i++){
        printf("\nEl factorial de %d es: %d", i, factorial(i));
    }

    return 0;
}
