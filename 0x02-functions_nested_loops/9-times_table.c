#include "main.h"

/**
  * times_table - print 9 times table
  *
  * Return: nothing
  */

void times_table(void)
{
	int a, b, multi;
	int num1, num2;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			multi = a * b;
			num1 = multi % 10;
			num2 = multi / 10;
			if (num2 > 0)
			{
				_putchar(num2 + '0');
			}
			else
				if (b > 0)
				{
					_putchar(' ');
				}
			_putchar(num1 + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
