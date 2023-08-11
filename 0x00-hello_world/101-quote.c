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
    char *message = "and that piece of art is useful\" - Dora Korpar, ";
    char *date = "2015-10-19\n";

    write(2, message, sizeof(message) - 1);
    write(2, date, sizeof(date) - 1);
    
    return (1);
}
