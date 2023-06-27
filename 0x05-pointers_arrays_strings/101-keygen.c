#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int pass[150];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 150; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((3000 - sum) - '0' < 78)
		{
			n = 3000 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

