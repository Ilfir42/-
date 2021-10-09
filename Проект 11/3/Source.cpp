#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int x1, x2, x3, y1, y2, y3;
	float r1, r2;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);
	r1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	r2 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	if (r1 < r2)
		printf("%f", r1);
	else
		printf("%f", r2);
}