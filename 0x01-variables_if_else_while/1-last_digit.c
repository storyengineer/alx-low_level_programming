#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main- last digit condition checker
 *
 * Return: zero when it does not work
 */
int main(void)
{
int n;
int tuta;

srand(time(0));
n = rand() - RAND_MAX / 2;
tuta = n % 10;

if (tuta > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, tuta);
}

if (tuta == 0)
{
printf("Last digit of %d is %d and is 0\n", n, tuta);
}

if (tuta < 6 && tuta != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tuta);
}
return (0);
}
