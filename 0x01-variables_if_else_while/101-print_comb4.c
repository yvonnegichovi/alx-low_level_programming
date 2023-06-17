#include <stdio.h>

/**
 * main - Entry point
 * function - putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (k = 0; k <= 7; k++)
	{
		for (j = k + 1; j <= 8; j++)
		{
			for (i = j + 1; i <= 9; i++)
			{
				putchar(k + '0');
				putchar(j + '0');
				putchar(i + '0');

				if (k != 7 || j != 8 || i != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
