#include <stdio.h>
/*
 * main: entry point
 *
 * Return: always zero
 */
int main(void)
{
int tuta, tutb;
for (tuta = 'A'; tuta <= 'Z'; tuta++)
{
	putchar(tuta);
	putchar('\n');
}
for (tutb = 'a'; tutb <= 'z'; tutb++)
{
	putchar(tutb);
}
return (0);
}
