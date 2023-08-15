#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int j = 0;
	char c = 'a';

	while (j < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		j++;
		c = 'a';
		_putchar('\n');
	}
}
