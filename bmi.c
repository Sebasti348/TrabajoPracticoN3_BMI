#include <stdio.h>
#include <math.h>

int main() {
	
	float peso, altura, bmi;
	int c; // Variable utilizada para limpiar el buffer de entrada
	
	// Bucle de validación para el peso
	printf("Ingrese el peso en kg: \n");
	while (scanf("%f", &peso) != 1 || peso <= 0) {
		printf("Error: Ingrese un peso valido (mayor a 0).\n");
		// Limpiamos el buffer para evitar un bucle infinito si el usuario ingresa una letra
		while ((c = getchar()) != '\n' && c != EOF);
		printf("Ingrese el peso en kg: \n");
	}
	
	// Bucle de validación para la altura
	printf("Ingrese la altura en metros: \n");
	while (scanf("%f", &altura) != 1 || altura <= 0) {
		printf("Error: Ingrese una altura valida (mayor a 0).\n");
		// Limpiamos el buffer
		while ((c = getchar()) != '\n' && c != EOF);
		printf("Ingrese la altura en metros: \n");
	}
	
	bmi = peso / (pow(altura, 2));
	
	printf("\nSu indice de masa corporal es: %.2f\n\n", bmi);
	
	// Estructura if-else simplificada
	if (bmi >= 30) {
		printf("Se encuentra en condicion de Obesidad\n");
	} else if (bmi >= 25) {
		printf("Se encuentra en condicion de Sobrepeso\n");
	} else if (bmi >= 18.5) {
		printf("Se encuentra en condicion Normal\n");
	} else {
		printf("Se encuentra en condicion de Bajo peso\n");
	}
	
	printf("\n    Indice     |  Condicion\n");
	printf("-----------------------------\n");
	printf("    <18.5      |  Bajo peso\n");
	printf(" 18.5 a 24.9   |  Normal\n");
	printf(" 25.0 a 29.9   |  Sobrepeso\n");
	printf("     >=30      |  Obesidad\n");
	
	return 0;
}
