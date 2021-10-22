#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, x;
	float a, s;
	scanf("%d", &n);
	s = 1.1;
	a = 1;
	for (x = 1; x <= n; x += 1)
	{
		a *= s;
		printf("%f\n", a);
		s += 0.1;
	}
}