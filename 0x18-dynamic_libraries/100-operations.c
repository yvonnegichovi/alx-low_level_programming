#include "main.h"

/**
 * add - adds two integers
 * @a: first interger
 * @b: second interger
 * Return: the sum of a and b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two intergers
 * @a: firdt interger
 * @b: second interger
 * Return: the difference of a and b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two iintergers
 * @a: first interger
 * @b: second interger
 * Return: the product of a and b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two intergers
 * @a: first interger
 * @b: second interger
 * Return: a divided by b
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - calculates the remainder of the division of two intergers
 * @a: first interger
 * @b: second interger
 * Return: the modulus of a as a result of b
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0);
}
