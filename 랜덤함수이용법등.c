#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define e 0.000001

// no.2


void F_to_C()
{
	double input;
	printf("ȭ���µ��� �Է��Ͻÿ�.\n");
	scanf("%lf", &input);
	
	double C;
	C = 5.0 / 9.0 * (input - 32.0);
	printf("�����µ��� %lf �Դϴ�.\n",C);
}


// no.4

void get_tax()
{
	int input;

	printf("�ҵ��� �Է��Ͻÿ�:\n");
	scanf("%d����", &input);

	if (input > 1000)
	{
		input = (input * 0.1);
		printf("�ҵ漼�� %d �Դϴ�.\n", input);
	}
	else if (input <= 1000)
	{
		input = input * 0.08;
		printf("�ҵ漼�� %d �Դϴ�.\n", input);
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

	printf("2���� 100������ ��� �Ҽ��� ����մϴ�.\n");

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
		printf("[2,4,6,8,10,12,14,16] �� ������ȣ�� �����Ͻÿ�.:");
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

			printf("ù��° ����:");
			scanf("%d", &n);
			printf("�ι�° ����:");
			scanf("%d", &m);


			if (is_multiple(n,m) == 1)
			{
				printf("%d�� ����� %d�Դϴ�.\n",n,m);
			}
			else if (is_multiple(n,m) == 0)
			{
				printf("%d �� %d �� ����� �ƴմϴ�.\n",n,m);
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
			
			printf("������ �Է��Ͻÿ�:");
			scanf("%d", &input);

			 is_leap( input);

			if (is_leap(input) == 1)
			{
				printf("%d���� 366���Դϴ�.\n", input);
			}
			else 
			{
				printf("%d���� 365���Դϴ�.\n", input);
			}

		}
		else if (input == 16)
		{
			double a, b;

			printf("�Ǽ��� �Է��Ͻÿ�:");
			scanf("%lf", &a);
			printf("�Ǽ��� �Է��Ͻÿ�:");
			scanf("%lf", &b);

			if (f_equal(a,b) == 1)
			{
				printf("�� ���� �Ǽ��� ���� ����\n");
			}
			else
			{
				printf("�� ���� �Ǽ��� �ٸ�\n");
			}
			break;
		}
		else
			printf("�ٽ� �Է��ϼ���\n");
		continue;
	}

	return 0;
}