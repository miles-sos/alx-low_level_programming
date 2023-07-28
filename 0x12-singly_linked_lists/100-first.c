#include <stdio.h>

/**
 * print_before_main - a function that
 * prints some message before the main
 * function is executed
 * Return: void
 */
void print_before_main(void)
{
	/* Print the messages using puts */
	puts("You're beat! and yet, you must allow,");
	puts("I bore my house upon my back!");
}

/* Declare the function as a constructor */
void print_constructor(void) __attribute__((constructor));

/* The constructor function will be called before main */

/**
 * print_constructor - constructor
 * Return: void
 */
void print_constructor(void)
{
	print_before_main();
}
