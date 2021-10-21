#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, n, m;
	scanf("%d", &b);
	scanf("%d", &a);
	n = b / 10;
	m = b % 10;
	if ((n == 2) & (b != 20))
		printf("Двадцать ");
	if ((n == 3) & (b != 30))
		printf("Тридцать ");
	switch (b)
	{
	case 10:
		printf("Десятое ");
		break;
	case 11:
		printf("Одиннадцатое ");
		break;
	case 12:
		printf("Двенадцатое ");
		break;
	case 13:
		printf("Тринадцатое ");
		break;
	case 14:
		printf("Четырнадцатое ");
		break;
	case 15:
		printf("Пятнадцатое ");
		break;
	case 16:
		printf("Шестнадцатое ");
		break;
	case 17:
		printf("Семнадцатое ");
		break;
	case 18:
		printf("Восемнадцатое ");
		break;
	case 19:
		printf("Девятнадцатое ");
		break;
	case 20:
		printf("Двадцатое ");
		break;
	case 30:
		printf("Тридцатое ");
		break;
	}
	if ((b < 10) | (b > 20))
	{
		switch (m)
		{
		case 1:
			printf("первое ");
			break;
		case 2:
			printf("второе ");
			break;
		case 3:
			printf("третье ");
			break;
		case 4:
			printf("четвертое ");
			break;
		case 5:
			printf("пятое ");
			break;
		case 6:
			printf("шестое ");
			break;
		case 7:
			printf("седьмое ");
			break;
		case 8:
			printf("восьмое ");
			break;
		case 9:
			printf("девятое ");
			break;
		}
	};
	switch (a)
	{
	case 1:
		printf("января");
		break;
	case 2:
		printf("февраля");
		break;
	case 3:
		printf("марта");
		break;
	case 4:
		printf("апреля");
		break;
	case 5:
		printf("мая");
		break;
	case 6:
		printf("июня");
		break;
	case 7:
		printf("июля");
		break;
	case 8:
		printf("августа");
		break;
	case 9:
		printf("сентября");
		break;
	case 10:
		printf("октяюря");
		break;
	case 11:
		printf("ноября");
		break;
	case 12:
		printf("декабря");
		break;
	}
}