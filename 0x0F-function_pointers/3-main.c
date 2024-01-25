#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - perfom simple arithmetic operations
  * @argc: count of arguments
  * @argv: array of arguments
  *
  * Return: 0 (succes), 98 || 99 || 100 (error)
  */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4) /* number of arguments is wrong */
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

/* ( ,)>( ,) trying to (/ or %) with 0 */
	if ((a == 0 || b == 0) && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}

	if (get_op_func(argv[2]) == NULL) /* operator not present */
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", (get_op_func(argv[2]))(a, b));

	return (0);
}
