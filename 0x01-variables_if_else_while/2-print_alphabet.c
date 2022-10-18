#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: To print the letters of the alphabet
 *
 * Return: Zero
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
