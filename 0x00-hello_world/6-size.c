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

	printf("Size of a char: %c byte(s)\n", (char)sizeof(a));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", (long int)sizeof(c));
	printf("Size of a long long int: %lld byte(s)\n", (long long int)sizeof(d));
	printf("Size of a float: %f byte(s)\n", (float)sizeof(e));
	return (0);
}
