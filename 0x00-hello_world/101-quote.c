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
    
    ssize_t length_part = sizeof(message_part1 + message_part2) - 1;

    write(2, message_part1, length_part / 2);
    write(2, message_part2, length_part / 2);

    return (1);
}
