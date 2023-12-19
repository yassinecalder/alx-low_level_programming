#include <stdio.h>

/**
 * main - entry point
 *
 * description: print a-z in reverse
 *
 * Return: always 0 (succes)
*/

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
