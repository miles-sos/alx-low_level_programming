#include "main.h"
#include <string.h>

/**
 * print_rev -  prints a string, in reverse,
 * followed by a new line.
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int len;
int x;
len = strlen(s);
x = len - 1;

while (x >= 0)
{
_putchar(s[x]);
x--;
}
_putchar('\n');
}
