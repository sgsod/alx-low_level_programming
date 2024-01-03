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

	temp = _abs(n);
	return (temp % 10);
}
