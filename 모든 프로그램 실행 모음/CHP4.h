#define SQmeter 3.3058

int ch4_no1(void)
{
	float x;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &x);
	printf("�Ǽ��������δ� %f", x);
	printf("\n");
	printf("�����������δ� %e", x);
	printf("\n");

	return 0;
}

int ch4_no3(void)
{
	int x, y;
	x = 10; y = 20;
	printf("�� �ٲٱ��� ���´� x=%d, y=%d\n", x, y);
	x = y;
	y = x;

	printf("�� �ٲ� �� ���´� x=%d, y=%d\n", x, y);

	return 0;
}

int ch4_no5(void)
{
	int b;      // �Է°�
	double c = 0; // ��°�

	printf("���� �Է��ϼ���:");
	scanf("%d", &b);
	c = SQmeter * b;
	printf("%f ������ �Դϴ�.\n", c);

	return 0;

}

int ch4_no7(void)
{

	double m, v; // ���� �ӵ�
	double E;  // �������

	printf("������ �Է��ϼ���.:");
	scanf("%lf", &m);
	printf("�ӵ��� �Է��ϼ���.:");
	scanf("%lf", &v);

	E = m*v*v / 2.0;

	printf("��������� [%E]�Դϴ�.", E);

	return 0;
}

int ch4_no9(void)
{
	printf("\a");
	printf("ȭ�簡 �߻��߽��ϴ�.");

	return 0;
}