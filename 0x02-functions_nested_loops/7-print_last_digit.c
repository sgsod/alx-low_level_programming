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

	if (n >= 0)
	{
		temp = n;
	}
	else
	{
		temp = n / -1;
	}
	_putchar('temp % 10');
	return (temp % 10);
}
