#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, n, m;
	scanf("%d", &b);
	scanf("%d", &a);
	n = b / 10;
	m = b % 10;
	if ((n == 2) & (b != 20))
		printf("�������� ");
	if ((n == 3) & (b != 30))
		printf("�������� ");
	switch (b)
	{
	case 10:
		printf("������� ");
		break;
	case 11:
		printf("������������ ");
		break;
	case 12:
		printf("����������� ");
		break;
	case 13:
		printf("����������� ");
		break;
	case 14:
		printf("������������� ");
		break;
	case 15:
		printf("����������� ");
		break;
	case 16:
		printf("������������ ");
		break;
	case 17:
		printf("����������� ");
		break;
	case 18:
		printf("������������� ");
		break;
	case 19:
		printf("������������� ");
		break;
	case 20:
		printf("��������� ");
		break;
	case 30:
		printf("��������� ");
		break;
	}
	if ((b < 10) | (b > 20))
	{
		switch (m)
		{
		case 1:
			printf("������ ");
			break;
		case 2:
			printf("������ ");
			break;
		case 3:
			printf("������ ");
			break;
		case 4:
			printf("��������� ");
			break;
		case 5:
			printf("����� ");
			break;
		case 6:
			printf("������ ");
			break;
		case 7:
			printf("������� ");
			break;
		case 8:
			printf("������� ");
			break;
		case 9:
			printf("������� ");
			break;
		}
	};
	switch (a)
	{
	case 1:
		printf("������");
		break;
	case 2:
		printf("�������");
		break;
	case 3:
		printf("�����");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("���");
		break;
	case 6:
		printf("����");
		break;
	case 7:
		printf("����");
		break;
	case 8:
		printf("�������");
		break;
	case 9:
		printf("��������");
		break;
	case 10:
		printf("�������");
		break;
	case 11:
		printf("������");
		break;
	case 12:
		printf("�������");
		break;
	}
}