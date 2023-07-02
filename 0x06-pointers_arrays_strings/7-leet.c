#include "main.h"
#include <string.h>
/**
 * leet - a function that encodes a string into 1337
 * @str: string to be encoded
 * Return: pointer to char
 */
char *leet(char *str)
{
char *s = str;
char *leetChars = "aAeEoOtTlL";
char *charReplacement = "4433007711";

int i; 
unsigned int j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < strlen(leetChars); j++)
{
if (str[i] == leetChars[j])
{
str[i] = charReplacement[j];
break;
}
}
}
return (s);
}
