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
	int alpha = 'a';
	int ALPHA = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}

