#include <stdio.h>
/*
 * main- entry point
 *
 * Return: always zero
 */
int main(void)
{
char tuta = 'a';
char tutb = 'z';

char ch = tuta;
while (ch != 'q' || ch != 'e' && ch != tutb)
{
	putchar(ch);
	ch++;
}
return (0);
}
