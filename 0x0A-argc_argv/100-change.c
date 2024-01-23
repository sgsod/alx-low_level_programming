#include <stdio.h>
#include <stdlib.h>
/**
  * main - print minimum number of coins for change
  * @argc: number of arguments
  * @argv: arguments
  *
  * Return: 0 success,0 1 failure
  */

int main(int argc, char *argv[])
{
	int count = 0, rem, amnt, arr[5];

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	amnt = atoi(argv[1]);
	if (amnt <= 0)
	{
		printf("0\n");
		return (0);
	}
	if (amnt >= 25)
	{
		count = amnt / 25;
		if (amnt % 25 == 0)
		{
			printf("%d\n", count);
			return (0);
		}
		rem = amnt % 25;
	}

	if (amnt >= 10)
	{
		if (amnt > 25)
			amnt = rem;
		count += (amnt / 10);
		if (amnt % 10 == 0)
		{
			printf("%d\n", count);
			return (0);
		}
		rem = amnt % 10;
	}

	if (amnt >= 5)
	{
		if (amnt > 10)
			amnt = rem;
		count += (amnt / 5);
		if (amnt % 5 == 0)
		{
			printf("%d\n", count);
			return (0);
		}
		rem = amnt % 5;
	}

	if (amnt >= 2)
	{
		if (amnt > 5)
			amnt = rem;
		count += (amnt / 2);
		if (amnt % 2 == 0)
		{
			printf("%d\n", count);
			return (0);
		}
		rem = amnt % 2;
	}

	if (amnt > 2)
		amnt = rem;
	count += amnt;
	printf("%d\n", count);
	return (0);
}
