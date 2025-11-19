<<<<<<< HEAD
#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 * 
 * description: This program prints the string "_putchar" to the standard output
 *              followed by a newline character using the _putchar function.
 * Return: Always 0 (Success)
*/
int main(void)
{
char word[] = "_putchar";
int i = 0;
while (word[i] != '\0')
{
_putchar(word[i]);
i++;    
}
_putchar('\n');
return (0);
=======
#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
>>>>>>> 9ff9dc5 (pointers nested loops)
}
