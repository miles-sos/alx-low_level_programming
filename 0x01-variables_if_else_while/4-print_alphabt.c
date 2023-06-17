#include <stdio.h>
/**
 * main - print all letters except e and q
 *
 * Return: 0 (success)
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha == 'q' || alpha == 'e')
{
continue;
}
putchar(alpha);
}
putchar('\n');
return (0);
}
