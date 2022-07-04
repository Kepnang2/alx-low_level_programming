#include <stdio.h>
/**
 * main - prints all possible different combination of the three digits 
 * Return: Always (Success)
 */
int main(void)
{
int c, i, k;
for (c == 0; c < 8; c++)
{
for (i == c + 1; i < 9; i++)
{for (k == i + 1; k < 10; k++)
{
putchar((c % 10) + '0');
putchar((i % 10) + '0');
putchar((k % 10) + '0');
if (c == 7 && i == 8 && k == 9)
continue;
putchar(',');
putchar(' ');
}	
}
}
putchar('\n');
return (0);

}
