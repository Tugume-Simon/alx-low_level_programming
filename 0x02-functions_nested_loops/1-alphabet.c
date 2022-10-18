#include "_putchar.c"
/**
 * print_alphabet - print all lowercase alphabets
 *
 */
int _putchar(char c);

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
