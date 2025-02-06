#include <conio.h>
#include <stdio.h>
#include <iostream>
main()
{
    int op,cant,Num,sumN;char salir;
    do
    {
    	system("cls"); 
    	salir='j';
	   	printf("1. Suma de numeros negativos hasta N \n");
	   	printf("2. Suma de pares e impares desde N hasta N2 \n");
	   	printf("3. Salir \n");
		printf("Elija Opcion: "); 
		scanf("%i",&op);
	    while((op<=0)||(op>3))
		{
			printf("Elija Opcion: "); 
			scanf("%i",&op);
		}
	    if(op==1)
	    {
			do{
				system("cls");
				printf("1. Suma de numeros negativos hasta N \n\n");
				printf("Cuantos numeros evalua: "); 
				scanf("%i",&cant);
		       	while(cant<=0)
				{ 
					printf("Cuantos numeros evalua: "); 
					scanf("%i",&cant);
				}
		       	printf("Escriba los numeros\n"); 
				sumN=0;
		       	for(int cont=1;cont<=cant;cont++)
		        {
					scanf("%i",&Num);
		            if(Num<0)
		            {
						sumN=sumN+Num;
					}
		        } 
				printf("La suma de negativos fue de: %i \n\n",sumN);	
				printf("Hacer otra suma (s/n): ");
				scanf("	%s",&salir);
			}while((salir=='s')||(salir=='S'));
			
	    }
      	else
       	{
	        if(op==2)
	        {
	        	do{
	        		system("cls");
	        		printf("2. Suma de pares e impares desde N hasta N2 \n\n");
	        		int sum_imp,sum_p, num1, num2; 
					sum_imp = 0;
					sum_p = 0;
		            printf("Escriba el numero que empieza\n");
		            scanf("%i", &num1);
		            printf("Escriba el numero que termina\n");
		            scanf("%i", &num2);
		           	for(int cont=num1;cont<=num2;cont++)
		            { 
						if(cont%2==0)
		                {
							sum_p=sum_p+cont;
						}
		                else
		                {
							sum_imp=sum_imp+cont;
						}
		            }
		            printf("La suma de pares es: %i \n",sum_p);
		            printf("Y  la de impares es: %i \n",sum_imp);	
					printf("Hacer otra suma (s/n): ");
					scanf("	%s",&salir);
				}while((salir=='s')||(salir=='S'));
	
	        }
	        else
	        {}
       }
	   system("cls"); 
	   printf("Ejecuta de nuevo el programa(s/n):  ");
	   scanf("%s",&salir);
    }while((salir=='s')||(salir=='S'));
    getch();
}
