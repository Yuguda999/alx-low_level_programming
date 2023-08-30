#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Pointer to the string to be printed in reverse
 *
 * Description: This function recursively prints each character of the string
 * @s in reverse order.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Base case: end of string */
		return;
	}

	/* Recurse to the next character */
	_print_rev_recursion(s + 1);

	/* Print the current character */
	_putchar(*s);
}
