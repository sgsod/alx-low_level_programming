/**
  * _pow_recursion - compute x to the power of y
  * @x: value
  * @y: exponent
  * Return: -1 for negative exponents
  *          1 for exponent 0
  *          x for all other valid exponents
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
