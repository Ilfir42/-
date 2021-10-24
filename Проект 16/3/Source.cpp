#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, s, i, a, b, k[1000];
	scanf("%d %d %d", &n, &a, &b);
	k[0] = a; k[1] = b; k[2] = a + b;
	printf("%d %d %d ", a, b, a + b);
	for (i = 3; i < n; i++)
	{
		k[i] = k[i - 1] * 2;
		printf("%d ", k[i]);
	}
}