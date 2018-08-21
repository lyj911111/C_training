#pragma once


int ch3_1(void)
{

	float x;
	float y;
	float z;

	float sum, avg;

	printf("실수를 입력하시오:");
	scanf("%f", &x);
	printf("실수를 입력하시오:");
	scanf("%f", &y);
	printf("실수를 입력하시오:");
	scanf("%f", &z);
	printf("\n");

	sum = x + y + z;
	avg = sum / 3;

	printf("합계는 %f이고 평균값은 %f 입니다.", sum, avg);

}

int ch3_2(void)
{

	int a, b;
	float c;

	printf("삼각형의 밑변:");
	scanf("%d", &a);
	printf("삼각형의 높이:");
	scanf("%d", &b);

	c = a*b / 2;

	printf("삼각형의 넓이: %f\n", c);

}

int ch3_3(void)
{
	float x;
	float value;

	printf("실수를 입력하시오.:");
	scanf("%f", &x);

	value = 3 * x*x + 7 * x + 11;
	printf("\n");
	printf("다항식의 값은 : %f\n", value);

}