#include "main.h"
/**
 * _strcmp - compares two strings and return 0.
 * @s1: input parameter
 * @s2: input parameter
 * Return: 0 if equal or b if is different
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
