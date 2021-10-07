#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float v1, v2, s, t;
	scanf("%f %f %f %f", &v1, &v2, &s, &t);
	printf("%f", (v1+v2)*t+s);
}