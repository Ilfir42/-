#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#include<stdio.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, n, m;
	scanf("%d", a);
		n = a / 10;
		m = a % 10;
		if (n == 2)
			printf("Двадцать ");
		if (n == 3)
			printf("Тридцать ");
		switch (a)
		{
		case 10:
			printf("Десять ");
			break;
		case 11:
			printf("Одиннадцать ");
			break;
		case 12:
			printf("Двенадцать ");
			break;
		case 13:
			printf("Тринадцать ");
			break;
		case 14:
			printf("Четырнадцать ");
			break;
		case 15:
			printf("Пятнадцать ");
			break;
		case 16:
			printf("Шестнадцать ");
			break;
		case 17:
			printf("Семнадцать ");
			break;
		case 18:
			printf("Восемнадцать ");
			break;
		case 19:
			printf("Девятнадцать ");
			break;
		case 40:
			printf("Сорок ");
			break;
		}
		if ((a < 10) | (a > 20))
		{
			switch (m)
			{
			case 1:
				printf("одно ");
				break;
			case 2:
				printf("два ");
				break;
			case 3:
				printf("три ");
				break;
			case 4:
				printf("четыре ");
				break;
			case 5:
				printf("пять ");
				break;
			case 6:
				printf("шесть ");
				break;
			case 7:
				printf("семь ");
				break;
			case 8:
				printf("восемь ");
				break;
			case 9:
				printf("девять ");
				break;
			}
		}
		if (((a < 10) | (a > 20)) & ((m == 2) | (m == 3) | (m == 4)))
			printf("учебных задания\n");
		else if (((a < 10) | (a > 20)) & (m == 1))
			printf("учебное задание\n");
		else
			printf("учебных заданий\n");
}