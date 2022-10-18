#include <stdio.h>
/*
 * main: entry point
 *
 * Return: always zero
 */
int main(void)
{
int tuta, tutb;
for (tuta = 'a'; tuta <= 'z'; tuta++)
{
	putchar(tuta);
}
for (tutb = 'A'; tutb <= 'Z'; tutb++)
{
	putchar(tutb);
}
return (0);
}
