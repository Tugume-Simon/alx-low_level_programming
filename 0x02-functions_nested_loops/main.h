#include <stdio.h>
#include <string.h>
#include "_putchar.c" 
/**                                                                                                                                                   
 * printstr - function                                                                                                                                
 * @str: string                                                                                                                                       
 *                                                                                                                                                    
 * Description: user defined function for printing a string                                                                                           
 */

int _putchar(char c);

void printstr(char *str)
{
 	int i;
	int l = strlen(str);

	for (i = 0; i < l; i++)
	{
         	_putchar(str[i]);
	}
        _putchar('\n');
}

