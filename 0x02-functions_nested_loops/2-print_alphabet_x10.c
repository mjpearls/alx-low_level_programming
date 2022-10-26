#include "main.h"

/**
 * print_alphabet - ten times in lowercase
 *
 * Return : void
 */
void print_alphabet_x10(void);

int number_times = 0;
char alphabet = 'a';

{
	while (number_times < 9)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');

		number_times++;
	}
}
