#include <iostream>
#include <stdio.h>
#include <conio.h>

main(){
	int num;
	int sum_pos;
	int sum_neg;
	int cant;
	char opcion = 's';
	int i;
	
	
	do{
		sum_pos=0;
		sum_neg=0;
		i=0;
		system("CLS");
		printf("Programa que suma negativos y positivos\n\n");
		printf("Cuantos numeros va a evaluar?: ");
		scanf("%i", &cant);
		printf("Ingrese los numeros: \n");
		while(cant>i)
		{
			
			scanf("%i", &num);
			
			while(num==0){
				printf("Ingrese los numeros: ");
				scanf("%i", &num);
			}
			
			if(num>0){
				sum_pos += num;
			}else{
				sum_neg += num;
			}
			
			i++;
		}
		
		printf("La suma de los positivos es: %i\n", sum_pos);
		getch();
		printf("La suma de los negativos es: %i\n", sum_neg);	
		getch();		                         		
		printf("Desea evaluar otra cantidad?(s/n): \n");
		scanf("%s", &opcion);
	}while(opcion=='s' || opcion=='S');
	
	
	
}
