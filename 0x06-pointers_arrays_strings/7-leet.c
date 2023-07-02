#include "main.h"
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
int j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == leetChars[j])
{
str[i] = charReplacement[j];
}
}
}
return (s);
}
