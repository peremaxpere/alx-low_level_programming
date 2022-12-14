#include "main.h"
/**
 * print_alphabet - print the alphabet in lower case
 */
void print_alphabet(void)
{
	char lower_alph;

	for (lower_alph = 'a'; lower_alph <= 'z'; lower_alph++)
	{
		_putchar(lower_alph);
	}

	_putchar('\n');
}
