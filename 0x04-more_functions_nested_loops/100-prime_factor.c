#include <stdio.h>

/**
 * main - program entry point
 *
 * get_next_prime - returns a prime number.
 * @cursor: previous prime number.
 *
 * Return: 0
 */

int get_next_prime(int cursor)
{
	int i, flag = 1;

	cursor++;
	do {
		for (i = 0; i < cursor; i++)
		{
			if (cursor % i == 0)
			{
				flag = 0;
				break;
			}
		}
	} while (flag == 0);

	return (i);
}		
			
int main(void)
{
	get_next_prime(2);

	return (0);
}
