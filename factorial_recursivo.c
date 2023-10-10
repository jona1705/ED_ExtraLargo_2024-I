#include <stdio.h>

/* 
	Clase: 25/09/2023
	Factorial recursivo
*/

int factorial(int n){
    if(n==0 || n==1) return 1;
    else return n * factorial(n-1);
}

int main(){
    int i;
    printf("\nPrimeros 10 numeros factoriales: ");
    for(i=1; i<=16; i++){
        printf("\nEl factorial de %d es: %d", i, factorial(i));
    }

    return 0;
}
