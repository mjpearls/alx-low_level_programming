/**
 * main - Print -putchar
 *
 * Return: 0
 */

int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}
	_putchar(10);

	return (0);
}
