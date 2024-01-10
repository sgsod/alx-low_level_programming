#include "main.h"
/**
  * print_rev - print string in reverse to stdout followed by newline
  * @s: address of string
  *
  * Return: nothing
  */

void print_rev(char *s)
{
	int a;

	for (a = 0; *(s + a) != '\0'; a++)
	{
	}
	a--;
	for (; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
