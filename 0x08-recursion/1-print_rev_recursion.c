#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
