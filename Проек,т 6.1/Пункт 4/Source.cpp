#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float x, r;
	scanf("%f", &x);
	r = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("%f", r);
}