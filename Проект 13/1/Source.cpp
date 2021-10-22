#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float n, x;
	scanf("%f", &n);
	for (x = 0.1; x < 1.1; x += 0.1)
	{
		printf("%.2f\n", x * n);
	}
}