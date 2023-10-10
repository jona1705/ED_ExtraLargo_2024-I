#include <stdio.h>

/* 
	Clase: 25/09/2023
	Sucesion iterativa:
	- a_1 = 3
	- a_n = a_n-1 + 2
*/

int sucesion(int n){
    if(n==1) return 3;
    else return sucesion(n-1) + 2;
}

int main(){
    int i;
    printf("\nPrimeros 10 terminos de la sucesion (recursiva): ");
    for(i=1; i<=10; i++){
        printf("\nEl termino %d es: %d", i, sucesion(i));
    }
}
