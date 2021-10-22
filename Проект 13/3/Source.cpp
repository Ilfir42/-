#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, k, s;
	scanf("%d", &n);
	s = 0;
	for (k = 1; k <= n; k += 1)
	{
		s = s + 2 * k - 1;
		printf("%d ", s);
	}
}