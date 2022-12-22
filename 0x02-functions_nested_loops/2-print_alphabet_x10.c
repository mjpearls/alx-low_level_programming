#include "main.h"

/**
 * print_alphabet_x10 - ten times in lowercase
 *
 * Return : void
*/

void print_alphabet_x10(void)
{
	int number_times = 0;
	char alphabet = 'a';

	while (number_times < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');

		number_times++;
	}
}
