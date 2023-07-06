#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_help(int n, int sqrt);

	int sqrt = 1;

	return (sqrt_help(n, sqrt));
}

/**
 * sqrt_help - help function
 * @sqrt: number to determine the square root
 * @n:  int number
 * Return: square root if natural square root, or -1 if none found
 */

int sqrt_help(int n, int sqrt)
{
	if (n == sqrt * sqrt)
	{
		return (sqrt);
	}
	else if (sqrt < n)
	{
		return (sqrt_help(n, ++sqrt));
	}
	else
	{
		return (-1);
	}
}
