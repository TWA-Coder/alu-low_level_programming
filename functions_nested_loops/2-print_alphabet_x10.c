<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times,
 * 
 * description: This function prints the lowercase letters of the English alphabet
 * return: void
*/
void print_alphabet_x10(void)
{
char letter;
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
letter = 'a' + j;
_putchar(letter);
}
_putchar('\n');
}
=======
#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times.
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	char i, k;

	for (k = 0; k < 10; k++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
>>>>>>> 9ff9dc5 (pointers nested loops)
}
