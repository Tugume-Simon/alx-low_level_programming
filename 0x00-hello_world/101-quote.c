#include <unistd.h>

/**
 * main - everything goes here
 *
 * Return: this time 1 (failure)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
