#include <stdio.h>
/**
 * main - entry point for the program.
 *
 * Return: zero if no error, non zero value if errors.
 */
int main(void)
{
printf("Size of a char: %c byte(s)\n", sizeof(char));
printf("Size of an int: %i byte(s)\n", sizeof(int));
print("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lld byte(s)\n",sizeof(long long int));
printf("Size of a float: %f byte(s)\n", sizeof(float));
return (0);
}
