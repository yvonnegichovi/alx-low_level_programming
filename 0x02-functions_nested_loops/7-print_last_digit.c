#include "main.h"

/**
 * print_last_digit - prints the lastdigit of a number
 * @n: int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar(lastDigit);
	return (n);
}
