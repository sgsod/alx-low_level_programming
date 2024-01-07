#include <stdio.h>
/**
  * main - Fizz-Buzz test
  * Return: always 0 success
  */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
			printf("Fizz ");

		else if (n % 5 == 0 && n % 3 != 0)
			printf("Buzz ");

		else if (n % 5 == 0 && n % 3 == 0)
		{
			if (n == 100)
				printf("FizzBuzz\n");
			else
				printf("FizzBuzz ");
		}

		else
			printf("%d ", n);
	}
	return (0);
}
