#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 */

void print_alphabet_x10(void);
{
	int c;
	int x;

	for (x = 0; x < 9; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
