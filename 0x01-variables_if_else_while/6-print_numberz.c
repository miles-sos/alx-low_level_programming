#include <stdio.h>
/**
 * main - print single digit using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
int baseTen;
for (baseTen = 0; baseTen < 10; baseTen++)
{
putchar('0' + baseTen);
}
putchar('\n');
return (0);
}
