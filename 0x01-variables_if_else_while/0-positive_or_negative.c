#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 ** main: Prints a random number and determines if n is positive, negative or equal to 0
 * Return: always zero
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}

if (n == 0)
{
	printf("%d is zero\n", n);
}

if (n < 0)
{
	printf("%d is negative\n", n);
}

return (0);
}
