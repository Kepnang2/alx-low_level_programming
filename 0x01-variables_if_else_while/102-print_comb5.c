#include <stdio.h>
/**
 * main - prints all possible two two-digits numbers
 * Return: Always (Success)
 */
int main(void)
{
int c, i;
for (c = 0; c <= 98; c++)
{
for (i = c + 1; i <= 99; i++)
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
putchar(' ');
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (c == 98 && i == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);

}
