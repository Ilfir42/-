#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, n, m;
	scanf("%d %d", &a, &b);
	for (n = a; n <= b; n += 1)
	{
		for (m = 1; m <= n; m += 1)
		{
			printf("%d ", n);
		}
	}
}