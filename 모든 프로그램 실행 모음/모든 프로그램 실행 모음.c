#include <stdio.h>
#include "CHP3.h"
#include "CHP4.h"
#include "CHP5.h"
#include "CHP6.h"
#include "CHP7.h"

void chp3(), chp4(), chp5(), chp6(), chp7();                         // void 함수 뒤에 반드시 ";"를 붙이도록 해야함.


int main()
{
	int input;


	while (1)
	{
		printf("[3,4,5,6,7]중에 원하는 chapter를 선택하시오.\n chapter:");
		scanf("%d",&input);

		if (input == 3)
		{
			chp3();                 //  함수 불러오기 앞에는 void나 int를 선언하지 않음.
		}
		else if (input == 4)
		{
			 chp4();
		}
		else if (input == 5)
		{
			 chp5();
		}
		else if (input == 6)
		{
			 chp6();
		}
		else if (input == 7)
		{
			 chp7();
		}
		else
		{
			printf("다시선택 해주세요.\n\n");
		}
	}


	return 0;
}


void chp3()
{
	int input;

	printf("[1,2,3]중 문제를 선택하시오.\n");
	printf("number:");
	scanf("%d", &input);

	while (1)
	{
		if (input == 1)
		{
			ch3_1();
		}
		else if (input == 2)
		{
			ch3_2();
		}
		else if (input == 3)
		{
			ch3_3();
		}
		else
		{
			printf("다시선택하십시오. \n\n");
		}
	}


}


void chp4()
{
	int input;

	printf("[1,3,7,9]중 문제를 선택하시오.\n");
	printf("number:");
	scanf("%d", &input);

	while (1)
	{
		if (input == 1)
		{
			ch4_no1();
		}
		else if (input == 3)
		{
			ch4_no3();
		}
		else if (input == 5)
		{
			ch4_no5();
		}
		else if (input == 7)
		{
			ch4_no7();
		}
		else if (input == 9)
		{
			ch4_no9();
		}
		else
		{
			printf("다시선택하십시오. \n\n");
		}
	}
}


void chp5()
{
	int input;

	printf("[1,2,3,4,5,6,7,12]중 문제를 선택하시오.\n");
	printf("number:");
	scanf("%d", &input);

	while (1)
	{
		if (input == 1)
		{
			ch5_no1();
		}
		else if (input == 2)
		{
			ch5_no2();
		}
		else if (input == 3)
		{
			ch5_no3();
		}
		else if (input == 4)
		{
			ch5_no4();
		}
		else if (input == 5)
		{
			ch5_no5();
		}
		else if (input == 6)
		{
			ch5_no6();
		}
		else if (input == 7)
		{
			ch5_no7();
		}
		else if (input == 12)
		{
			ch5_no12();
		}
		else
		{
			printf("다시선택하십시오. \n\n");
		}
	}
}


void chp6()
{
	int input;

	printf("[1,2,3,4,5,6,7,10,11]중 문제를 선택하시오.\n");
	printf("number:");
	scanf("%d", &input);

	while (1)
	{
		if (input == 1)
		{
			ch6_no1();
		}
		else if (input == 2)
		{
			ch6_no2();
		}
		else if (input == 3)
		{
			ch6_no3();
		}
		else if (input == 4)
		{
			ch6_no4();
		}
		else if (input == 5)
		{
			ch6_no5();
		}
		else if (input == 6)
		{
			ch6_no6();
		}
		else if (input == 7)
		{
			ch6_no7();
		}
		else if (input == 10)
		{
			ch6_no10();
		}
		else if (input == 11)
		{
			ch6_no11();
		}
		else
		{
			printf("다시선택하십시오. \n\n");
		}
	}
}


void chp7()
{
	int input;

	printf("[1,2,3,4,5,6,8,9,11,14]중 문제를 선택하시오.\n");
	printf("number:");
	scanf("%d", &input);

	while (1)
	{
		if (input == 1)
		{
			ch7_no1();
		}
		else if (input == 2)
		{
			ch7_no2();
		}
		else if (input == 3)
		{
			ch7_no3();
		}
		else if (input == 4)
		{
			ch7_no4();
		}
		else if (input == 5)
		{
			ch7_no5();

		}
		else if (input == 6)
		{
			ch7_no6();
		}
		else if (input == 8)
		{
			ch7_no8();
		}
		else if (input == 9)
		{
			ch7_no9();
		}
		else if (input == 11)
		{
			ch7_no11();
		}
		else if (input == 14)
		{
			ch7_no14();
		}
		else
		{
			printf("다시선택하십시오. \n\n");
		}
	}
}
