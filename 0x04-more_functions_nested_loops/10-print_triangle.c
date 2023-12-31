#include "main.h"
/**
  * print_triangle - print a triangle using '#'
  * @size: size of triangle
  */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			c = size - a;
			for (b = 1; b < c; b++)
			{
				_putchar(' ');
			}
			for (c = 0; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
