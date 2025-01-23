#include <stdio.h>
int main()
{
	//	int a[3][4] = {1, 2, 3, 4, 5 ,6 ,7, 8, 9 ,10, 11, 12}, i, j;
	int a[3][4], i, j;
	printf("Enter 12 integer numbers ");

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i <= 2; i++)
	{ // row
		for (j = 0; j <= 3; j++)
		{ // column
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}