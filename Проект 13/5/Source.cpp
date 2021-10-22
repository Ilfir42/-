#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int n, k;
	float a, b, v, m;
	scanf("%f %d", &a, &n);
	b = a; v = 0; m = 0;
	for (k = 0; k <= n; k += 1)
	{
		switch (k%2)
		{
		case 0:
			v = v + pow(b, k);
			break;
		case 1:
			m = m + pow(b, k);
			break;
		}
	}
	printf("%f\n", v - m);
}