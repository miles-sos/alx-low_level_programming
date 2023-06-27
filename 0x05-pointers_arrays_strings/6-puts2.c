#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
char *newStr = str;

int i = 0;

while (newStr[i] != '\0')
{
if (newStr[i] % 2 == 0)
_putchar(newStr[i]);
i++;
}
_putchar('\n');
}
