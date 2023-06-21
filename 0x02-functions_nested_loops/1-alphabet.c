#include "main.h"

/**
 * print_alphabet - prints all aphabets in lowercase
 *
 * Description: They are sorted by default
 * return (0)
 */
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
