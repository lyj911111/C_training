#include <stdio.h>

int main()
{
	int i,j,x;
	int k;

	
		i = 1;
		for (j = 0; j < i; j++)      
		{	
			printf("막대의 높이(종료: -1):");
			scanf("%d", &x);
			
			if (x < 1 || 50 < x)
			{
				printf("1 부터 50 사이에서 입력하시오.\n");
				continue;
			}

			for (i = 1; i <= x; i++)  
			{
				printf("*");
			}
			printf("\n");    // 끝났을때, i=11, j=0
			//break;
		}

	return 0;
}

