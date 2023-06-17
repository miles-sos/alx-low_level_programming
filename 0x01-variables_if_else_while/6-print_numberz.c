#include <stdio.h>
/**
 * main - print single digit using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
int baseTen;
char baseT;

for (baseTen = 0; baseTen < 10; baseTen++)
{
baseT = '0' + baseTen;
putchar(baseT);
}
putchar('\n');
return (0);
}
