#include "main.h"
/**
  * print_most_numbers - print the numbers 0 - 9, except 2 and 4
  */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
			a++;
		_putchar(a);
	}
	_putchar('\n');
}
