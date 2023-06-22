#include "main.h"
/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14 followed by a new line
 * Return: numbers 0 to 14 10x
 */
void more_numbers(void)
{
int i = 0;
int j;

while (i <= 10)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
i++;
_putchar('\n');
}
}
