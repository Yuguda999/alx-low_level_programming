#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Print values of different types based on the format.
 * @format: A list of types of arguments passed to the function.
 *           c: char
 *           i: integer
 *           f: float
 *           s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0;
	char f = format[i];

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (format[i] == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (format[i] == 'f')
			printf("%s%f", separator, va_arg(args, double));
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, str);
		}

		separator = ", ";
		i++;

		if (f)
		{
			while (f != 'c' && f != 'i' && f != 'f' && f != 's' && f)
				i++;
		}
	}

	va_end(args);

	printf("\n");
}
