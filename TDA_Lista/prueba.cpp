/// PRUEBAS
	printf("\n\n");
	int a = 5;
	int b = 6;
	intercambiar(&a, &b);
	printf("a=%d, b=%d", a, b);
	
	// Declarar un arreglo
	int prueba[10] = {6, 4, 5, 8, 2, 1, 5, -2, 4, -4};
	// Imprimir antes de ordenar
	printf("\n\n");
	int i;
	for(i=0; i<10; i++){
		printf("%d ", prueba[i]);
	}
	burbuja(prueba, 10);
	printf("\n\n");
	for(i=0; i<10; i++){
		printf("%d ", prueba[i]);
	}

