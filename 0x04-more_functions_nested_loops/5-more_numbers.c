#include "main.h"
/**
  * more_numbers - print the numbers 0 - 14, 10 times
  */
void more_numbers(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		c = '0';
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				if (b >= 10)
					_putchar('1');
				if (c > '9')
					c = '0';
			}
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
