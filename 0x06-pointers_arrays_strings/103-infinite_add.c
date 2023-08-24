#include <stdio.h>

/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = 0;
	int len1 = 0, len2 = 0;
	int j;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	len1--;
	len2--;

	while (len1 >= 0 || len2 >= 0 || carry)
	{
		int digit1 = len1 >= 0 ? n1[len1] - '0' : 0;
		int digit2 = len2 >= 0 ? n2[len2] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[i] = (sum % 10) + '0';

		len1--;
		len2--;
		i++;

		if (i >= size_r)
			return (0);
	}

	for (j = 0; j < i / 2; j++)
	{
		char temp = r[j];

		r[j] = r[i - j - 1];
		r[i - j - 1] = temp;
	}

	r[i] = '\0';
	return (r);
}
