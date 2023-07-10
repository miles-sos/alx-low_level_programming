#include <stdio.h>
/**
 * main - a program that prints its name,
 * followed by a new line.
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
