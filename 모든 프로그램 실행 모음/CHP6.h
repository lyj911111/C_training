#include <stdlib.h>

int ch6_no1(void)
{
	char c;

	printf("���ڸ��Է��Ͻÿ�.");
	scanf("%c", &c);

	switch (c)
	{
	case 'a':
		printf("�����Դϴ�.\n");
		break;
	case 'e':
		printf("�����Դϴ�.\n");
		break;
	case 'i':
		printf("�����Դϴ�.\n");
		break;
	case 'o':
		printf("�����Դϴ�.\n");
		break;
	case 'u':
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�����Դϴ�.\n");
		break;

	}

	return 0;
}

int ch6_no2(void)
{
	int a, b;
	int c;
	printf("ù��° ������ �Է��Ͻÿ�");
	scanf("%d", &a);
	printf("�ι�° ������ �Է��Ͻÿ�");
	scanf("%d", &b);

	c = a%b;
	if (c == 0)
	{
		printf("����Դϴ�.\n");
	}
	else
	{
		printf("����� �ƴմϴ�.\n");
	}

	return 0;
}

int ch6_no3(void)
{
	int a, b, c;

	printf("������ ������ �Է��Ͻÿ�\n");
	scanf("%d %d %d", &a, &b, &c);


	if (a <= b, a <= c)
	{
		printf("���� ���� ������ %d�Դϴ�.", a);
	}
	else if (b <= a, b <= c)
	{
		printf("���� ���� ������ %d�Դϴ�.", b);
	}
	else if (c <= a, c <= a)
	{
		printf("���� ���� ������ %d�Դϴ�.", c);
	}

	return 0;
}

int ch6_no4(void)
{
	int user;  // ������� ����
	int computer = 0;
	int a, b, c;

	srand(time(NULL));               // ���� ��ǻ�� �ð��� �����ؼ� �������� ����.

	printf("1: ����, 2: ����. 3:�� [�����Ͻʽÿ�]\n");
	scanf("%d", &user);

	if (user == 1 || user == 2 || user == 3)
	{
		computer = rand() % 3 + 1;
		printf("User�� �� ��: [%d] \n\n", user);

		printf("computer�� �� �� [%d]", computer);    // 1,2,3 �߿� ���Ƿ� ���� �߻�.
		printf("\n");


		if (user == computer)
		{
			printf("����\n");
		}
		else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2))
		{
			printf("�̰��\n");
		}
		else
		{
			printf("����\n");
		}
	}
	else
	{
		printf("�ٽü����ϼ���.\n");
	}


	return 0;
}

int ch6_no5(void)
{
	int tall, age;   // input data
	printf("Ű�� �Է��ϼ���(cm):\n");
	scanf("%d", &tall);
	printf("���̸� �Է��ϼ���:\n");
	scanf("%d", &age);

	if (tall >= 140 && age >= 10)
	{
		printf("Ÿ�� �����ϴ�.\n");
	}
	else
	{
		printf("�˼��մϴ�\n");
	}


	return 0;
}

int ch6_no6(void)
{
	int month;

	printf("��(��)�� �Է��ϼ���:");
	scanf("%d", &month);

	if (month == 1)
	{
		printf("January\n");
	}
	else if (month == 2)
	{
		printf("Feburary\n");
	}
	else if (month == 3)
	{
		printf("March\n");
	}
	else if (month == 4)
	{
		printf("April\n");
	}
	else if (month == 5)
	{
		printf("May\n");
	}
	else if (month == 6)
	{
		printf("June\n");
	}
	else if (month == 7)
	{
		printf("July\n");
	}
	else if (month == 8)
	{
		printf("August\n");
	}
	else if (month == 9)
	{
		printf("September\n");
	}
	else if (month == 10)
	{
		printf("Octuber\n");
	}
	else if (month == 11)
	{
		printf("November\n");
	}
	else if (month == 12)
	{
		printf("December\n");
	}
	else
	{
		printf("�׷����� �����ϴ�.\n");
	}

	return 0;
}

int ch6_no7(void)
{
	int tall, weight;
	int std;

	printf("Please put in your Tall:");
	scanf("%d", &tall);
	printf("Please put in your Weight:");
	scanf("%d", &weight);

	std = (tall - 100)*0.9;

	if (weight > std)
	{
		printf("��ü��\n");
	}
	else if (weight = std)
	{
		printf("ǥ��\n");
	}
	else if (weight < std)
	{
		printf("��ü��\n");
	}

	return 0;
}

int ch6_no10(void)
{
	int x, y;
	int std;

	printf("x��ǥ:");
	scanf("%d", &x);
	printf("y��ǥ");
	scanf("%d", &y);

	if (x > 0, y > 0)
	{
		printf("1��и�\n");
	}
	else if (x > 0, y < 0)
	{
		printf("2��и�\n");
	}
	else if (x < 0, y < 0)
	{
		printf("3��и�\n");
	}
	else if (x < 0, y > 0)
	{
		printf("4��и�\n");
	}
	else
	{
		printf("x�Ǵ� y���� ���� ����\n");
	}

	return 0;
}

int ch6_no11(void)
{
	char input;

	printf("���ڸ� �Է��Ͻÿ�");
	scanf(" %c", &input);


	if (input == 'R')
	{
		printf("Rectangle\n");
	}
	else if (input == 'T')
	{
		printf("Triangle\n");
	}
	else if (input == 'C')
	{
		printf("Circle\n");
	}
	else
	{
		printf("unknown\n");
	}

	return 0;
}