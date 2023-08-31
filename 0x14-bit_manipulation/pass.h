#ifndef PASS_H
#define PASS_H

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
