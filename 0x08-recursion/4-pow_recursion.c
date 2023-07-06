#include "main.h"
/**
 * _pow_recursion - function that returns
 * the value of x raised to the power of y
 * @x: base value
 * @y: power value
 * Return: the value of x**y
 */
int _pow_recursion(int x, int y)
{
	/* x should never be < 1 */
	/* y should never be < 0 */
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0 || x == 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}

