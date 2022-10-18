#include <stdio.h>

/**
 * main - Print the letters of the alphabet in reverse
 *
 * Return: Zero
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}

	putchar(10);

	return (0);
}
