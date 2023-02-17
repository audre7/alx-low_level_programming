#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then uppercase.
 *
 * Return 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
