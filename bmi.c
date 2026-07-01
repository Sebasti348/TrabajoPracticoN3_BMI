#include <stdio.h>
#include<math.h>

int main(){
	
	float peso, altura, bmi;
	
	printf("Ingrese el peso en kg: \n");
	if(scanf("%f",&peso)!=1 || peso<=0){
		printf("Error: Ingrese un peso valido.\n");
		return 1;
	}
	printf("Ingrese el altura en metos: \n");
	if(scanf("%f",&altura)!=1 || altura<=0){
		printf("Error: Ingrese un peso valido.\n");
		return 1;
	}
	
	bmi = peso/(pow(altura,2));
	
	printf("\nSu indice de masa corporal es: %.2f\n\n", bmi);
	if(bmi>=30){
		printf("Se encuentra en condicion de Obesidad\n");
	}
	else{
		if(bmi<30 && bmi>=25){
			printf("Se encuentra en condicion de Sobrepeso\n");
		}
		else{
			if(bmi<25 && bmi>=18.5){
				printf("Se encuentra en condicion Normal\n");
			}
			else{
				printf("Se encuentra en condicion de Bajo peso\n");
			}
		}
	}
	
	printf("    Indice     |  Condicion\n");
	printf("-----------------------------\n");
	printf("    <18.5      |  Bajo peso\n");
	printf(" 18.5 a 24.9   |  Normal\n");
	printf(" 25.0 a 29.9   |  Sobrepeso\n");
	printf("     >=30      |  Obesidad\n");
	

	
	
	return 0;
}

