#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float fact2(int n);
int main()
{
	float c;
	int n;
	scanf("%d", &n);
	c = fact2(n);
	printf("%f", c);
}
float fact2(int n)
{
	float c;
	int k, i;
	c = 1;
	k = n % 2;
	if (k == 0)
	{
		for (i = 2; i <= n; i += 2)
			c = c * i;
	}
	else if (k == 1)
	{
		for (i = 1; i <= n; i += 2)
			c = c * i;
	}
	return(c);
}
