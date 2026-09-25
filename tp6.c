#include <stdio.h>
#include <math.h>

//GitHub
//https://github.com/Sebasti348/TrabajoPracticoN3_BMI/blob/main/tp3.c

float calcularAreaRectangulo(float alto, float ancho);
float calcularPerimetroRectangulo(float alto, float ancho);
float calcularAreaCirculo( float radio );
float calcularPerimetroCirculo (float radio);
void imprimirResultados(float area, float perimetro);

int main(int argc, char *argv[]) {

	int cont=0,opc;
	float h,b,r,a,p;

		printf("Ingrese la figura que desea calcular: \n");
		do{
			printf("1-Rectangulo \n");
			printf("2-Circulo \n");
			scanf("%d",&opc);
			if(opc==1 || opc == 2){
				if(opc==1){
					printf("Opcion Rectangulo Seleccionada \n");
					cont=1;
				}
				if(opc==2){
					printf("Opcion Circulo Seleccionada \n");
					cont=1;
				}
			}
			else
				printf("ERRROR, Reingrese datos: \n");
		} while(cont==0);
		cont=0;
		if(opc==1){
			do{
				printf("Ingrese Valores Positivos: \n");
				printf("Altura: \n");
				scanf("%f",&h);
				printf("Base: \n");
				scanf("%f",&b);
				if(h<=0 && b<=0){
					printf("Error. Ingrese correctamente los valores \n");
				}
				else
				   cont=1;
			} while(cont == 0);
			
			a = calcularAreaRectangulo(h,b);
			p = calcularPerimetroRectangulo(h,b);
			
			imprimirResultados(a,p);
			
		}
		if(opc==2){
			do{
				printf("Ingrese Valores Positivos: \n");
				printf("Radio: \n");
				scanf("%f",&r);
				if(h<=0 && b<=0){
					printf("Error. Ingrese correctamente los valores \n");
				}
				else
				   cont=1;
			} while(cont == 0);
			a = calcularAreaCirculo(r);
			p = calcularPerimetroCirculo(r);
			
			imprimirResultados(a,p);
		}
	return 0;
}

float calcularAreaRectangulo(float alto, float ancho){
	return ancho*alto;
}
	
float calcularPerimetroRectangulo(float alto, float ancho){
	return 2*(alto+ancho);
	}


float calcularAreaCirculo(float radio ){
	return 3.14* pow(radio,2);
}

float calcularPerimetroCirculo (float radio){
	return 2*3.14*radio;
}
	
void imprimirResultados(float area, float perimetro){
	printf("Perimetro Calculado: %.2f \n",area);
	printf("Area Calculada: %.2f \n", perimetro);
}
