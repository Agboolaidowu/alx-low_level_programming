#include "main.h"

/**
 * print alphabet- prints the alphabet in lowercase,
 * followed by a new line
 * @ch:alphabet.
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
