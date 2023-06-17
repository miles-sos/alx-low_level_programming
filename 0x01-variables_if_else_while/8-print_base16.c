#include <stdio.h>
/**
* main - Print all base 16 numbers in LC
*
* Return: 0 (Success)
*/
int main(void)
{
int digit;
while (digit < 10)
{
putchar('0' + digit);
digit++;
}
digit = 'a';
while (digit <= 'f')
{
putchar(digit);
digit++;
}
putchar('\n');
return (0);
}
