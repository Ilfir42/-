#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a, b;
	scanf("%f", &a);
	b = a * a;
	b = b * b * b * b;
	printf("a^8=%f", b);
}