#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1); /* ignores name of prog */
	return (0);
}
