#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, k, s;
	scanf("%d", &n);
	s = 0; k = 1;
	while (s < n)
	{
		s = s + k;
		k = k + 1;
	}
	printf("%d ", s);
	printf("%d", k-1);
}