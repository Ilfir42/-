#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#include<stdio.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, s, d, e;
	scanf("%d", &a);
	s = a / 100;
	d = a % 100 / 10;
	e = a % 10;
	switch (s)
	{
	case 1:
		printf("��� ");
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
		printf("������� ");
		break;
	case 6:
		printf("�������� ");
		break;
	case 7:
		printf("������� ");
		break;
	case 8:
		printf("��������� ");
		break;
	case 9:
		printf("��������� ");
		break;
	}
	
	switch (d)
	{
	case 1:
		switch (e)
		{
		case 0:
			printf("������");
			break;
		case 1:
			printf("�����������");
			break;
		case 2:
			printf("����������");
			break;
		case 3:
			printf("����������");
			break;
		case 4:
			printf("������������");
			break;
		case 5:
			printf("����������");
			break;
		case 6:
			printf("�����������");
			break;
		case 7:
			printf("����������");
			break;
		case 8:
			printf("������������");
			break;
		case 9:
			printf("�����������");
			break;
		}
		break;
	case 2:
		printf("�������� ");
		break;
	case 3:
		printf("�������� ");
		break;
	case 4:
		printf("����� ");
		break;
	case 5:
		printf("��������� ");
		break;
	case 6:
		printf("���������� ");
		break;
	case 7:
		printf("��������� ");
		break;
	case 8:
		printf("����������� ");
		break;
	case 9:
		printf("��������� ");
		break;
	}
	if (d != 1)
	{
		switch (e)
		{
		case 1:
			printf("����");
			break;
		case 2:
			printf("���");
			break;
		case 3:
			printf("���");
			break;
		case 4:
			printf("������");
			break;
		case 5:
			printf("����");
			break;
		case 6:
			printf("�����");
			break;
		case 7:
			printf("����");
			break;
		case 8:
			printf("������");
			break;
		case 9:
			printf("������");
			break;
		}
	}
}