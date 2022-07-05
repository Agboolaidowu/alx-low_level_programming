#include "main.h"

/**
 * print alphabet- prints the alphabet in lowercase,
 * followed by a new line
 */

void print_alphabet(0)
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
