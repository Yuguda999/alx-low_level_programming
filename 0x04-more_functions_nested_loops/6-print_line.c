#include "main.h"

/**
 * print_line - prints n nuber of lines;
 *
 * @n: number of line(s) to print
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
