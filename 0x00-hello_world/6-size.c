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
	printf("Size of a char:");
	scanf("%c byte(s)", &a);		
	printf("Size of an int:");
	scanf("%d byte(s)", &b);	
	printf("Size of a long int:");
	scanf("%ld byte(s)", &c);	
	printf("Size of a long long int:");
	scanf("%lld byte(s)", &d);
	printf("Size of a float:");
	scanf("%f byte(s)", &e);
	return (0);
}
