#include <iostream>
#include <stdio.h>
#include <conio.h>

main(){
	int numero;
	int suma_positiva;
	int suma_negativa;
	int cantidad_numeros;
	char opcion = 's';
	int i = 0;
	
	do{
		printf("Cuantos numeros va a evaluar?: ");
		scanf("%i", &cantidad_numeros);
		
		while(cantidad_numeros>i)
		{
			printf("Ingrese los numeros: ");
			scanf("%i", &numero);
			
			while(numero==0){
				printf("Ingrese los numeros: ");
				scanf("%i", &numero);
			}
			
			if(numero>0){
				suma_positiva = suma_positiva + numero;
			}else{
				suma_negativa = suma_negativa + numero;
			}
			
			i++;
		}
		
		printf("La suma de los positivos es: " + suma_positiva);
		printf("La suma de los negativos es: " + suma_negativa);	
		                         		
		printf("Desea evaluar otra cantidad?(s/n): ");
		scanf("%s", &opcion);
	}while(opcion=='s' || opcion=='S');
	
	
	
}
