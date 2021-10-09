#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	scanf("%d", &a);
	if (a > 0 & a % 2 == 0)
		printf("Положительное четное");
	else if (a > 0 & a % 2 == 1)
		printf("Положительное нечетное");
	else if (a < 0 & a % 2 == 0)
		printf("Отрицательное четное");
	else if (a < 0 & a % 2 == -1)
		printf("Отрицательное нечетное");
	else if (a == 0)
		printf("Нулевое");
}