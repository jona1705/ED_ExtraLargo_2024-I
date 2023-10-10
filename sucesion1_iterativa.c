#include <stdio.h>

/* 
	Clase: 25/09/2023
	Sucesion recursiva:
	- a_1 = 3
	- a_n = a_n-1 + 2
*/

int sucesion(int n){
    if(n==1) return 3;
    else{
        int i;
        int a=3, temp=0;
        for(i=2; i<=n; i++){
            temp = a + 2;
            a = temp;
        }
        return temp;
    }
}

int main(){
    int i;
    printf("\nPrimeros 10 terminos de la sucesion (iterativa): ");
    for(i=1; i<=10; i++){
        printf("\nEl termino %d es: %d", i, sucesion(i));
    }
}
