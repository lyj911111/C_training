#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define e 0.000001

// no.2


void F_to_C()
{
	double input;
	printf("화씨온도를 입력하시오.\n");
	scanf("%lf", &input);
	
	double C;
	C = 5.0 / 9.0 * (input - 32.0);
	printf("섭씨온도는 %lf 입니다.\n",C);
}


// no.4

void get_tax()
{
	int input;

	printf("소득을 입력하시오:\n");
	scanf("%d만원", &input);

	if (input > 1000)
	{
		input = (input * 0.1);
		printf("소득세는 %d 입니다.\n", input);
	}
	else if (input <= 1000)
	{
		input = input * 0.08;
		printf("소득세는 %d 입니다.\n", input);
	}

}

// no. 6

void random ()
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++)
	{
		int ran = rand() % 2;
		printf("%d ", ran);
	}
}

// no. 8

void f_rand()
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5 ; i++)
	{
		float ran = rand() / (double)RAND_MAX;
		printf("%f \n", ran); 
	}
}

 // no. 10

int is_multiple(int n, int m)
{
	int result = n %m;
	if (result == 0)
	{
		return 1;
	}
	else
		return 0;
}

// no. 12

void is_prime()
{
	int a=0;
	int count;

	printf("2부터 100사이의 모든 소수를 출력합니다.\n");

	for (int j=2; j<=100 ;j++)
	{
		count = 0;
		for (int i=1 ; i <= j; i++)
		{
			a = j % i;
			if (a == 0)
			{
				count++;
				if (count > 2)
					break;
			}
		}
		if (count == 2)
		{
			printf("%d ", j);
		}
	}
	printf("\n");

}

// no.14

int is_leap(int year)
{
	
	if (year % 4==0 ||  (year%100 == year%400))
	{
		return 1;
	}
	else return 0;
}

double f_equal (double a,double b)
{
	
	double result = (fabs(a - b)) / fabs(fmin(a, b));

	if (result < e)
	{
		return 1;
	}
	else return 0;
}


int main()
{
	int input;
	
	while (1)
	{
		printf("[2,4,6,8,10,12,14,16] 중 예제번호를 선택하시오.:");
		scanf("%d", &input);

		if (input == 2)
		{
			F_to_C();
			break;
		}
		else if (input == 4)
		{
			get_tax();
			break;
		}
		else if (input == 6)
		{
			random();
			break;
		}
		else if (input == 8)
		{
			f_rand();
			break;
		}
		else if (input == 10)
		{
			int n, m;

			printf("첫번째 정수:");
			scanf("%d", &n);
			printf("두번째 정수:");
			scanf("%d", &m);


			if (is_multiple(n,m) == 1)
			{
				printf("%d의 배수는 %d입니다.\n",n,m);
			}
			else if (is_multiple(n,m) == 0)
			{
				printf("%d 는 %d 의 배수가 아닙니다.\n",n,m);
			}
			break;
		}
		else if (input == 12)
		{
			is_prime();
			break;
		}
		else if (input == 14)
		{
			int input;
			
			printf("연도를 입력하시오:");
			scanf("%d", &input);

			 is_leap( input);

			if (is_leap(input) == 1)
			{
				printf("%d년은 366일입니다.\n", input);
			}
			else 
			{
				printf("%d년은 365일입니다.\n", input);
			}

		}
		else if (input == 16)
		{
			double a, b;

			printf("실수를 입력하시오:");
			scanf("%lf", &a);
			printf("실수를 입력하시오:");
			scanf("%lf", &b);

			if (f_equal(a,b) == 1)
			{
				printf("두 개의 실수는 서로 같음\n");
			}
			else
			{
				printf("두 개의 실수는 다름\n");
			}
			break;
		}
		else
			printf("다시 입력하세요\n");
		continue;
	}

	return 0;
}