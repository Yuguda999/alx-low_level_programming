#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: Pointer to the string to be printed
 *
 * Description: This function recursively prints each character of the string
 * @s followed by a new line character.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Print a new line when the end of the string is reached */
		_putchar('\n');
		return;
	}

	/* Print the current character and call the function with the next character */
	_putchar(*s);
	_puts_recursion(s + 1);
}
