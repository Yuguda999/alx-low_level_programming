#include "main.h"

/**
 * print_sign - prinys the sign of a number
 *
 * @n: number to check
 *
 * Return: returns 1 if n > o, 0 if n =0 and -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
