#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a1, b1, c1, a2, b2, c2, x, y;
	scanf("%f %f %f", &a1, &b1, &c1);
	scanf("%f %f %f", &a2, &b2, &c2);

	if (a1 == 0 & b1 == 0)
	{
		if (c1 != 0)
			printf("Error");
		if (c1 == 0)
			printf("Infinity");
	}

	else if (a2 == 0 & b2 == 0)
	{
		if (c2 != 0)
			printf("Error");
		if (c2 == 0)
			printf("Infinity");
	}

	else if (a1 == 0)
	{
		y = c1 / b1;
		x = (c2 - b2 * y) / a2;
		printf("x=%f, y=%f", x, y);
	}

	else if (a2 == 0)
	{
		y = c2 / b2;
		x = (c1 - b1 * y) / a1;
		printf("x=%f, y=%f", x, y);
	}

	else if (b1 == 0)
	{
		x = c1 / a1;
		y = (c2 - a2 * x) / b2;
		printf("x=%f, y=%f", x, y);
	}

	else if (b2 == 0)
	{
		x = c2 / a2;
		y = (c1 - a1 * x) / b1;
		printf("x=%f, y=%f", x, y);
	}

	else
	{
		y = (c2 - c1 * a2 / a1) / (b2 - b1 * a2 / a1);
		x = (c1 - b1 * y) / a1;
		printf("x=%f, y=%f", x, y);
	}
}