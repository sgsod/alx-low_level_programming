#include "main.h"
/**
  * print_line - print a line on terminal
  * @n: number of '_'
  */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
