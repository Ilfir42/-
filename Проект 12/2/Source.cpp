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
	if ((c == '�') & (n == 1))
		printf("�");
	if ((c == '�') & (n == -1))
		printf("�");
	if ((c == '�') & (n == 1))
		printf("�");
	if ((c == '�') & (n == -1))
		printf("�");
	if ((c == '�') & (n == 1))
		printf("�");
	if ((c == '�') & (n == -1))
		printf("�");
	if ((c == '�') & (n == 1))
		printf("�");
	if ((c == '�') & (n == -1))
		printf("�");
}