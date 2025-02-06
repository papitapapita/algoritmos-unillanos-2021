#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>

main(){
	int n1;
	char opcion = 's';
	
	do{
   	clrscr();
      gotoxy(7,8);
		printf("Escriba un numero positivo: ");
		scanf("%i", &n1);

		while(n1<=0){
			clrscr();
         gotoxy(7,8);
			printf("Escriba un numero positivo: ");
			scanf("%i", &n1);
		}

    	if(n1%2==0){
      	gotoxy(7,11);
			printf("el numero es par");

      }
		else{
      	gotoxy(7,11);
      	printf("el numero es impar");
      }

		getch();
      gotoxy(7,13);
		printf("Escriba s si quiere procesar otro numero: ");
		scanf("%s", &opcion);
	}while(opcion == 's' || opcion == 'S');
	printf("Hola Mundo");
}
