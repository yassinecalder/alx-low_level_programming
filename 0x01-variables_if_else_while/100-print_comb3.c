#include <stdio.h>

/**
 * main - entry point
 *
 * description: print all possible combinations
 *
 * Return: always 0 (succes)
*/

int main(void)
{
	int digit = 0, digit2;

	while (digit <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			if (digit != digit2 && digit < digit2)
			{
				putchar(digit + 48);
				putchar(digit2 + 48);

				if (digit + digit2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
