#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: 0
 */

void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar(j / 10 + '0');
			_putchar((j % 10) + '0');
			_putchar('.');
			_putchar(i / 10 + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
