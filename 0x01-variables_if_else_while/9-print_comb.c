#include <stdio.h>
/**
 * main - all possible combinations of single digit numbers
 *
 * Return: Zero
*/

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar (i);
		if (i != 57)
		{
			putchar (44);
			putchar (32);
		}
		i++;
	}
	putchar (10);
	return (0);

}

