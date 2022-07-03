#include <stdio.h>
/**
 * main - print the alphabetic list except e and q
 * Return: Always (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');

return (0);

}
