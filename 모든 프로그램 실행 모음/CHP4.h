#define SQmeter 3.3058

int ch4_no1(void)
{
	float x;
	printf("실수를 입력하시오: ");
	scanf("%f", &x);
	printf("실수형식으로는 %f", x);
	printf("\n");
	printf("지수형식으로는 %e", x);
	printf("\n");

	return 0;
}

int ch4_no3(void)
{
	int x, y;
	x = 10; y = 20;
	printf("값 바꾸기전 상태는 x=%d, y=%d\n", x, y);
	x = y;
	y = x;

	printf("값 바꾼 후 상태는 x=%d, y=%d\n", x, y);

	return 0;
}

int ch4_no5(void)
{
	int b;      // 입력값
	double c = 0; // 출력값

	printf("평을 입력하세요:");
	scanf("%d", &b);
	c = SQmeter * b;
	printf("%f 평방미터 입니다.\n", c);

	return 0;

}

int ch4_no7(void)
{

	double m, v; // 질량 속도
	double E;  // 운동에너지

	printf("질량을 입력하세요.:");
	scanf("%lf", &m);
	printf("속도를 입력하세요.:");
	scanf("%lf", &v);

	E = m*v*v / 2.0;

	printf("운동에너지는 [%E]입니다.", E);

	return 0;
}

int ch4_no9(void)
{
	printf("\a");
	printf("화재가 발생했습니다.");

	return 0;
}