#pragma once


int ch3_1(void)
{

	float x;
	float y;
	float z;

	float sum, avg;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%f", &x);
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%f", &y);
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%f", &z);
	printf("\n");

	sum = x + y + z;
	avg = sum / 3;

	printf("�հ�� %f�̰� ��հ��� %f �Դϴ�.", sum, avg);

}

int ch3_2(void)
{

	int a, b;
	float c;

	printf("�ﰢ���� �غ�:");
	scanf("%d", &a);
	printf("�ﰢ���� ����:");
	scanf("%d", &b);

	c = a*b / 2;

	printf("�ﰢ���� ����: %f\n", c);

}

int ch3_3(void)
{
	float x;
	float value;

	printf("�Ǽ��� �Է��Ͻÿ�.:");
	scanf("%f", &x);

	value = 3 * x*x + 7 * x + 11;
	printf("\n");
	printf("���׽��� ���� : %f\n", value);

}