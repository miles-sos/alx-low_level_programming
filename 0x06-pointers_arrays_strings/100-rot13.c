#include "main.h"
#include <string.h>
#define SIZE 52
/**
 * rot13 - a function that encodes a string using rot13
 * @str: string to be decoded
 * Return: pointer to character
 */
char *rot13(char *str)
{
char *s = str;
char *a = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char *b = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

int i;
int j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < SIZE; j++)
{
if (str[i] == a[j])
{
str[i] = b[j];
break;
}
}
}
return (s);
}
