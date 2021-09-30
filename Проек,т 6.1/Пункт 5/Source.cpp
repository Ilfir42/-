#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float x, r;
	scanf("%f", &x);
	r = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
	printf("%f", r);
}