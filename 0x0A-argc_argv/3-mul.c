#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: array of arguments
 * Return: product of two numbers
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		int result;

		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
