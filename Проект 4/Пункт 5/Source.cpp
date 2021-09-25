#define _CRT_SECURE_N0_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, s, r, p, d;
	scanf_s("%f %f", &a, &b);
	s = fabsf(a) + fabsf(b);
	r = fabsf(a) - fabsf(b);
	p = fabsf(a) * fabsf(b);
	d = fabsf(a) / fabsf(b);
	printf("%f %f %f %f", s, r, p, d);
	return 0;
}