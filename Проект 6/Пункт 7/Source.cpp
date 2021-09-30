#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	scanf("%f", &a);
	b = a * a;
	c = pow(a, 5);
	a = b * b * b * b * b * c;
	printf("a^15=%f", a);
}