#include<stdio.h>
#include<string.h>;

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
