#include <stdio.h>
/**
 * main - a program that prints
 * all arguments it receives.
 * @argc: argument count
 * @argv: array of arguments
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
