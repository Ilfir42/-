#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i;
	int a[9999];
	a[0] = 0;
	a[1] = 1;
	scanf("%d", &n);
	for (i = 2; i < 9999; i++)
	{
		a[i] = a[i - 1] + 2;
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
}