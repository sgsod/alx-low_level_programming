/**
  * _islower - check if character is lower case
  * @c: character to be checked
  *
  * Return: 1 if c is lowercase, otherwise 0
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
