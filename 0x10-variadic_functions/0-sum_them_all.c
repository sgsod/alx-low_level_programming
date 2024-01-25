#include <stdarg.h>
/**
  * sum_them_all - sum up arguments
  * @n: number of arguments
  *
  * Return: sum of arguments or 0 if n == 0
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int c, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (c = 0; c < n; c++)
	{
		sum += va_arg(args, int);
	}

	return (sum);
}
