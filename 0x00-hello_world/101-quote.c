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
const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, quote, 59);  /* Write the quote to standard error */
return (1);  /* Return 1 as specified */
}
