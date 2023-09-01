#include "main.h"

/**
 * _isupper - check if a character is uppercase
 *
 * Return: returns 1 if uppercase else 0
 *
 * @c: character to check
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
