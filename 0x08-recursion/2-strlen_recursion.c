#include "main.h"
/**
  * _strlen_recursion - compute length of string using recursion (exclude '\0')
  * @s: given string
  * Return: length of string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
