#include "main.h"

/**
 *print_alphabet_x10 - print 10 times an alphabet in lowercae, followed by a new line
 *
 * Return: Always 0 (Sucess)
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
