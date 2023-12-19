#include <stdio.h>

/**
  * main - entry point
  * Description: print possible combinations of two digits
  *
  * Return: 0
  */

int main(void)
{
	short a, b;

	a = b = '0';
	while (a <= '8')
	{
		for (b = 0; b <= '9'; b++)
		{
			if (b > a && b != a)
			{
				putchar(a);
				putchar(b);
				if (a < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		a++;
	}
	putchar(10);

	return (0);
}
