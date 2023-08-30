#include <stdio.h>

/**
 * print_chessboard - Print a chessboard
 * @a: Pointer to a 2D array representing the chessboard
 *
 * Description: This function prints a chessboard using the given 2D array.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
