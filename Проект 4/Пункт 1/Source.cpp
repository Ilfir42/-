#define _CRT_SECURE_N0_WARNINGS
#include<stdio.h>
int main()
{
	float a, b, s, p;
	scanf_s("%f %f", &a, &b);
	s = a * b;
	p = 2 * (a + b);
	printf("%f %f", s, p);
	return 0;
}