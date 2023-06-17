#include <stdio.h>

/**
 * main - Entry point
 * function - putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int first_digit_i = i / 10;
			int second_digit_i = i % 10;
			int first_digit_j = j / 10;
			int second_digit_j = j % 10;

			putchar(first_digit_i + '0');
			putchar(second_digit_i + '0');
			putchar(' ');
			putchar(first_digit_j + '0');
			putchar(second_digit_j + '0');

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
