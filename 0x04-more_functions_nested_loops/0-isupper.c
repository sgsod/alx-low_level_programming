#include "main.h"
/**
  * _isupper - check if character is uppercase
  * @c: character to be checked
  * Return: 1 if c is uppercase, 0 otherwise
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
}
