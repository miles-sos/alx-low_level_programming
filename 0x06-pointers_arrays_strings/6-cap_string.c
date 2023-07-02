#include "main.h"
#include <ctype.h>
/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: the string to be capitalized
 * Return: pointer to character
 */
char *cap_string(char *str)
{
char *s = str;
int capitalizeNext = 1;

/* Loop through the string of chars */
while (*str != '\0')
{
if (capitalizeNext && isalpha(*str))
{
*str = toupper(*str);
capitalizeNext = 0;
}
else if (!isalnum(*str) && *str != '-' && isalpha(*(str + 1)))
{
capitalizeNext = 1;
}
str++;
}
return (s);
}
