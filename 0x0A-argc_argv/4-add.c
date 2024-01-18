#include <stdio.h>
#include <stdlib.h>
/**
  * main - add two positive numbers
  * @argc: number of arguments
  * @argv: arguments
  *
  * Return: 0 success, 1 failure
  */

int main(int argc, char *argv[])
{
	int sum = 0, index, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (index = 1; index < argc; index++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (!(argv[index][j] >= '0' && argv[index][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);

	return (0);
}
