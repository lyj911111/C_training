#include <stdio.h>

int main()
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
			scanf("%d %d", &a,&b); 
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