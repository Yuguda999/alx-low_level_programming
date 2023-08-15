# include "main.h"

/**
 * _islower - checks if a charavter is lower case
 *
 * @c: character to check
 *
 * Return: Returns 1 if lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
