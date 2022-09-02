#include<stdio.h>
#include<math.h>

float res_ecuacion(float a,float b, float c){
	
	float ecuacion;
	
	ecuacion = b * b - (4 * a * c);
	
	return ecuacion;
	
	
}
int main(){
	
	float aa, bb, cc, funcion;
	printf("Ingrese el valor de a:");
	scanf("%f",&aa);
	printf("Ingrese el valor de b:");
	scanf("%f",&bb);
	printf("Ingrese el valor de c:");
	scanf("%f",&cc);
	
	funcion = res_ecuacion(aa, bb, cc);
	
	if(funcion == 0){
		printf("La solucion de la ecuacion es:%.2f\n", - bb /(2*aa));
		
	}else if(funcion > 0){
		printf("La solucion de la ecuacion es:\n");
		printf("Solucion 1:%.2f\n", (- bb + sqrt(funcion)) / (2 * aa));
		printf("Solucion 2:%.2f\n", (- bb - sqrt(funcion)) / (2 * aa));
		
	}else{
		printf("La solucion de la ecuacion es:\n");
		printf("Solucion 1:%.2f+ %.2f i\n", - bb / (2 * aa), (sqrt(-funcion)) / (2 * aa));
		printf("Solucion 2:%.2f- %.2f i\n", - bb / (2 * aa), (sqrt(-funcion)) / (2 * aa));
	}
	return 0;
}


