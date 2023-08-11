#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a specified message to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, "
    "2015-10-19\n";
    ssize_t length = sizeof("and that piece of art is useful\" - Dora Korpar, "
    "2015-10-19\n") - 1;

    write(2, message, length);
    return (1);
}
