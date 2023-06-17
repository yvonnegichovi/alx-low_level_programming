#include <stdio.h>
/**
 * main - entry point
 * funtion - sizeof
 * return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (long unsigned int)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (long unsigned int)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (long unsigned)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (long unsigned)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (long unsigned)sizeof(e));
	return (0);
}
