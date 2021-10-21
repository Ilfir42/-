#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#include<stdio.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char c;
	int n;
	scanf("%c", &c);
	scanf("%d", &n);
	if (n == 0)
		printf("%c", c);
	if ((c == 'ñ') & (n == 1))
		printf("ç");
	if ((c == 'ñ') & (n == -1))
		printf("â");
	if ((c == 'ç') & (n == 1))
		printf("þ");
	if ((c == 'ç') & (n == -1))
		printf("ñ");
	if ((c == 'þ') & (n == 1))
		printf("â");
	if ((c == 'þ') & (n == -1))
		printf("ç");
	if ((c == 'â') & (n == 1))
		printf("ñ");
	if ((c == 'â') & (n == -1))
		printf("þ");
}