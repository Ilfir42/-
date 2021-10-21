#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#include<stdio.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int g, n, p, m;
	scanf("%d", &g);
	if (g > 1983)
		n = (g - 1983) % 60;
	else if (g <= 1983)
		n = 60 - ((1983 - g) % 60);
		p = n % 10;
		m = n % 12;
		switch (p)
		{
		case 7:
			if (m == 3 | m == 4 | m == 5)
				printf("Год белого ");
			else			
			printf("Год белой ");
			break;
		case 8:
			if (m == 3 | m == 4 | m == 5)
				printf("Год белого ");
			else
			printf("Год белой ");
			break;
		case 9:
			if (m == 3 | m == 4 | m == 5)
				printf("Год черного ");
			else
			printf("Год черной ");
			break;
		case 0:
			if (m == 3 | m == 4 | m == 5)
				printf("Год черного ");
			else
			printf("Год черной ");
			break;
		case 1:
			if (m == 3 | m == 4 | m == 5)
				printf("Год зеленого ");
			else
			printf("Год зеленой ");
			break;
		case 2:
			if (m == 3 | m == 4 | m == 5)
				printf("Год зеленого ");
			else
				printf("Год зеленой ");
			break;
		case 3:
			if (m == 3 | m == 4 | m == 5)
				printf("Год красного ");
			else
				printf("Год красной ");
			break;
		case 4:
			if (m == 3 | m == 4 | m == 5)
				printf("Год красного ");
			else
				printf("Год красной ");
			break;
		case 5:
			if (m == 3 | m == 4 | m == 5)
				printf("Год желтого ");
			else
				printf("Год желтой ");
			break;
		case 6:
			if (m == 3 | m == 4 | m == 5)
				printf("Год желтого ");
			else
				printf("Год желтой ");
			break;

		}
		switch (m)
		{
		case 1:
			printf("крысы ");
			break;
		case 2:
			printf("коровы");
			break;
		case 3:
			printf("тигра");
			break;
		case 4:
			printf("зайца");
			break;
		case 5:
			printf("дракона");
			break;
		case 6:
			printf("змеи");
			break;
		case 7:
			printf("ллошади");
			break;
		case 8:
			printf("овцы");
			break;
		case 9:
			printf("обезьяны");
			break;
		case 10:
			printf("курицы");
			break;
		case 11:
			printf("собаки");
			break;
		case 0:
			printf("свиньи");
			break;
		}
}