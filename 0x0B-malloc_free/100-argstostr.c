#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - convert arguments on command line to strings
 * @ac: int type
 * @av: pointer to array
 * Return: arguments as strings
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int len = 0, i = 0, j, k = 0;

	if (av == 0 || ac == 0)
		return (0);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
			len++, j++;
		len++, i++;
	}
	len++;
	str = (char *)malloc(sizeof(char) * len);
	if (str == 0)
	{
		free(str);
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
			str[k] = av[i][j], j++, k++;
		str[k] = '\n', k++, i++;
	}
	str[k] = 0;
	return (str);
}
