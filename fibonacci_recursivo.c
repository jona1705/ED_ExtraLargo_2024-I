#include <stdio.h>

/* 
	Clase: 25/09/2023
	Sucesion de Fibonacci recursivo
*/

int fibonacci(int n){
    if(n==1 || n==2) return 1;
    else return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
    int i;
    printf("\nPrimeros 10 terminos de la serie de Fibonacci (recursivo): ");
    for(i=1; i<=16; i++){
        printf("\nEl termino %d es: %d", i, fibonacci(i));
    }

    return 0;
}
