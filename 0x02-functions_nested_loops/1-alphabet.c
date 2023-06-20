#include "main.h"

/**
 * print_alphabet - Entry point, prints all the lowercase letters in the alphabet
 * Return: 0 (Success)
 */
void print_alphabet(void);
{
	char (alphabet[26]) = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 1; i <= 26; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar('\n');
	return (0);
}
