#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) >5)
	{
	    printf("last digit fo %d is %d and greater than 5\n",
	    n ,n % 10);
	}
	else if ((n % 10) <6 && (n % 10)!= 0)
	{
	    printf("last digit fo%d is %d is less than 6 and not equal 0\n",
	    n , n %10);
	}
	else 
	{
	   printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	    
	}
	return (0);
}
