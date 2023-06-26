#include "main.h"
#include <string.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
int i;
int length;
length = strlen(str);

for (i = 0; i <= length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
