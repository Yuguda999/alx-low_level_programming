#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n number of array elements
 *
 * @n: size of the array
 *
 * @a: the array
 */

void print_array(int *a, int n)
{
	int i = 0;

	while(i <= n)
	{
		printf("%d",a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
