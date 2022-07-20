#include "main.h"

/**
 * _pow_recursion - raises
 * to the power of y
 * @x: number intger
 * @y: power
 *
 * Return: on success 1.
 * on error, 1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
