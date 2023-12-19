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
		while (b <= '9')
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
			b++;
		}
		a++;
	}
	putchar(10);

	return (0);
}
