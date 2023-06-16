#include <stdio.h>

/**
 * main - entry point
 * function - putchar
 * Return: (0) (Success)
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXY";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
