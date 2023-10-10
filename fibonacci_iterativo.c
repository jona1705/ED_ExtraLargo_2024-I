#include <stdio.h>

/* 
	Clase: 25/09/2023
	Sucesion de Fibonacci iterativo
*/

int fibonacci(int n){
    if(n==1 || n==2) return 1;
    else {
        int i, temp = 0;
        int a = 1, b = 1;
        for(i=3; i<=n; i++){
            temp = a + b;
            a = b;
            b = temp;
        }
        return temp;
    }
}

int main(){
    int i;
    printf("\nPrimeros 10 terminos de la serie de Fibonacci (iterativo): ");
    for(i=1; i<=16; i++){
        printf("\nEl termino %d es: %d", i, fibonacci(i));
    }

    return 0;
}
