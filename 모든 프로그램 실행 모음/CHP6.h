#include <stdlib.h>

int ch6_no1(void)
{
	char c;

	printf("문자를입력하시오.");
	scanf("%c", &c);

	switch (c)
	{
	case 'a':
		printf("모음입니다.\n");
		break;
	case 'e':
		printf("모음입니다.\n");
		break;
	case 'i':
		printf("모음입니다.\n");
		break;
	case 'o':
		printf("모음입니다.\n");
		break;
	case 'u':
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.\n");
		break;

	}

	return 0;
}

int ch6_no2(void)
{
	int a, b;
	int c;
	printf("첫번째 정수를 입력하시오");
	scanf("%d", &a);
	printf("두번째 정수를 입력하시오");
	scanf("%d", &b);

	c = a%b;
	if (c == 0)
	{
		printf("약수입니다.\n");
	}
	else
	{
		printf("약수가 아닙니다.\n");
	}

	return 0;
}

int ch6_no3(void)
{
	int a, b, c;

	printf("세개의 정수를 입력하시오\n");
	scanf("%d %d %d", &a, &b, &c);


	if (a <= b, a <= c)
	{
		printf("제일 작은 정수는 %d입니다.", a);
	}
	else if (b <= a, b <= c)
	{
		printf("제일 작은 정수는 %d입니다.", b);
	}
	else if (c <= a, c <= a)
	{
		printf("제일 작은 정수는 %d입니다.", c);
	}

	return 0;
}

int ch6_no4(void)
{
	int user;  // 사용자의 선택
	int computer = 0;
	int a, b, c;

	srand(time(NULL));               // 현재 컴퓨터 시간을 참조해서 랜덤으로 실행.

	printf("1: 가위, 2: 바위. 3:보 [선택하십시오]\n");
	scanf("%d", &user);

	if (user == 1 || user == 2 || user == 3)
	{
		computer = rand() % 3 + 1;
		printf("User가 낸 수: [%d] \n\n", user);

		printf("computer가 낸 수 [%d]", computer);    // 1,2,3 중에 임의로 난수 발생.
		printf("\n");


		if (user == computer)
		{
			printf("비겼다\n");
		}
		else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2))
		{
			printf("이겼다\n");
		}
		else
		{
			printf("졌다\n");
		}
	}
	else
	{
		printf("다시선택하세요.\n");
	}


	return 0;
}

int ch6_no5(void)
{
	int tall, age;   // input data
	printf("키를 입력하세요(cm):\n");
	scanf("%d", &tall);
	printf("나이를 입력하세요:\n");
	scanf("%d", &age);

	if (tall >= 140 && age >= 10)
	{
		printf("타도 좋습니다.\n");
	}
	else
	{
		printf("죄송합니다\n");
	}


	return 0;
}

int ch6_no6(void)
{
	int month;

	printf("월(月)을 입력하세요:");
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
		printf("그런달은 없습니다.\n");
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
		printf("과체중\n");
	}
	else if (weight = std)
	{
		printf("표준\n");
	}
	else if (weight < std)
	{
		printf("저체중\n");
	}

	return 0;
}

int ch6_no10(void)
{
	int x, y;
	int std;

	printf("x좌표:");
	scanf("%d", &x);
	printf("y좌표");
	scanf("%d", &y);

	if (x > 0, y > 0)
	{
		printf("1사분면\n");
	}
	else if (x > 0, y < 0)
	{
		printf("2사분면\n");
	}
	else if (x < 0, y < 0)
	{
		printf("3사분면\n");
	}
	else if (x < 0, y > 0)
	{
		printf("4사분면\n");
	}
	else
	{
		printf("x또는 y원점 선상에 존재\n");
	}

	return 0;
}

int ch6_no11(void)
{
	char input;

	printf("문자를 입력하시오");
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