#include<stdio.h>
#include<string.h>
#include<math.h>

void convert(char num[], int a);

void main()
{
	int a = 123456789;  //  �� 12345�� �Է�,

	char num[10] = { 0 };    // array �޸� 10ĭ(10byte)

	convert(num , a);
	printf("%s\n", num);

	
}

void convert(char num[],int a)   //  �� 12345�� ����Ǿ� a�ο�. int a ���� char num���� ���
{
	
	int len = 1;
	int c = a;

	while (c / 10 != 0)   //  a�� ���� len�� ���ϱ� ���� c�� ������ �̿�.
	{
		len++;
		c = c / 10;
	}
	

	for (int i= len-1 ; i>=0 ; i--)   // [i = len-1] ū ���ڸ� �տ��� ���� �о� ����...
	{
		
		num[i] = a % 10 + '0';             //  [ <- array�� �̵����� ]
		a = a / 10;
										   //num[i] = (len+1) - num[i];   
	}
	num[len] = 0;

}

/*
int convert(char a[],int num);

int main()
{
	char a[] = "1234";   //  ���ڿ� �ƽ�Ű�ڵ� [49,50,51,52,null] �� �Էµ� ����.
	int num=0;

	num = convert(a,num);
	printf("%d", num);

	return 0;
}

int convert(char a[],int num)
{
	
	for (int i = 0; a[i]; i++)
	{
		a[i] = a[i] - 48;
		num = num * 10;
		num = num + a[i];
	}
	return num;
}
*/




/*
int main()
{
	char str[100];
	
	printf("write down:\n");
	gets(str);
	
	
		for (int i = 0; str[i] ; i++)
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				str[i] = str[i] + 32;                       // �빮��->�ҹ���
			}
			else if (str[i] >= 97 && str[i] <= 122)         // �ҹ���->�빮��
			{
				str[i] = str[i] - 32;
			}
		}

		printf("%s\n", str);
	
	return 0;
}
*/

/* �������� �ۼ��� �ڵ�.
int main()
{
	char a[] = "1234";   //  ���ڿ� �ƽ�Ű�ڵ� [49,50,51,52,null] �� �Էµ� ����.
	int num = 0;

	num = convert(a, num);
	printf("%d", num);

	return 0;
}

int convert(char a[], int num)
{
	int len = 0;
	int i = 0;
	int stack = 0;

	while (a[len] != 0) len++;   //  len�� ī���ͼ���
	
	//len = len - 1; // len-- , len -=1

	for (i = 0; i < len; i++)
	{
		//num = (a[i]);
		num = num * 10 + a[i] - '0';
		
	}
	


	return num;
}
*/