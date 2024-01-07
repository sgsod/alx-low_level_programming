#include <stdio.h>
/**
  * main - Fizz-Buzz test
  */

void main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 = 0 && n % 5 != 0)
		{
			printf("Fizz ");
			n++;
		}
		if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz ");
			n++;
		}
		if (n % 5 == 0 && n % 3 == 0)
		{
			printf("FizzBuzz ");
			n++;
		}
		printf("%d ", n);
	}
}
