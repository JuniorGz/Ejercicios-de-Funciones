#include<stdio.h>

float promedio(int valores[], int cantidad){
	
	int i;
	float suma = 0.0;
	
	for(i = 0;i < cantidad;i++)
	
	suma += valores[i];
	
	return suma / (float) cantidad;
	
}

int main(){
	
	int notas[50], n, i;
	char nombre[20], opcion[3];
	
	
		printf("Ingrese la cantidad de numeros:");
		scanf("%d",&n);
		
		for(i = 0;i < n;i++){
			printf("Ingrese el numero %d:",i + 1);
			scanf("%d",&notas[i]);
		}
		
		printf("El promedio es %.lf\n",promedio(notas,n));
		
		
	
	return 0;
}
