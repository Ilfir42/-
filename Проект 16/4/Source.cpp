#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, k, i, a[1000];
	scanf("%d\n", &n);
	k = n % 2;
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("%d ", a[1]);
	printf("%d ", a[n]);
	for (i = 2; i <= n / 2; i++)
	{
		printf("%d ", a[i]);
		printf("%d ", a[n - i + 1]);
	}
	if (k == 1)
		printf("%d ", a[n / 2 + 1]);
}