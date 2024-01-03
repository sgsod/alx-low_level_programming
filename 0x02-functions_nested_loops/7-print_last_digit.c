#include "main.h"
/**
  * print_last_digit - print last digit of a value
  * @n: given value
  *
  * Return: last digit
  */

int print_last_digit(int n)
{
	int temp;
	int m;

	if (n >= 0)
	{
		temp = n % 10;
	}
	else
	{
		m = -n;
		temp = m % 10;
	}
	_putchar('0' + temp);
	return (temp);
}
