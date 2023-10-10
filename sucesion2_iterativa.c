#include <stdio.h>

/* 
	Clase: 25/09/2023
	Sucesion recursiva:
	- a_1 = 2
	- a_2 = 1
	- a_n = n + a_n-1 * a_n-2
*/    

int sucesion(int n){
    if(n==1) return 2;
    else if(n==2) return 1;
    else{
        int i;
        int a=2, b=1, temp=0;
        for(i=3; i<=n; i++){
            temp = i + b * a;
            a = b;
            b = temp;
        }
        return temp;
    }
}

int main(){
    int i;
    printf("\nPrimeros 10 terminos de la sucesion (iterativa): ");
    for(i=1; i<=9; i++){
        printf("\nEl termino %d es: %d", i, sucesion(i));
    }
}
