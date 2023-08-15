# include "main.h"

/**
 * _isalpha - checks if a charavter is lower case
 *
 * @c: character to check
 *
 * Return: Returns 1 if alphabet else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
