#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - Checks if a string consists of digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * print_error_exit - Prints "Error" and exits with status 98
 */
void print_error_exit(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * allocate_result_memory - Allocates memory for the result array
 * @len: The length of the array
 *
 * Return: A pointer to the allocated memory
 */
int *allocate_result_memory(int len)
{
	int *result = calloc(len, sizeof(int));

	if (result == NULL)
		print_error_exit();
	return (result);
}

/**
 * calculate_product - Calculates the product of two numbers
 * @result: The array to store the result
 * @num1: The first number as a string
 * @num2: The second number as a string
 * @len1: The length of num1
 * @len2: The length of num2
 */
void calculate_product(int *result, char *num1, char *num2, int len1, int len2)
{
	int i, j, carry = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;

			result[i + j + 1] = product % 10;
			carry = product / 10;
		}
		result[i + j + 1] = carry;
	}
}

/**
 * print_result - Prints the result array to stdout
 * @result: The array to print
 * @len: The length of the array
 */
void print_result(int *result, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		if (result[i] != 0)
			break;
	}

	if (i == len)
		_putchar('0');
	else
	{
		for (; i < len; i++)
			_putchar(result[i] + '0');
	}
	_putchar('\n');
	free(result);
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: The first number as a string
 * @num2: The second number as a string
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0;
	int len_result = 0;
	int *result = allocate_result_memory(len_result);

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	len_result = len1 + len2;

	calculate_product(result, num1, num2, len1, len2);

	print_result(result, len_result);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error_exit();

	multiply(argv[1], argv[2]);

	return (0);
}
