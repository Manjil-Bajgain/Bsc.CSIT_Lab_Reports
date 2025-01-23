#include <stdio.h>

int main()
{
	int a, b;

	for (a = 6; a >= 0; a--)
	{
		for (b = 1; b <= a; b++)
		{
			if (b % 2 == 0)
			{
				printf("A");   //you can also use 0 or 1 and * instead of A and B. 
			}
			else
			{
				printf("B");
			}
		}
		printf("\n");
	}

	return 0;
}