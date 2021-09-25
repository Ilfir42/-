#define _CRT_SECURE_N0_WARNINGS
#include<stdio.h>
int main()
{
	float a, b, s, r, p, d;
	scanf_s("%f %f", &a, &b);
	s = a * a + b * b;
	r = a * a - b * b;
	p = a * a * b * b;
	d = a * a / (b * b);
	printf("%f %f %f %f", s, r, p, d);
	return 0;
}