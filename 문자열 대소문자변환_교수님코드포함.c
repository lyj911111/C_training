#include<stdio.h>
#include<string.h>
#include<math.h>

void convert(char num[], int a);

void main()
{
	int a = 123456789;  //  값 12345가 입력,

	char num[10] = { 0 };    // array 메모리 10칸(10byte)

	convert(num , a);
	printf("%s\n", num);

	
}

void convert(char num[],int a)   //  값 12345가 복사되어 a로옴. int a 값을 char num으로 출력
{
	
	int len = 1;
	int c = a;

	while (c / 10 != 0)   //  a의 길이 len을 구하기 위해 c를 복사해 이용.
	{
		len++;
		c = c / 10;
	}
	

	for (int i= len-1 ; i>=0 ; i--)   // [i = len-1] 큰 숫자를 앞에서 부터 밀어 넣음...
	{
		
		num[i] = a % 10 + '0';             //  [ <- array값 이동방향 ]
		a = a / 10;
										   //num[i] = (len+1) - num[i];   
	}
	num[len] = 0;

}

/*
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

/* 교수님이 작성한 코드.
int main()
{
	char a[] = "1234";   //  문자열 아스키코드 [49,50,51,52,null] 이 입력된 상태.
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

	while (a[len] != 0) len++;   //  len은 카운터숫자
	
	//len = len - 1; // len-- , len -=1

	for (i = 0; i < len; i++)
	{
		//num = (a[i]);
		num = num * 10 + a[i] - '0';
		
	}
	


	return num;
}
*/