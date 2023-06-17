#include <stdio.h>

/**
 * main - Entry point
 * function - putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (j = 0; j <= 8; j++)
	{
		for (i = j + 1; i <= 9; i++)
		{

			putchar(i + '0');
			putchar(j + '0');

			if (j != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
