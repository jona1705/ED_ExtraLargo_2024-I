#include <stdio.h>
#define MAX 10

int arr[MAX] = {0};
int frente = -1;
int final = -1;
int len = 0;

void encolar(int x){
	if(final == MAX-1){
		// Cola esta llena
		return;
	} else{
		if(final < 0 || frente>final){
			// Cola esta vacia
			// Vamos a ingresar el primer dato
			frente = final = 0;
		} else{
			// La cola tiene mas elemento
			final++; // La insercion incrementa en uno el indice final
		}
		arr[final] = x;
		len++;
	}
}

void desencolar(){
	if(final < 0 || frente>final){
		// Cola vacia
		return;
	} else{
		if(frente > final){
			// Resetear la cola (vaciar la cola)
			frente = final = -1;
			len = 0;
		} else{
			// Si hay mas elementos en la cola
			// solo movemos el indice frente
			frente++;
			len--;
		}
	}
}

void desplegar(){
	if(final < 0 || frente>final) {
		// La cola esta vacia
		return;
	} else{
		int i;
		for(i=frente; i<=final; i++){
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
}

int frente_(){
	return frente;
}

int final_(){
	return final;
}

int main(){
	// Insertando elementos
	encolar(1);
	encolar(5);
	encolar(9);
	encolar(8);
	encolar(3);
	printf("\nValor al frente: %d", frente_());
	printf("\nValor al final: %d\n", final_());
	desplegar();
	// Borrando elementos
	desencolar();
	desencolar();
	printf("\nValor al frente: %d", frente_());
	printf("\nValor al final: %d\n", final_());
	desplegar();
	desplegar();
}
