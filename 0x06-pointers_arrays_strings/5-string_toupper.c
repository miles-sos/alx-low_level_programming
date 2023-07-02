#include "main.h"
#include <ctype.h>
/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @str: pointer
 * Return: pointer to a string
 */
char *string_toupper(char *str)
{
char *s = str;

while (*str != '\0')
{
*str = toupper(*str);
str++;
}
return (s);
}
