#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a, b, c, d;
	scanf("%f %f %f", &a, &b, &c);
	d = b; b = c; c = a; a = d;
	printf("a=%f b=%f c=%f", a, b, c);
}