#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, min;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b & a < c)
		min = a;
	else if (b < a & b < c)
		min = b;
	else if (c < a & c < b)
		min = c;
	printf("%d", a + b + c - min);
}