/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The result of x raised to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		/* Return -1 to indicate an error for negative y */
		return (-1);
	}
	else if (y == 0)
	{
		/* Any value raised to the power of 0 is 1 */
		return (1);
	}
	else
	{
		/* Recursive case: Multiply x by _pow_recursion(x, y - 1) */
		return (x * _pow_recursion(x, y - 1));
	}
}
