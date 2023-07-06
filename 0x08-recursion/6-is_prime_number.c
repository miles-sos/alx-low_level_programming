#include "main.h"
/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: nunber passed to be checked
 * Return: prime number
 */
int is_prime_number(int n)
{
int is_prime_help(int n, int divisor);
return (is_prime_help(n, 2));
}
/**
 * is_prime_help - function that helps to check
 * if a number is a prime number
 * @n: number given
 * @divisor: number used to divide given num
 * Return: 1 or 0
 */
int is_prime_help(int n, int divisor)
{
if (n <= 1)
{
return (0);
}
if (n % divisor == 0)
{
return (0);
}
if (divisor * divisor > n)
{
return (1);
}
return (is_prime_help(n, divisor + 1));
}
