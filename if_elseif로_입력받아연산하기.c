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


		printf("[A,S,M,D,Q]���� ������ �����Ͻÿ�:");
		scanf(" %c", &x);

	

		if (x == 'A')
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%d %d", &a,&b); 
			result = a + b;

			printf("������ ����� %d\n", result);
		}
		else if (x == 'S')
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
			result = a - b;

			printf("������ ����� %d\n", result);
		}
		else if (x == 'M')
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
			result = a * b;

			printf("������ ����� %d\n", result);
		}
		else if (x == 'D')
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
			result = a / b;

			printf("������ ����� %d\n", result);
		}
		else if (x == 'Q')
		{
			break;
		}
		else
		{
			printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���\n");
		}

		

	} while (x == 'A', 'S', 'M', 'D', 'Q');   // �̰��� �����̸� �ٽ� �ݺ��Ͽ� ����.
	

	return 0;
}