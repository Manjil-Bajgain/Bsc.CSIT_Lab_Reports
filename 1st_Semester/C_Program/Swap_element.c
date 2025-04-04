#include <stdio.h>

int main()
{
	printf("Enter even number of elements! (odd number of elements generates error))\n");
	int n;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);

	int arr[n], tmp;

	printf("Enter the numbers:\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	// swap function
	for (int i = 0; i < n; i += 2)
	{
		tmp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = tmp;
	}

	printf("\nList after swap operation: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}