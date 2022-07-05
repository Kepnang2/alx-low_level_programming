#include "main.h"
/**
 * print_alphabet_x10 -> in the lowercase followed a new line
 * Return: always (Success)
 */
void print_alphabet_x10(void);
{
	int c, x;

	for (x = 0; x < 9; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
