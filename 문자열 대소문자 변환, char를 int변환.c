#include<stdio.h>
#include<string.h>;

int convert(char a[],int num);

int main()
{
	char a[] = "1234";   //  문자열 아스키코드 [49,50,51,52,null] 이 입력된 상태.
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
				str[i] = str[i] + 32;                       // 대문자->소문자
			}
			else if (str[i] >= 97 && str[i] <= 122)         // 소문자->대문자
			{
				str[i] = str[i] - 32;
			}
		}

		printf("%s\n", str);
	
	return 0;
}
*/
