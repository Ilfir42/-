#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#include<stdio.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, n, m;
	scanf("%d", a);
		n = a / 10;
		m = a % 10;
		if (n == 2)
			printf("�������� ");
		if (n == 3)
			printf("�������� ");
		switch (a)
		{
		case 10:
			printf("������ ");
			break;
		case 11:
			printf("����������� ");
			break;
		case 12:
			printf("���������� ");
			break;
		case 13:
			printf("���������� ");
			break;
		case 14:
			printf("������������ ");
			break;
		case 15:
			printf("���������� ");
			break;
		case 16:
			printf("����������� ");
			break;
		case 17:
			printf("���������� ");
			break;
		case 18:
			printf("������������ ");
			break;
		case 19:
			printf("������������ ");
			break;
		case 40:
			printf("����� ");
			break;
		}
		if ((a < 10) | (a > 20))
		{
			switch (m)
			{
			case 1:
				printf("���� ");
				break;
			case 2:
				printf("��� ");
				break;
			case 3:
				printf("��� ");
				break;
			case 4:
				printf("������ ");
				break;
			case 5:
				printf("���� ");
				break;
			case 6:
				printf("����� ");
				break;
			case 7:
				printf("���� ");
				break;
			case 8:
				printf("������ ");
				break;
			case 9:
				printf("������ ");
				break;
			}
		}
		if (((a < 10) | (a > 20)) & ((m == 2) | (m == 3) | (m == 4)))
			printf("������� �������\n");
		else if (((a < 10) | (a > 20)) & (m == 1))
			printf("������� �������\n");
		else
			printf("������� �������\n");
}