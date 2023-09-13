#include "function_pointers.h"

/**
 * print_name - Prints a name using a callback function.
 * @name: The name to be printed.
 * @f: Function pointer that takes a char pointer as a param
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

