#include <stdio.h>


// 4자리수 만큼 뛰기
int main()
{
	int input;
	int result;
	int i = 0;


	printf("십진수를 이진수로 바꾸는 과제\n");
	printf("값을 입력하시오:");
	scanf("%d", &input);


	for (i = 31; i <= 31; i--)            // int는 32비트이므로 31에서부터 0까지 --카운트
	{
		if (input&(1 << i))              //  if(조건식) 이 0이면 거짓, 그 외값은 참.
		{                                //  비트연산을 하며 1을 i값 만큼 <<으로 비트변경, input값과 (1<<i)값을 &마스크로 0인지 1인지 판단.
			break;                       //  0일때는 루프를 계속 돌고, 0이 아닐경우 break문을 통해 나감.
		}
	}

	for (   ; i <= 31; i--)          
	{
		
		if (input & (1 << i))
		{
			printf("1");
		}
		else
			printf("0");

		if ((32 - i) % 4 == 0)          
		{
			printf(" ");
		}


		if (i == 0)
		{
			printf("\n");
			break;
		}
	}

	return 0;
}




/*
// 0을 제외한 출력
int main()
{
	int input;
	int result;
	int i = 0;


	printf("십진수를 이진수로 바꾸는 과제\n");
	printf("값을 입력하시오:");
	scanf("%d", &input);


	for ( i = 31; i <= 31; i--)
	{
		if (input&(1 << i))              //  if(조건식) 이 0이면 거짓, 그 외값은 참.
		{
			break;
		}
	}

	for (   ; i<=31 ;i--)
	{
		if (input & (1 << i))
		{
			printf("1");
		}
		else
			printf("0");
		if (i == 0)
		{
			printf("\n");
			break;
		}
	}




	return 0;
}
	
	
	
	
	
	


/*
//0을 포함한 출력
int main()
{
	int input;
	int bit;
	int  count=0;


	printf("십진수를 이진수로 바꾸는 과제\n");
	printf("값을 입력하시오:");
	scanf("%d", &input);

	for (int i = 31 ; i >= 0 ; i--)
	{
		bit = input & (1<<i);
		if (bit == 0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		
		
		count++;
		

	}





	return 0;
}








	/*
	int input;
	int value=0;
	int rest=0;
	int temp = 0;
	int i = 0;
	int sum = 0;
	int multi = 1;
	
	printf("십진수를 이진수로 바꾸는 과제\n");
	printf("값을 입력하시오:");
	scanf("%d",&input);

	value = input;

	for (i=0;i<=value;i++)
	{
		rest = value % 2;

		for (i=0; i<=value ; i++)
		{
			multi *= 10;
			rest = value % 2;

			//temp = rest * multi;

			//printf("%d", rest);

			value = value / 2;
		}
		


		

	}


	return 0;
}

/*

int input;
int value=0;
int rest=0;
int j = 0;
printf("십진수를 이진수로 바꾸는 과제\n");
printf("값을 입력하시오:");
scanf("%d",&input);

value = input;

for (;;)
{


rest = value % 2;
rest = rest << 1;
printf("%d", rest);

value = value / 2;
j++;


if (value == 1)
{
printf("1");
break;
}
else if (value == 0)
{
printf("0");
break;
}

}


*/