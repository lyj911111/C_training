#pragma once
int ch5_no1()
{
	int x, y; // input from user
	int value, res;

	printf("2���� ������ �Է��Ͻÿ�\n");
	scanf("%d", &x);
	scanf("%d", &y);

	value = x / y;
	res = x%y;

	printf("�� %d, ������ %d\n", x, y);
	return 0;

}

int ch5_no2()
{
	double x, y; // input from user
	double add, multi, devide, minus;

	printf("2���� �Ǽ��� �Է��Ͻÿ�\n");
	scanf("%lf", &x);
	scanf("%lf", &y);

	add = x + y;
	multi = x * y;
	devide = x / y;
	minus = x - y;

	printf("�� %lf, �� %lf, �� %lf, �� %lf\n", add, minus, multi, devide);
	return 0;

}

int ch5_no3()
{
	int a, b, c, d = 0;

	printf("3���� ������ �Է��Ͻÿ�.\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	d = a > b ? (a > c ? a : c) : c;

	printf("�ִ밪:%d\n", d);

	return 0;

}

int ch5_no4()
{
	double input;
	double feet, inch, cm;
	double result;

	int result_fe;
	double result_inch;

	printf("Ű�� �Է��ϼ���:");
	scanf("%lf", &input);
	printf("\n");

	cm = input;
	inch = cm * (1.0 / 2.54);
	feet = cm * ((1.0 / 2.54) / (12));

	result_fe = inch / 12;  // ��ġ�� ��Ʈ��
	result_inch = inch - (result_fe * 12);

	printf("������ȯ�� �ϸ�,\n");
	printf("%lfcm��%lf��ġ,%lf��Ʈ �Դϴ�.\n", cm, inch, feet);
	printf("\n");
	printf("==================================================\n");
	printf("����, \n");
	printf("%lfcm��%d��Ʈ,%lf��ġ �Դϴ�.\n", cm, result_fe, result_inch);
	printf("==================================================\n");
	return 0;
}

int ch5_no5(void)
{
	int input;
	int a, b;

	printf("1000���� ���� ���ڸ� �Է��ϼ���.");
	scanf("%d", &input);

	a = input / 10;
	b = input % 10;

	printf("���� �ڸ�:%d\n�����ڸ�:%d\n", a, b);

	return 0;
}

int ch5_no6(void)
{
	int input;
	int a;

	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &input);

	a = ~input + 1;

	printf("\n2�� ������:%d\n", a);

	return 0;
}

int ch5_no7(void)
{
	int x, y;
	int a;

	printf("������ �Է��Ͻÿ�.\n");
	scanf("%d", &x);
	printf("2�� ���ϰ� ���� Ƚ��\n");
	scanf("%d", &y);

	a = (x << y);
	printf("%d<<%d�� ��: %d\n", x, y, a);

	return 0;
}

int ch5_no12(void)
{
	char a, b, c, d;   // input data
	unsigned int ab, bb, cb, db;  //  save
	unsigned int result;

	printf("ù��° ����:");
	scanf(" %c", &a);
	printf("�ι�° ����:");
	scanf(" %c", &b);
	printf("����° ����:");
	scanf(" %c", &c);
	printf("�׹�° ����:");
	scanf(" %c", &d);

	ab = 'a';
	bb = 'b' << 8;
	cb = 'c' << 16;
	db = 'd' << 24;

	result = ab | bb | cb | db;
	printf("�����: %x \n", result);

	return 0;
}