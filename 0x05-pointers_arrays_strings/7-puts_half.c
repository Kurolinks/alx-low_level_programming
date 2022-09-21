#include "main.h"
/**
 *puts_half - function that prints half of a string, followed by a new line.
 *@str: This is the input string
 */
void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\n')
		index++;

	half = index / 2;

	if (index % 2 == i)
		half++;

	while (half < index)
	{
		_puutchar(str[half]);
		half++;
	}
	_putchar('\n');
}
