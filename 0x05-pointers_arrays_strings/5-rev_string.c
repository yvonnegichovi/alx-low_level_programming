#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: (0)
 */

void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char *end = s;
	char temp;

	while (*end != ('\0'))
	{
		len++;
		end++;
	}
	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
