#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;  /* Number of bits in the type */

	int flag = 0;  /* To skip leading zeros */

	while (shift >= 0)
	{
		unsigned long int bit = (n >> shift) & 1;  /* Extract the current bit */

		if (bit || flag)  /* Skip leading zeros */
		{
			_putchar(bit ? '1' : '0');  /* Print '1' for 1, '0' for 0 */
			flag = 1;  /* Set the flag to indicate we've encountered a significant bit */
		}

		shift--;  /* Move to the next bit */
	}

	if (!flag)  /* Handle the case when n is 0 */
		_putchar('0');
}
