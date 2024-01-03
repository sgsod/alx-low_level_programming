/**
  * _abs - compute the absolute value of an integer
  * @n: integer to be read
  *
  * Return: absolute value
  */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n / -1;
		return (n);
	}
}
