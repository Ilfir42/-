#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
		b = a;
	else if (b > a)
		a = b;
	else
	{
		a = 0; b = 0;
	}
	printf("%d %d", a, b);
}