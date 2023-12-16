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
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
			alpha++;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
