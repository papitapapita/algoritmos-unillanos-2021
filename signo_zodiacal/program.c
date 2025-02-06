#include <stdio.h>
#include <conio2.h>
#include <locale.h>
#include <time.h>
#include <string.h>


int main()
{
	setlocale(LC_ALL,"");
	//c_year = Current Year
	//c_month = Current Month 
	//c_day = Current day
	
	time_t t = time(NULL);
  	struct tm tm = *localtime(&t);
  	
	int month, day, year, c_year = tm.tm_year + 1900, c_month = tm.tm_mon + 1, c_day = tm.tm_mday;
	
	gotoxy(15,3);
	gotoxy(3, 5);
	printf("Ingresa tu año: ");
	scanf("%d", &year);
	gotoxy(3, 7);
	printf("Ingresa tu mes: ");
	scanf("%d", &month);
	gotoxy(3, 9);
	printf("Ingresa tu día: ");
	scanf("%d", &day);
	
	gotoxy(3, 11);
	if( (month == 1 && day >= 20) || (month == 2 && day <= 18) )
	{
		printf("Eres Acuario");
	}
	else if( (month == 2 && day >= 19) || (month == 3 && day <= 20))
	{
		printf("Eres Piscis ");
	}
	else if( (month == 3 && day >= 21) || (month == 4 && day <= 19))
	{
		printf("Eres Aries");
	}
	else if( (month == 4 && day >= 20) || (month == 5 && day <= 20))
	{
		printf("Eres Tauro");
	}
	else if( (month == 5 && day >= 21) || (month == 6 && day <= 20))
	{
		printf("Eres Géminis");
	}
	else if( (month == 6 && day >= 21) || (month == 7 && day <= 22))
	{
		printf("Eres Cáncer");
	}
	else if( (month == 7 && day >= 23) || (month == 8 && day <= 22))
	{
		printf("Eres Leo");
	}
	else if( (month == 8 && day >= 23) || (month == 9 && day <= 22))
	{
		printf("Eres Virgo");
	}
	else if( (month == 9 && day >= 23) || (month == 10 && day <= 22))
	{
		printf("Eres Libra");
	}
	else if( (month == 10 && day >= 23) || (month == 11 && day <= 21))
	{
		printf("Eres Escorpio");
	}
	else if( (month == 11 && day >= 22) || (month == 12 && day <= 21))
	{
		printf("Eres Sagitario");
	}
	else if( (month == 12 && day >= 22) || (month == 1 && day <= 19))
	{
		printf("Eres Capricornio");
	}
	
	year = c_year - year;
	
	if( (c_month < month) || (c_month == month && c_day < day) )
	{
		year -= 1;
	}
	
	gotoxy(3, 13);
	printf("Tu edad es: %d", year);

}
