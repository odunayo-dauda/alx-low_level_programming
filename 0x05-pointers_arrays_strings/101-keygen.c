#include <stdlib.h>
#include <time.h>
#include "main.h"

int _putchar(char c);

int main(void)
{
	int i, length;
	char password[13];

	srand(time(NULL));

	char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	length = rand() % 12 + 1;

	for (i = 0; i < length; i++)
	{
		password[i] = valid_chars[rand() % 62];
	}

	password[length] = '\0';

	for (i = 0; i < length; i++)
	{
		_putchar(password[i]);
	}

	_putchar('\n');

	return (0);
}
