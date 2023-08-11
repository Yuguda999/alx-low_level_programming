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
    
char *combined_message = message_part1;
combined_message = strcat(combined_message, message_part2);

ssize_t length = sizeof(message_part1) + sizeof(message_part2) - 2;

write(2, combined_message, length);
return (1);
}
