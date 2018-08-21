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

	printf("최종 합은? %d\n", sum);

	return 0;
}

int ch7_no2()
{
	int a, b, sum = 0;
	int end;


	while (1)
	{
		printf("정수의 합을 계산합니다. 종료하실려면 [ctrl+Z] 엔터를 3번 넣어주세요.\n\n");
		printf("첫번째 정수를 입력하시오.");

		end = scanf("%d", &a);
		if (end == EOF)
		{
			break;
		}


		printf("두번째 정수를 입력하시오.");


		end = scanf("%d", &b);
		if (end == EOF)
		{
			break;
		}

		sum = a + b;

		printf("정수의 합은 %d 입니다.\n\n", sum);

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

	printf("정수를 입력하세요.");
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

	printf("카운터 초기값을 입력하시오.");
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


		printf("[A,S,M,D,Q]에서 연산을 선택하시오:");
		scanf(" %c", &x);



		if (x == 'A')
		{
			printf("두수를 공백으로 분리하여 입력하시오: ");
			scanf("%d %d", &a, &b);
			result = a + b;

			printf("연산의 결과는 %d\n", result);
		}
		else if (x == 'S')
		{
			printf("두수를 공백으로 분리하여 입력하시오: ");
			scanf("%d %d", &a, &b);
			result = a - b;

			printf("연산의 결과는 %d\n", result);
		}
		else if (x == 'M')
		{
			printf("두수를 공백으로 분리하여 입력하시오: ");
			scanf("%d %d", &a, &b);
			result = a * b;

			printf("연산의 결과는 %d\n", result);
		}
		else if (x == 'D')
		{
			printf("두수를 공백으로 분리하여 입력하시오: ");
			scanf("%d %d", &a, &b);
			result = a / b;

			printf("연산의 결과는 %d\n", result);
		}
		else if (x == 'Q')
		{
			break;
		}
		else
		{
			printf("잘못입력하셨습니다. 다시 입력하세요\n");
		}



	} while (x == 'A', 'S', 'M', 'D', 'Q');   // 이곳이 거짓이면 다시 반복하여 실행.


	return 0;
}

int ch7_no8()
{
	int i, j, x;
	int k;


	i = 1;
	for (j = 0; j < i; j++)
	{
		printf("막대의 높이(종료: -1):");
		scanf("%d", &x);

		if (x == -1)
			break;

		if (x < 1 || 50 < x)
		{
			printf("1 부터 50 사이에서 입력하시오.\n");
			continue;
		}

		for (i = 1; i <= x; i++)
		{
			printf("*");
		}
		printf("\n");    // 끝났을때, i=11, j=0
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


	printf("1부터 %d 까지의 합은 %d입니다. ", i - 1, sum - i);

	return 0;
}

int ch7_no11()
{
	int sum, n, i;

	printf("n값을 입력하시오.:");
	scanf("%d", &n);

	sum = 0;

	for (i = 1; i <= n; i++)
	{
		sum = sum + i*i;
	}

	printf("계산값은 %d 입니다.", sum);
	return 0;
}

int ch7_no14(void)
{
	int input;
	int a, b, c, d;

	do
	{
		printf("정수를 입력하시오:");
		scanf("%d", &input);

		if (input < 0)
		{
			printf("Error, 음수를 제외한 수를 입력하시오.\n");
			continue;
		}

		a = input % 10;
		b = (input / 10) % 10;
		c = (input / 10 / 10) % 10;
		d = (input / 10 / 10) / 10;

		printf("반대 정수 값은: %d%d%d%d\n ", a, b, c, d);

	} while (1);


	return 0;
}