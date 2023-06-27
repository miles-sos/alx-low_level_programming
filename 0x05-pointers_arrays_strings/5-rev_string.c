#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string
 * @s: pointer variable
 */
void rev_string(char *s)
{
char tmp;
int x, len1, len2;
len1 = 0;
len2 = 0;
while (s[len1] != '\0')
{
len1++;
}
len2 = len1 - 1;
for (x = 0; x < len1 / 2; x++)
{
tmp = s[x];
s[x] = s[len2];
s[len2--] = tmp;
}
}
