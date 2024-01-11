#include "main.h"
/**
  * puts2 - print every other character of string starting with
  * the first character to stdout followed by newline
  * @str: address of string
  *
  * Return: nothing
  */

void puts2(char *str)
{
	int a;

	for (a = 0; *(str + a) != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(*(str + a));
	}
	if (*(str + a) == '\0')
		_putchar('\n');
}
