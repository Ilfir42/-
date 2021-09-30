#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a, b, c;
	scanf("%f %f", &a, &b);
	c = a; a = b; b = c;
	printf("a=%f b=%f", a, b);
}