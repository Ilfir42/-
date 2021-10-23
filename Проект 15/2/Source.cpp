#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sign(int x)
{
	int n;
	if (x > 0)
		n = 1;
	else if (x == 0)
		n = 0;
	else if (x < 0)
		n = -1;
	return(n);
}
int main()
{
	float a, b;
	int x, y;
	scanf("%f %f", &a, &b);
	x = sign(a);
	y = sign(b);
	printf("%d", x+y);
}