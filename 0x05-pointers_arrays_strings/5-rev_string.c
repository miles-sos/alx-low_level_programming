#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
int len;
int x;
len = strlen(s) - 1;
x = len;
while (x >= 0)
{
_putchar(s[x]);
x--;
}
_putchar('\n');
}
