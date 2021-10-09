#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	scanf("%d", &a);
	if (a < 10 & a % 2 == 0)
		printf("Однозначное четное");
	else if (a < 10 & a % 2 == 1)
		printf("Однозначное нечетное");
	else if (a > 9 & a < 100 & a % 2 == 0)
		printf("Двузначное четное");
	else if (a > 9 & a < 100 & a % 2 == 1)
		printf("Двузначное нечетное");
	else if (a > 99 & a % 2 == 0)
		printf("Трехзначное четное");
	else if (a > 99 & a % 2 == 1)
		printf("Трехзначное нечетное");
}