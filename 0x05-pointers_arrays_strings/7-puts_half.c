#include "main.h"
/**
  * puts_half - print second half of string if number of characters is odd
  * print last half where n = (length_of_the_strin - 1) / 2 followed by newline
  * @str: address of string
  *
  * Return: nothing
  */

void puts_half(char *str)
{
	int a;

	for (a = 0; *(str + a); a++)
	{
	}
	a = a / 2;
	while (*(str + a))
	{
		_putchar(*(str + a));
		a++;
	}
	if (*(str + a) == '\0')
		_putchar('\n');
}
