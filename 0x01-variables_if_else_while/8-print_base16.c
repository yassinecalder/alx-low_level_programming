#include <stdio.h>

/**
 *main - entry point
 *
 * desctiption: print base16 numbers
 *
 * Return: always 0 (succes)
*/

int main(void)
{
	int a = 48;

	while (a <= 102)
	{
		putchar(a);
		if (a == 57)
			a += 39;
		a++;
	}
	putchar('\n');

	return (0);
}
