#include <stdio.h>
#include <stdlib.h>

typedef struct q{
	double x;
	int * ptr; // Este miembro es un apuntador	
} Q;

int main(){
	Q q1, * q2 = NULL; 
	// Trabajar con la variable q1
	q1.x = 34.2;
	q1.ptr = (int *) malloc(sizeof(int));
	if(q1.ptr == NULL) exit(0);
	*(q1.ptr)= 57;
	printf("\n%lf %d %p", q1.x, *(q1.ptr), q1.ptr);
	// Trabajar con la variable q2
	q2 = (Q *) malloc(sizeof(Q));
	if(q2 == NULL) exit(0);
	q2->x = 90.3;
	q2->ptr = (int *) malloc(sizeof(int));
	if(q2->ptr == NULL) exit(0);
	*(q2->ptr)= 79;
	printf("\n%lf %d %p", q2->x, *(q2->ptr), q2->ptr);
	// Liberar
	free(q1.ptr);
	free(q2->ptr);
	free(q2);
}
