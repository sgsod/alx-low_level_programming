/**
  * factorial - compute the factorial of given numbers
  * @n: given number
  * Return: -1 in case of negative input (failure)
  *         factorial of n (success)
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
