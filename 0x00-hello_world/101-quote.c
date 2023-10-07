#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints a specific quote to the standard error.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, quote, 59);
return (1);
}
