#include <stdio.h>

int main()
{
	int i,j,x;
	int k;

	
		i = 1;
		for (j = 0; j < i; j++)      
		{	
			printf("������ ����(����: -1):");
			scanf("%d", &x);
			
			if (x < 1 || 50 < x)
			{
				printf("1 ���� 50 ���̿��� �Է��Ͻÿ�.\n");
				continue;
			}

			for (i = 1; i <= x; i++)  
			{
				printf("*");
			}
			printf("\n");    // ��������, i=11, j=0
			//break;
		}

	return 0;
}

