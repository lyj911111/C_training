#include <stdio.h>


// 4�ڸ��� ��ŭ �ٱ�
int main()
{
	int input;
	int result;
	int i = 0;


	printf("�������� �������� �ٲٴ� ����\n");
	printf("���� �Է��Ͻÿ�:");
	scanf("%d", &input);


	for (i = 31; i <= 31; i--)            // int�� 32��Ʈ�̹Ƿ� 31�������� 0���� --ī��Ʈ
	{
		if (input&(1 << i))              //  if(���ǽ�) �� 0�̸� ����, �� �ܰ��� ��.
		{                                //  ��Ʈ������ �ϸ� 1�� i�� ��ŭ <<���� ��Ʈ����, input���� (1<<i)���� &����ũ�� 0���� 1���� �Ǵ�.
			break;                       //  0�϶��� ������ ��� ����, 0�� �ƴҰ�� break���� ���� ����.
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
// 0�� ������ ���
int main()
{
	int input;
	int result;
	int i = 0;


	printf("�������� �������� �ٲٴ� ����\n");
	printf("���� �Է��Ͻÿ�:");
	scanf("%d", &input);


	for ( i = 31; i <= 31; i--)
	{
		if (input&(1 << i))              //  if(���ǽ�) �� 0�̸� ����, �� �ܰ��� ��.
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
//0�� ������ ���
int main()
{
	int input;
	int bit;
	int  count=0;


	printf("�������� �������� �ٲٴ� ����\n");
	printf("���� �Է��Ͻÿ�:");
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
	
	printf("�������� �������� �ٲٴ� ����\n");
	printf("���� �Է��Ͻÿ�:");
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
printf("�������� �������� �ٲٴ� ����\n");
printf("���� �Է��Ͻÿ�:");
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