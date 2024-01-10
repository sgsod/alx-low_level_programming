#include "main.h"
/**
  * _puts - print string to stdout followed by newline
  * @str: address of string
  *
  * Return: nothing
  */

int _puts(char *str)
{
	int a;

	for (a = 0; *(str + a) != '\0'; a++)
	{
		_putchar(*(str + a));
	}
	if (*(str + a) == '\0')
		_putchar('\n');

	return (a);
}
