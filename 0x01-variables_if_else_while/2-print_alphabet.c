#include <stdio.h>

/**
 * main - entry point
 *
 * description: a C program that prints with putchar function
 *
 * Return: always 0 (Succes)
*/

int main(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		putchar (alpha);
		alpha++;
	}
	putchar ('\n');
	return (0);
}
