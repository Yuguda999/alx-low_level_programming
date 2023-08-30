/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to calculate the length for.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: If the current character is the null terminator, return 0 */
	if (*s == '\0')
	{
		return (0);
	}

	/* Recursive case: Increment the length by 1 and move to the next character */
	return (1 + _strlen_recursion(s + 1));
}
