#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#include<stdio.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, s, d, e;
	scanf("%d", &a);
	s = a / 100;
	d = a % 100 / 10;
	e = a % 10;
	switch (s)
	{
	case 1:
		printf("Сто ");
		break;
	case 2:
		printf("Двести ");
		break;
	case 3:
		printf("Триста ");
		break;
	case 4:
		printf("Четыреста ");
		break;
	case 5:
		printf("Пятьсот ");
		break;
	case 6:
		printf("Шестьсот ");
		break;
	case 7:
		printf("Семьсот ");
		break;
	case 8:
		printf("Восемьсот ");
		break;
	case 9:
		printf("Девятьсот ");
		break;
	}
	
	switch (d)
	{
	case 1:
		switch (e)
		{
		case 0:
			printf("десять");
			break;
		case 1:
			printf("одиннадцать");
			break;
		case 2:
			printf("двенадцать");
			break;
		case 3:
			printf("тринадцать");
			break;
		case 4:
			printf("четырнадцать");
			break;
		case 5:
			printf("пятнадцать");
			break;
		case 6:
			printf("шестнадцать");
			break;
		case 7:
			printf("семнадцать");
			break;
		case 8:
			printf("восемнадцать");
			break;
		case 9:
			printf("девтнадцать");
			break;
		}
		break;
	case 2:
		printf("двадцать ");
		break;
	case 3:
		printf("тридцать ");
		break;
	case 4:
		printf("сорок ");
		break;
	case 5:
		printf("пятьдесят ");
		break;
	case 6:
		printf("шестьдесят ");
		break;
	case 7:
		printf("семьдесят ");
		break;
	case 8:
		printf("восемьдесят ");
		break;
	case 9:
		printf("девяноста ");
		break;
	}
	if (d != 1)
	{
		switch (e)
		{
		case 1:
			printf("один");
			break;
		case 2:
			printf("два");
			break;
		case 3:
			printf("три");
			break;
		case 4:
			printf("четыре");
			break;
		case 5:
			printf("пять");
			break;
		case 6:
			printf("шесть");
			break;
		case 7:
			printf("семь");
			break;
		case 8:
			printf("восемь");
			break;
		case 9:
			printf("девять");
			break;
		}
	}
}