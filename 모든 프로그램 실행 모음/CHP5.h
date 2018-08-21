#pragma once
int ch5_no1()
{
	int x, y; // input from user
	int value, res;

	printf("2개의 정수를 입력하시오\n");
	scanf("%d", &x);
	scanf("%d", &y);

	value = x / y;
	res = x%y;

	printf("몫 %d, 나머지 %d\n", x, y);
	return 0;

}

int ch5_no2()
{
	double x, y; // input from user
	double add, multi, devide, minus;

	printf("2개의 실수를 입력하시오\n");
	scanf("%lf", &x);
	scanf("%lf", &y);

	add = x + y;
	multi = x * y;
	devide = x / y;
	minus = x - y;

	printf("합 %lf, 차 %lf, 곱 %lf, 몫 %lf\n", add, minus, multi, devide);
	return 0;

}

int ch5_no3()
{
	int a, b, c, d = 0;

	printf("3개의 정수를 입력하시오.\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	d = a > b ? (a > c ? a : c) : c;

	printf("최대값:%d\n", d);

	return 0;

}

int ch5_no4()
{
	double input;
	double feet, inch, cm;
	double result;

	int result_fe;
	double result_inch;

	printf("키를 입력하세요:");
	scanf("%lf", &input);
	printf("\n");

	cm = input;
	inch = cm * (1.0 / 2.54);
	feet = cm * ((1.0 / 2.54) / (12));

	result_fe = inch / 12;  // 인치를 피트로
	result_inch = inch - (result_fe * 12);

	printf("단위변환을 하면,\n");
	printf("%lfcm는%lf인치,%lf피트 입니다.\n", cm, inch, feet);
	printf("\n");
	printf("==================================================\n");
	printf("답은, \n");
	printf("%lfcm는%d피트,%lf인치 입니다.\n", cm, result_fe, result_inch);
	printf("==================================================\n");
	return 0;
}

int ch5_no5(void)
{
	int input;
	int a, b;

	printf("1000보다 작은 숫자를 입력하세요.");
	scanf("%d", &input);

	a = input / 10;
	b = input % 10;

	printf("십의 자리:%d\n일의자리:%d\n", a, b);

	return 0;
}

int ch5_no6(void)
{
	int input;
	int a;

	printf("정수를 입력하시오.");
	scanf("%d", &input);

	a = ~input + 1;

	printf("\n2의 보수는:%d\n", a);

	return 0;
}

int ch5_no7(void)
{
	int x, y;
	int a;

	printf("정수를 입력하시오.\n");
	scanf("%d", &x);
	printf("2를 곱하고 싶은 횟수\n");
	scanf("%d", &y);

	a = (x << y);
	printf("%d<<%d의 값: %d\n", x, y, a);

	return 0;
}

int ch5_no12(void)
{
	char a, b, c, d;   // input data
	unsigned int ab, bb, cb, db;  //  save
	unsigned int result;

	printf("첫번째 문자:");
	scanf(" %c", &a);
	printf("두번째 문자:");
	scanf(" %c", &b);
	printf("세번째 문자:");
	scanf(" %c", &c);
	printf("네번째 문자:");
	scanf(" %c", &d);

	ab = 'a';
	bb = 'b' << 8;
	cb = 'c' << 16;
	db = 'd' << 24;

	result = ab | bb | cb | db;
	printf("결과값: %x \n", result);

	return 0;
}