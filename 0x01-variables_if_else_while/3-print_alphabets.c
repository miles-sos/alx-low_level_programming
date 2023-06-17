#include <stdio.h>
/**
 * main - prints all alphabets on a new line
 * both lowercase and uppercase
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
for (alpha = 'A'; alpha <= 'Z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
