#include "main.h"
/**
 * is_palindrome - a function that returns1
 * if a string is a palindrome and 0 if not
 * @s: string to check for
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
int findLength(char *str);
int checkPal(char *s, int len);

int length = findLength(s) - 1;
return (checkPal(s, length));
}
/**
 * findLength - find the length of string
 * @str: string passed
 * Return: length of string
 */
int findLength(char *str)
{
if (*str == '\0')
{
return (0);
}
return (1 + findLength(str + 1));
}
/**
 * checkPal - checks if the string is a palindrome
 * @s: string passed from calling function
 * @len: length of the string passed
 * Return: 1 or 0
 */
int checkPal(char *s, int len)
{
if (*s == *(s + len))
{
if (len <= 1)
{
return (1);
}
return (checkPal(s + 1, len - 2));
}
return (0);
}
