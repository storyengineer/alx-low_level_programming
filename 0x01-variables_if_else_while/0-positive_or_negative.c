#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * main- entry point of the program
 *
 * Return: zero if prgram does not work
 */
int main (void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0) 
{
printf("n is positive\n");
}
else if (n == 0)
{
printf("n is zero\n");
}
else (n < 0);
{
printf("n is negative\n");
}
return (0);
}
