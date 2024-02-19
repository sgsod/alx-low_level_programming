#include "main.h"
/**
  * print_binary - print integer value in binary
  * @n: value to convert
  */
void print_binary(unsigned long int n)
{
	long int expo;
	unsigned long int comp = 1;
	char b;

	while (n > comp)
	{
		expo++;
		comp = 1 << expo;
	}
	if (comp > n && n != 0)
	{
		expo--;
		comp = 1 << expo;
	}
	while (expo >= 0)
	{
		b = (n & comp) == comp ? '1' : '0';
		_putchar(b);
		expo--;
		comp = 1 << expo;
	}
}
