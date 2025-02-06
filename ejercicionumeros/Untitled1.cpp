#include "conio.h"
#include "stdio.h"
#include "iostream"
#include "conio2.h"

int op,cant,Num,sumN,sumP;
char salir='j';

void sumaNegativosPositivos()
{
	do
	{
		textcolor(2);
		gotoxy(11,13); 
		cprintf("Cuantos numeros evalua: "); 
		cscanf("%i",&cant);
	    while(cant<=0)
			{
				gotoxy(11,13); 
				printf("Cuantos numeros evalua: "); 
				cscanf("%i",&cant);
			}
		gotoxy(12,15); 
		cprintf("Escriba los numeros: "); 
	    int z=33; 
		sumP=sumN=0;
        for(int cont=1;cont<=cant;cont++)
        {
			gotoxy(z,15);
			cscanf("%i",&Num);
         	if(Num<0)
           	{
				sumN+=Num;
			}
           	else
         	{
				sumP+=Num;
			}				
         	Num++;
			z+=4;
     	}
		gotoxy(12,17); 
		cprintf("La suma de negativos fue de: %i",sumN);
        gotoxy(12,19); 
		cprintf("La suma de Positivos fue de: %i",sumP);
		gotoxy(12,21); 
		cprintf("Ejecuta de nuevo la opcion(s/n): ");
		cscanf("%s",&salir);
        clrscr();
	}while((salir=='s')||(salir=='S'));
}

void sumaParesImpares(){
	do
	{
		int sum_imp,Ni,Nf,sum_p; 
		do
		{    		
			Ni=Nf=sum_imp=sum_p=0;
	        textcolor(2);
			gotoxy(12,13);
			cprintf("Desde # hasta # ");
			gotoxy(12,15);
			cprintf("Numero Inicial: ");
			cscanf("%i",&Ni);
			gotoxy(12,17);
			cprintf("Numero Final: ");
			cscanf("%i",&Nf);
		}while(Nf<Ni);
		for(Ni;Ni<=Nf;Ni++)
		{
			if(Ni%2==0)
			{
				sum_p += Ni; 	
			}else{
				sum_imp += Ni;
			}	
		}
		
		gotoxy(12,19); 
		cprintf("La suma de los pares fue de: %i",sum_p);
        gotoxy(12,21); 
		cprintf("La suma de los impares fue de: %i",sum_imp);
		gotoxy(12,23); 
		cprintf("Ejecuta de nuevo la opcion(s/n): ");
		cscanf("%s",&salir);
        clrscr();
			
	}while((salir=='s')||(salir=='S'));
	
}


main()
{
	do
	{
		clrscr();
		gotoxy(15,2); 
		cprintf("M E N U   P R I N C I P A L");
	    textcolor(2);
		gotoxy(9,5);
	    cprintf("1. Suma de numeros negativos hasta N");
	    gotoxy(9,7);
	    cprintf("2. Suma de pares e impares desde N hasta N");
	    gotoxy(9,9);
	    cprintf("3. Salir");
	    gotoxy(9,11);
		cscanf("%i",&op);
		switch (op)
		{
			case 1:
				sumaNegativosPositivos();
			break;
			case 2:
				sumaParesImpares();
			case 3:
				
			break;
			default:
				cprintf("Digito un numero incorrecto intente de nuevo");	
			break;	
		}
		cprintf("Ejecutar el programa de nuevo (s/n): ");
		cscanf("%s", &salir);
	}while((salir=='s')||(salir=='S'));
	
		
	
 /*   textbackground(7);
	clrscr();
    do
    {
		clrscr();
		textcolor(12);
	    gotoxy(15,2); 
		cprintf("M E N U   P R I N C I P A L");
	    textcolor(13);
		gotoxy(9,5);
	    cprintf("1. Suma de numeros negativos y positivos hasta N");
	    gotoxy(9,7);
	    cprintf("2. Suma de pares e impares desde N hasta N");
	    gotoxy(9,9);
	    cprintf("3. Salir");


	    textcolor(12);
	    gotoxy(15,11);
	    cprintf("Elija Opcion: ");
		textcolor(0); 
		cscanf("%i",&op);
	    while((op<=0)||(op>3)){gotoxy(15,11);
		cprintf("Elija Opcion: "); 
		cscanf("%i",&op);}
	
	
	
	  


    while((salir=='s')||(salir=='S'));

      }

      else
       {
       if(op==2)
       {
       {
          textcolor(12);gotoxy(11,13); cprintf("Desde %i hasta %i" ,Ni,Nf);
          for(int cont=Ni;cont<=Nf;cont++)
                 { if(cont%2==0)
                  {sum_p=sum_p+Ni;}
                  else
                  {sum_imp=sum_imp+Ni;}
                   Ni++;
              } }
                textcolor(2);gotoxy(11,15); cprintf("La suma de pares es: %i",sum_p);
              gotoxy(11,17); cprintf("Y  la de impares es: %i",sum_imp);
              textcolor(12);gotoxy(12,19); cprintf("Ejecuta de nuevo la opcion(s/n): ");cscanf("%s",&salir);
              clrscr(); textcolor(12);
              gotoxy(15,2); cprintf("M E N U   P R I N C I P A L");
              textcolor(13);gotoxy(9,5);
              cprintf("1. Suma de numeros negativos hasta N");
              gotoxy(9,7);
              cprintf("2. Suma de pares e impares desde N hasta N");
              gotoxy(9,9);
              cprintf("3. Salir");
          }

       while((salir=='s')||(salir=='S'));

       }
          else
          {  }
        }
       textcolor(12);gotoxy(12,19); cprintf("Ejecuta de nuevo el programa(s/n): ");cscanf("%s",&salir);
       }
       while((salir=='s')||(salir=='S'));
      gotoxy(15,22); cprintf("...Gracias y hasta pronto...");
       gotoxy(22,26); cprintf("Enter...");
       getch(); getch();*/
       
}

