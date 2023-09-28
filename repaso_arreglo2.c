#include <stdio.h>

// Apuntador vs apuntador a un arreglo

int main(){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int * p = arr; // p es un apuntador al arreglo arr
	int (*q)[10] = &arr; // q es un apuntador a un arreglo de 10 elementos
	printf("dir_base(arr) = %p", arr);
	printf("\ndir_base(arr) = %p", p);
	printf("\ndir_base(arr) = %p", q);
	p++; // p se desplaza al siguiente elemento el arreglo arr
	q++; // q se desplaza al siguiente elemento que sigue del arreglo arr
	printf("\ndir(p) = %p", p); // dir(arr[1])
	printf("\ndir(q) = %p", q); 
}
