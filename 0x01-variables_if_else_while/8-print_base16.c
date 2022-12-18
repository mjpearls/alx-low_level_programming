#include <stdio.h>

/**
 * main - all numbers of base 16 in lower case
 *
 * Return: Zero
*/

int main(void)
{
	int i, j;

	i = 48;
	j = 97;
	while (i < 58)
	{
		putchar (i);
		i++;
	}
	while (j < 103)
	{
		putchar (j);
		j++;
	}
	putchar (10);
	return (0);
}
