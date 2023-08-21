#include "main.h"

/**
 * puts_half - prints half of a string to stdout
 *
 * @str: the string
 */

void puts_half(char *str)
{
	/* Figure out the length first */
	int len = 0;
	int i;

	while (str[len])
		len++;

	for (i = 0; i <= len; i++)
	{
		if (i >= len / 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
