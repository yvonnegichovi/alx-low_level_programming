#include "pass.h"

/**
 * main - Entry point
 * Return: 0 when successful
 */

int main(void)
{
	char *password = malloc(sizeof(char) * 5);
	char b[5] = {'H', 'o', 'l', 4, '\0'}, run[100];
	int x;

	for (x = 0; b[x]; x++)
		password[x] = b[x];
	password[x] = '\0';

	sprintf(run, "echo %s > 101-password", password);
	system(run);
	return (0);
}

