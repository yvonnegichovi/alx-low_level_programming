#include <stdio.h>

/**
 * main - Entry point
 * function - putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
