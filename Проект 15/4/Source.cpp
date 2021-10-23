#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int quarter(float x, float y);
int main()
{
	float x, y;
	int c, i;
	for (i = 1; i <= 3; i++)
	{
		scanf("%f %f", &x, &y);
		c = quarter(x, y);
		printf("%d\n", c);
	}
}
int quarter(float x, float y)
{
	int c;
	if (x > 0 & y > 0)
		c = 1;
	else if (x < 0 & y > 0)
		c = 2;
	else if (x < 0 & y < 0)
		c = 3;
	else if (x > 0 & y < 0)
		c = 4;
	return(c);
}