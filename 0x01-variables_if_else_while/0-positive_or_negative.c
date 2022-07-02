#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-Prints if number is positive, zero or negative
 * Return: Always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0)
{
printf("is positive\n",n);		
}
else if (n == 0)
{
printf("is zero\n",n);
}
else
{
printf("is negative\n",n);
}
/*Your code goes there*/
return(0);
}		
