#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line.
 * Description: no standard libraries allowed.
 * Return: 0
 */

int main(void)
{
char myStr[] = "_putchar";
int i = 0;

while (myStr[i] != '\0')
{
_putchar(myStr[i]);
i++;
}
_putchar('\n');

return (0);
}

