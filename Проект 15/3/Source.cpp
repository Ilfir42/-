#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float ringS(float r1, float r2);
int main()
{
	float a, b, s;
	int i;
	for (i = 1; i <= 3; i++)
	{
		scanf("%f %f", &a, &b);
		s = ringS(a, b);
		printf("%f\n", s);
	}
}
float ringS(float r1, float r2)
{
	float s;
	s = 3.14 * (r1 * r1 - r2 * r2);
	return(s);
}