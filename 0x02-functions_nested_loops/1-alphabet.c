#include "main.h"

/**
 * main - a function that prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
print_alphabet();
return (0);
}
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
