#include "main.h"

/**
 * main - a functions that check for lowercase character
 * @c: the charcter to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c >= 122)
		return 1;
	else
		return 0;
}