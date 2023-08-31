#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int get_endianness(void);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);

#endif /* MAIN_H */

#ifndef NO_PASS
#define NO_PASS

/**
 * struct char_group - struct
 * @x: passgroup
 * @next: next
 */

typedef struct char_group
{
	char_x x;
	struct char_group *next;
} char_pass;

/**
 * struct char_character - struct
 * @b: character
 * @next: next
 */

typedef struct char_character
{
	int b;
	struct char_character *next;
} char_x;

#endif /* NO_PASS */
