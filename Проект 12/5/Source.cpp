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
				printf("��� ������ ");
			else			
			printf("��� ����� ");
			break;
		case 8:
			if (m == 3 | m == 4 | m == 5)
				printf("��� ������ ");
			else
			printf("��� ����� ");
			break;
		case 9:
			if (m == 3 | m == 4 | m == 5)
				printf("��� ������� ");
			else
			printf("��� ������ ");
			break;
		case 0:
			if (m == 3 | m == 4 | m == 5)
				printf("��� ������� ");
			else
			printf("��� ������ ");
			break;
		case 1:
			if (m == 3 | m == 4 | m == 5)
				printf("��� �������� ");
			else
			printf("��� ������� ");
			break;
		case 2:
			if (m == 3 | m == 4 | m == 5)
				printf("��� �������� ");
			else
				printf("��� ������� ");
			break;
		case 3:
			if (m == 3 | m == 4 | m == 5)
				printf("��� �������� ");
			else
				printf("��� ������� ");
			break;
		case 4:
			if (m == 3 | m == 4 | m == 5)
				printf("��� �������� ");
			else
				printf("��� ������� ");
			break;
		case 5:
			if (m == 3 | m == 4 | m == 5)
				printf("��� ������� ");
			else
				printf("��� ������ ");
			break;
		case 6:
			if (m == 3 | m == 4 | m == 5)
				printf("��� ������� ");
			else
				printf("��� ������ ");
			break;

		}
		switch (m)
		{
		case 1:
			printf("����� ");
			break;
		case 2:
			printf("������");
			break;
		case 3:
			printf("�����");
			break;
		case 4:
			printf("�����");
			break;
		case 5:
			printf("�������");
			break;
		case 6:
			printf("����");
			break;
		case 7:
			printf("�������");
			break;
		case 8:
			printf("����");
			break;
		case 9:
			printf("��������");
			break;
		case 10:
			printf("������");
			break;
		case 11:
			printf("������");
			break;
		case 0:
			printf("������");
			break;
		}
}