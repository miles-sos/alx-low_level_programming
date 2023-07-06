#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * @s: string to be printed
 * return: void
 */
void _puts_recursion(char *s)
{
	while (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
