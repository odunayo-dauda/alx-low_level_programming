#include <stdio.h>

/**
 * fizz_buzz - Prints Fizz, Buzz, or FizzBuzz for multiples of 3 and 5.
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
		else
			printf("\n");
	}
}
/**
 * main - Entry point of the program.
 *  Return: 0 (success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
