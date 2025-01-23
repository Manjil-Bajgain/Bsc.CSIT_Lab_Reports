int sum(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return n + sum(n - 1); // return 3+2+1+0
	}
}

int main()
{
	int num, result;
	printf("Enter a number to find sum: ");
	scanf("%d", &num);
	result = sum(num);
	printf("%d", result);
	return 0;
}