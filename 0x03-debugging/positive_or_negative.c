#include <stdio.h>
/**
 * positive_or_negative - a program that checks for positive/negative
 *
 * Description: gives negative or positive of any number
 * @i: number to be tested by function
 * Return: number is positive or negative
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%i is negative\n", i);
	}
	else
	{
		printf("%i is positive\n", i);
	}
}

