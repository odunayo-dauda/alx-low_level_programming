#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, length;
	char password[12];

	srand(time(NULL));

	char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	length = rand() % 12 + 1;

	for (i = 0; i < length; i++)
	{
		password[i] = valid_chars[rand() % 62];
	}

	password[length] = '\0';

	printf("%s\n");

	return (0);
}
