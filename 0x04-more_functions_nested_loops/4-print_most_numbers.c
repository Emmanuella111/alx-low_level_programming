#include "main.h"
/**
 *print_most_numbers - print 0-9 without 2 and 4
 *return: nothing
 */

void print_most_numbers(void)
{
	char i;

	while (i <= 9)

	{
		if ((i != '2') && (i != '4'))
		{
			_putchar (i);
		}
		i++
	}
	_putchar('\n')
}

