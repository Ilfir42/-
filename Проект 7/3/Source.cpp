#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float x, a, y;
	scanf("%f %f %f", &x, &a, &y);
	printf("1 kg=%f\ny kg=%f", a/x, a/x*y);
}