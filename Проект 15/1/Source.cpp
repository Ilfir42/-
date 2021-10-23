#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void PowerA3(float a, float b)
{
	float n;
	n = pow(a, b);
	printf("%f\n", n);
}
int main()
{
	float a, b;
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%f", &a);
		PowerA3(a, 3);
	}
}