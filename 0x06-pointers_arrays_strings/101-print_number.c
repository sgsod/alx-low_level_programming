#include "main.h"
/**
  * print_number - print integers using _putchar
  * @n: interger to be printed
  */
void print_number(int n)
{
	int m, a = 1000000000;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n == 0)
		_putchar('0');
	for (m = 0; a >= 1; m++)
	{
		if (n > a)
			_putchar('0' + ((n / a) % 10));
		a = a / 10;
	}
}
