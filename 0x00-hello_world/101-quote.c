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
    char mssg;
    mssg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    char *message = mssg
    ssize_t length = sizeof(mssg);
    write(2, message, length - 1);
    return (1);
}
