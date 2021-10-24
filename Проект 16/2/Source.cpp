#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, a, d, i, k[999];
	scanf("%d %d %d", &n, &a, &d);
	k[0] = 0;
	k[1] = a;
		printf("%d ", k[1]);
		for (i = 2; i < 999; i++)
		{
			k[i] = k[i - 1] * d;
			printf("%d ", k[i]);
			if (i == n)
				break;
		}
}