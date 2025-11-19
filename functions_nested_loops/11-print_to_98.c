#include <stdio.h>
<<<<<<< HEAD
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * @n: starting from n or ending at n
 * description: This function prints all natural numbers from n to 98,
 * 
 * return: void
*/

void print_to_98(int n)
{
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
if (i != 98)
printf("%d, ", i);
else
printf("%d\n", i);
}
}
else
{
for (int i = n; i >= 98; i--)
{
if (i != 98)
printf("%d, ", i);
else
printf("%d\n", i);
}
}
=======
/**
 * print_to_98 - Prints all natural numbers
 * from n to 98.
 *
 * @n: input number.
 *
 * Return: no return.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
>>>>>>> 9ff9dc5 (pointers nested loops)
}
