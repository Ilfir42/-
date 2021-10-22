#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, n;
	scanf("%d %d", &a, &b);
	while (a > b)
	{
		a = a - b;
	}
	printf("%d", a);
}