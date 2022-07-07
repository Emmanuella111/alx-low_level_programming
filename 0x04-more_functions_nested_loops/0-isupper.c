#include "main.h"
#include <stdio.h>

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: Return 1 if c is uppercase, otherwise return 0
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}

