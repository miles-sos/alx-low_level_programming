#include "3-calc.h"
#include <stdio.h>
/**
 * main - entry point to the calc program
 * @argc: argument count
 * @argv: argument vector
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, res;
	char op_result;

	int (*a_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	a_func = get_op_func(argv[2]);

	if (!a_func)
	{
		printf("Error\n");
		exit(99);
	}

	op_result = *argv[2];

	if (arg2 == 0 && (op_result == '/' || op_result == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	res = a_func(arg1, arg2);

	printf("%d\n", res);

	return (0);
}
