#include <stdio.h>

/**
 * main - Print single digit numbers of base ten
 *
 * Description: print single digit numbers
 *
 * Return: Zero
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
