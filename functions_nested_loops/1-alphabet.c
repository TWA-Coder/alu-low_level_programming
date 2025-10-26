<<<<<<< HEAD
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 * 
 * description: This function prints the lowercase letters of the English alphabet
 * return: void
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
=======
#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase.
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');

>>>>>>> 9ff9dc5 (pointers nested loops)
}
