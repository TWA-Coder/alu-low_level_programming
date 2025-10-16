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
}
