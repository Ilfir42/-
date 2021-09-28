#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("%f %f %f", c - a, c - b, c - a + c - b);
}