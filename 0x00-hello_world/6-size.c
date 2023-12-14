#include <stdio.h>

/**
 * main - entry point
 *
 * description: a C program that prints whit sizeof function
 *
 * Return: always 0 (succes)
*/

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of a int: %u byte(s)\n", sizeof(int));
	printf("Size of a long: %u byte(s)\n", sizeof(long));
	printf("Size of a long long: %u byte(s)\n", sizeof(long long));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
