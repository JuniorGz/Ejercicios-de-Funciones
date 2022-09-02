#include<stdio.h>
#include<string.h>

int main(){
	
	char cadena1[20], cadena2[20], final[50];
	
	printf("Ingrese palabra para la primera cadena: ");
	scanf("%s", cadena1);
	
	printf("Ingrese palabra para la segunda cadena: ");
	scanf("%s", cadena2);
	
	strcat(final, cadena1 );

	strcat(final, cadena2);
	
	printf("La cadena concatenada es: %s\n",final);
	strrev(final);
	
	printf("La cadena resultante es: %s",final);
	return 0;
}
