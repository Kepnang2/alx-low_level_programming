#include <stdlib.h>
#include <time.h>
/*more headers goes here */
/*Betty style doc for function main goes here*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)
	{
	  	 printf("%d is positive\n",n);		
	}
	else if (n == 0)
	{
		printf("%d is zero\n",n);
	}
	else
	{
		printf("%d is negative\n",n);
	}
	/*Your code goes there*/
	return(0);
}		
