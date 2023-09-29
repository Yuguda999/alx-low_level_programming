/**
 * flip_bits - Returns the number of bits to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;  /* Initialize a count for differing bits */

	/* Count the set bits (1s) in the XOR result */
	while (xor_result > 0)
	{
		count += xor_result & 1;  /* Check the least significant bit */
		xor_result >>= 1;  /* Shift right to check the next bit */
	}

	return (count);
}
