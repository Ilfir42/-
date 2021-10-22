#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int k;
	float p, r, n;
	scanf("%f", &p);
	n = 1000; k = 0;
	r = 1 + p / 100;
	while (n < 1100)
	{
		n = n * r;
		k += 1;
	}
	printf("%d ", k);
	printf("%.3f", n);
}