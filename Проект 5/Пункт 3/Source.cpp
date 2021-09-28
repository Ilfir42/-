#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &c, &b);
	printf("%f", (c - a) * (b - c));
}