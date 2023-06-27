#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
char *newStr = str;

int i;

for (i = 0; newStr[i] != '\0'; newStr++)
{
if (newStr[i] % 2 == 0)
_putchar(newStr[i]);
}
_putchar('\n');
}
