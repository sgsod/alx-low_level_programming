#include "main.h"
/**
  * _print_rev_recursion - print string in reverse
  * @s: string to be printed
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		s--;
		rev_print(s);
		return;
	}
	s++;
	_print_rev_recursion(s);
}
/**
  * rev_print - helping function to _print_rev_recursion
  * @s: the last printable character in string (before '\0')
  */
void rev_print(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s--);
	rev_print(s);
}
