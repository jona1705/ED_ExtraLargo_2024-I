#ifndef LISTA_H
#define LISTA_H
#define MAX 100

typedef struct lista{
	double arr[MAX];
	int len;
} Lista;

Lista inicializar();
void desplegar(Lista l);
Lista insertar(Lista l, double x);
Lista insertar_en(Lista l, int pos, double x);
Lista borrar(Lista l);
Lista borrar_en(Lista l, int pos);
int buscar(Lista l, double x);
Lista ordenar(Lista l);

#endif
