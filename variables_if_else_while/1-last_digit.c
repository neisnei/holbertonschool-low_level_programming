#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if a random number to the variable n each time it is executed.
 *
 * Return: Always 0
 */

int main (void)
{
	int n;
	int y;

	srand(time(0));
	n= rand() - RAND_MAX /2;

	y=n % 10;

	if (y>5)
	{
	printf("Last digit of %d and %d is greater than 5\n" ,n ,y);
	}
	else if(y==0)
	{
	printf("Last digit of %d and is 0\n" ,n ,y);
	}
	else if (y<6)
	{
	printf("Last digit of %d and is less than 6 and not 0\n" ,n ,y);
        }
        return (0);
}
