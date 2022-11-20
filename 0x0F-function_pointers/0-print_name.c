#include "function_pointers.h"

/**
 * print_name - prints name by referencing one of two
 * function callbacks
 * @name: name -- string
 * @f: function callback
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
