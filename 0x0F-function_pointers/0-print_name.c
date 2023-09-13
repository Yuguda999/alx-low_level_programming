#include <stdio.h>

/**
 * print_name - Prints a name using a callback function.
 * @name: The name to be printed.
 * @f: A function pointer that takes a char pointer as a parameter.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

