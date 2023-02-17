#include <stdio.h>
/**
 *  main - A program that prints the size of various computer types
 *  Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte\n", sizeof(a));
printf("Size of an int: %lu bytes\n", sizeof(b));
printf("Size of a long int: %lu bytes\n", sizeof(c));
printf("Size of a lon long int: %lu bytes\n", sizeof(d));
printf("Size of a float : %lu bytes\n", sizeof(f));
return;
}
