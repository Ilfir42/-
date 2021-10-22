#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int n, k;
	float a, b;
	scanf("%f %d", &a, &n);
	b = a;
	for (k = 2; k <= n; k += 1)
	{
		a = a + pow(b, k);
		printf("%f\n", a + 1);
	}
}