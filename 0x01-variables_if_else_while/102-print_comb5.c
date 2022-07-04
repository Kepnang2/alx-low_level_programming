#include <stdio.h>
/**
 * main - prints all possible two two-digits numbers
 * Return: Always (Success)
 */
int main(void)
{
int c, i;
c = i = '0';
for (c = '0'; c <= '9'; c++)
{
for (i = '0'; i <= '9'; i++)
{
putchar(c);
putchar(i);
if ((c != '9') || (c == '9' && i != '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);

}
