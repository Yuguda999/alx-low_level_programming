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
ssize_t length = sizeof("and that piece of art is useful\" - Dora Korpar, ");
char *date = "2015-10-19\n";
ssize_t date_length = sizeof("2015-10-19\n");

write(2, message, length - 1);
write(2, date, date_length - 1);

return (1);
}
