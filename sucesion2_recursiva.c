#include <stdio.h>
    
/* 
	Clase: 25/09/2023
	Sucesion iterativa:
	- a_1 = 2
	- a_2 = 1
	- a_n = n + a_n-1 * a_n-2
*/ 

int sucesion(int n){
    if(n==1) return 2;
    else if(n==2) return 1;
    else return n + sucesion(n-1)* sucesion(n-2);
}

int main(){
    int i;
    printf("\nPrimeros 10 terminos de la sucesion (recursiva): ");
    for(i=1; i<=9; i++){
        printf("\nEl termino %d es: %d", i, sucesion(i));
    }
}
