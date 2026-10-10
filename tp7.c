#include <stdio.h>

/*1. Escribir un programa en lenguaje C que permita a un almacén gestionar una lista de precios y su código de barra. El programa debe utilizar un arreglo para almacenar los códigos de barra, otro para el precio y debe ofrecer las siguientes funcionalidades:

a) Al inicio, el programa debe solicitar al usuario ingresar una cantidad fija de códigos de barra con su precio, y agregarlo a la lista de productos. Esta cantidad fija será una constante simbólica llamada TAM definida al inicio del código.

b) Los precios de los productos pueden tener decimales y pero no pueden ser negativos.

c) Los códigos de barra deben ser enteros positivos mayores que 0 de hasta 9 cifras.

d) Al finalizar la carga de los productos, se debe mostrar en pantalla la lista completa de productos almacenados y sus precios.

e) Se debe imprimir en pantalla el mayor precio en la lista e imprimir su código de barra.

f) Se debe imprimir en pantalla el menor precio en la lista e imprimir su código de barra.
*/
#define TAM 5

float mayorPrecio(float *vec1);
float menorPrecio(float *vec1);
int main(int argc, char *argv[]) {
	int codigo[TAM]={0};
	float precio[TAM]={0};
	int flag=1;
	float *pprecio=precio;

		
	printf("Ingrese 5 productos, se solicitará el código y precio: \n");
	for(int i=0; i<TAM; i++){
		do{
			printf("Ingrese el código de barras (1-999999999): \n");
			scanf("%d",&codigo[i]);
			if(codigo[i]<=0 || codigo[i]>999999999){
				printf("Error. El código de barras debe estar entre 1 y 999999999");
				flag=0;
			}
			else{
				flag=1;
			}
		} while(flag==0);
		flag=1;
		do{
			printf("Ingrese el precio: \n");
			scanf("%f",&precio[i]);
			if(precio[i]<=0 ){
				printf("Error. El precio debe ser mayor a 0\n");
				flag=0;
			}
			else{
				flag=1;
			}
		} while(flag==0);
	}
	
	printf("\nCódigo\tPrecio\n");
	
	for(int i = 0; i < TAM; i++) {
		
		printf("%6d \t %.2f\n", codigo[i],precio[i]);
	}
	
	printf("Mayor Precio: %f\n",mayorPrecio(pprecio));
	printf("Menor Precio: %f",menorPrecio(pprecio));
	return 0;
}
float mayorPrecio(float *vec1){
	float mayor=*(vec1);
	for(int i=0; i<TAM;i++){
		if(*(vec1+i)>mayor)
			mayor=*(vec1+i);
	}
	return mayor;
}


float menorPrecio(float *vec1){
float menor=*(vec1);
	for(int i=0; i<TAM;i++){
		if(*(vec1+i)<menor)
			menor=*(vec1+i);
		}
	return menor;
}
