#include <Windows.h>

int ch7_no1(void)
{

	int i, sum = 0;
	i = 1;

	do
	{
		if (i % 3 == 0)
		{

			sum = sum + i;
		}
		i++;

	} while (i <= 100);

	printf("���� ����? %d\n", sum);

	return 0;
}

int ch7_no2()
{
	int a, b, sum = 0;
	int end;


	while (1)
	{
		printf("������ ���� ����մϴ�. �����ϽǷ��� [ctrl+Z] ���͸� 3�� �־��ּ���.\n\n");
		printf("ù��° ������ �Է��Ͻÿ�.");

		end = scanf("%d", &a);
		if (end == EOF)
		{
			break;
		}


		printf("�ι�° ������ �Է��Ͻÿ�.");


		end = scanf("%d", &b);
		if (end == EOF)
		{
			break;
		}

		sum = a + b;

		printf("������ ���� %d �Դϴ�.\n\n", sum);

	}

	return 0;
}

int ch7_no3(void)
{
	int i;
	int j;

	for (j = 0; j<7; j++)
	{

		for (i = 1; i <= j; i++)
		{
			printf("*");
		}
		printf("*\n");
	}
	return 0;
}

int ch7_no4(void)
{
	int i;
	int j;
	int x;

	printf("������ �Է��ϼ���.");
	scanf("%d", &x);

	for (j = 0; j<x + 1; j++)
	{
		for (i = 1; i <= j; i++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}

int ch7_no5(void)
{
	int i;
	int j;
	int x;
	int a = 0;

	printf("ī���� �ʱⰪ�� �Է��Ͻÿ�.");
	scanf("%d", &x);

	j = 0;
	for (j = x; j != 0; j--)
	{
		printf("%d ", j);
		Sleep(1000);
	}
	printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");

	return 0;
}

int ch7_no6()
{
	char  x;
	int a, b, result;

	printf("********************\n");
	printf("A----Add\n");
	printf("S----Subtract\n");
	printf("M----Muliply\n");
	printf("D----Divide\n");
	printf("Q----Quit\n");
	printf("********************\n\n");

	do
	{


		printf("[A,S,M,D,Q]���� ������ �����Ͻÿ�:");
		scanf(" %c", &x);



		if (x == 'A')
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
			result = a + b;

			printf("������ ����� %d\n", result);
		}
		else if (x == 'S')
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
			result = a - b;

			printf("������ ����� %d\n", result);
		}
		else if (x == 'M')
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
			result = a * b;

			printf("������ ����� %d\n", result);
		}
		else if (x == 'D')
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
			result = a / b;

			printf("������ ����� %d\n", result);
		}
		else if (x == 'Q')
		{
			break;
		}
		else
		{
			printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���\n");
		}



	} while (x == 'A', 'S', 'M', 'D', 'Q');   // �̰��� �����̸� �ٽ� �ݺ��Ͽ� ����.


	return 0;
}

int ch7_no8()
{
	int i, j, x;
	int k;


	i = 1;
	for (j = 0; j < i; j++)
	{
		printf("������ ����(����: -1):");
		scanf("%d", &x);

		if (x == -1)
			break;

		if (x < 1 || 50 < x)
		{
			printf("1 ���� 50 ���̿��� �Է��Ͻÿ�.\n");
			continue;
		}

		for (i = 1; i <= x; i++)
		{
			printf("*");
		}
		printf("\n");    // ��������, i=11, j=0
						 //break;
	}

	return 0;
}

int ch7_no9()
{
	int sum;
	int n, i;

	sum = 0;

	for (i = 0; i < 10000; i++)
	{
		sum = sum + i;

		if (sum > 10000)
		{
			break;
		}
	}


	printf("1���� %d ������ ���� %d�Դϴ�. ", i - 1, sum - i);

	return 0;
}

int ch7_no11()
{
	int sum, n, i;

	printf("n���� �Է��Ͻÿ�.:");
	scanf("%d", &n);

	sum = 0;

	for (i = 1; i <= n; i++)
	{
		sum = sum + i*i;
	}

	printf("��갪�� %d �Դϴ�.", sum);
	return 0;
}

int ch7_no14(void)
{
	int input;
	int a, b, c, d;

	do
	{
		printf("������ �Է��Ͻÿ�:");
		scanf("%d", &input);

		if (input < 0)
		{
			printf("Error, ������ ������ ���� �Է��Ͻÿ�.\n");
			continue;
		}

		a = input % 10;
		b = (input / 10) % 10;
		c = (input / 10 / 10) % 10;
		d = (input / 10 / 10) / 10;

		printf("�ݴ� ���� ����: %d%d%d%d\n ", a, b, c, d);

	} while (1);


	return 0;
}