#include <stdio.h>
#define MAX 10

int arr[MAX] = {0};
int tope = -1;
int cont = 0;

void push(int x){
	if(tope == MAX-1) return;
	tope = tope + 1; // tope++
	arr[tope] = x;
	cont = cont + 1; // cont++
}

void pop(){
	if(tope == -1) return;
	tope = tope - 1;
	cont = cont - 1; // cont--
}

int peek(){
	return arr[tope];
}

int size(){
	return cont;
}

void imprimir(){
	int i;
	if(tope == -1) return;
	for(i=tope; i>=0; i--){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	push(9);
	push(8);
	push(7);
	push(3);
	push(1);
	push(-3);
	imprimir();
	printf("Valor en el tope de la pila: %d", peek());
	printf("\nElementos en la pila: %d\n", size());
	pop();
	pop();
	imprimir();
	printf("Valor en el tope de la pila: %d", peek());
	printf("\nElementos en la pila: %d", size());
	
	return 0;
}
