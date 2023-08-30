/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
	{
		/* Return -1 to indicate an error for negative n */
		return (-1);
	}
	else if (n == 0)
	{
		/* Factorial of 0 is 1 */
		return (1);
	}
	else
	{
		/* Recursive case: Multiply n by factorial of (n - 1) */
		return (n * factorial(n - 1));
	}
}
