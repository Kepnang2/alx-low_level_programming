#include "main.h"
/**
 * main - prints alphabet in lowercase
 * Return: always 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);

}
