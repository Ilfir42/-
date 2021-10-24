#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, k, i, a[1000];
	scanf("%d\n", &n);
	k = n % 2;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i < n; i+=2)
	{
		printf("%d ", a[i]);
	}
	if (k == 0)
	{
		for (i = n - 2; i >= 0; i -= 2)
		{
			printf("%d ", a[i]);
		}
	}
	else if (k == 1)
	{
		for (i = n - 1; i >= 0; i -= 2)
		{
			printf("%d ", a[i]);
		}
	}
}