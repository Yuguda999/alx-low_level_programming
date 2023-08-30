#include <stdio.h>

/**
 * print_diagsums - Print the sum of the diagonals of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the matrix (number of rows/columns)
 *
 * Description: calculates and prints the sum of the two diagonals
 * of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum_main = 0, sum_secondary = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_main += *(a + i * size + i);
		sum_secondary += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum_main, sum_secondary);
}
