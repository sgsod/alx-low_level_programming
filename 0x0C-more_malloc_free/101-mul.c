#include <stdio.h>
#include <stdlib.h>

int _isdigit(int argc, char *argv[]);
/**
  * main - multiply two numbers
  * @argc: number of arguments
  * @argv: arguments
  *
  * Return: 0 success, 1 failure
  */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	_isdigit(argc, argv);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);

	return (0);
}
/**
  * _isdigit - check if input is digit
  * @argc: number of arguments
  * @argv: arguments
  *
  * Return: 0 success, 98 failure
  */

int _isdigit(int argc, char *argv[])
{
	int index, j;

	for (index = 1; index < argc; index++)
	{
		for (j = 0; argv[index][j] != '\0'; j++)
		{
			if (!(argv[index][j] >= '0' && argv[index][j] <= '9'))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	return (0);
}
