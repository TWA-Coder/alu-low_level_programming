#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * 
 * description: This function checks if the given character is a lowercase letter.
 * return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return 1; // true
else
return 0; // false
}
