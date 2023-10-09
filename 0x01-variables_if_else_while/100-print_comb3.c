#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by a comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same
 * combination of the numbers 0 and 1
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 98; i++)
{
for (j = i + 1; j <= 99; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');

if (!(i == 98 && j == 99))
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
