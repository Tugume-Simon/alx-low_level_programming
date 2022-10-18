#include <stdio.h>
#include <string.h>
#include "1-alphabet.c"
/**                                                                                                                                                   
 * printstr - function                                                                                                                                
 * @str: string                                                                                                                                       
 *                                                                                                                                                    
 * Description: user defined function for printing a string                                                                                           
 */
void print_alphabet(void);

void printstr(char *str)
{
 	int i;
	int l = strlen(str);

	for (i = 0; i < l; i++)
	{
         	putchar(str[i]);
	}
        putchar('\n');
}
