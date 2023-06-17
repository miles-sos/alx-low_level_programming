#include <stdio.h>
/**
 * main - prints all alphabets on a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
