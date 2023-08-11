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
    char *message_part1 = "and that piece of art is useful\" - Dora Korpar, ";
    char *message_part2 = "2015-10-19\n";
    
    ssize_t length_part1 = sizeof("and that piece of art is useful\" - Dora Korpar, ") - 1;
    ssize_t length_part2 = sizeof("2015-10-19\n") - 1;

    write(2, message_part1, length_part1);
    write(2, message_part2, length_part2);

    return (1);
}
