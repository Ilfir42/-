#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[100];
	int i, n, k;
	a[0] = 0;
	a[1] = 0;
	a[2] = 1;
	scanf("%d", &n);
	for (i = 3; i < 100; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		if (n == a[i])
		{
			printf("%d ", i);
		}
	}
}