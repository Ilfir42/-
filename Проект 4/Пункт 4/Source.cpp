#define _CRT_SECURE_N0_WARNINGS
#include<stdio.h>
int main()
{
	float a, b, s;
	scanf_s("%f %f", &a, &b);
	s = (a + b) / 2;
	printf("%f", s);
	return 0;
}