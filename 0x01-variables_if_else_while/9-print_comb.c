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
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
