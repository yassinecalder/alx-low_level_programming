#include <stdio.h>

/**
 * main - entry point 
 *
 * description : print all single digit numbers
 *
 * Return: always 0 (succes)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
