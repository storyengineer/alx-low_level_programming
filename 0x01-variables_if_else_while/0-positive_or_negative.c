#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * main- entry point of the program
 *
 * Return: zero if prgram does not wrk
 */
int main (void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0) 
{
printf("n is posotive");
}
else if (n = 0)
{
printf("n is zero");
}
else (n < 0)
{
printf("n is negative");
}
return (0);
}
