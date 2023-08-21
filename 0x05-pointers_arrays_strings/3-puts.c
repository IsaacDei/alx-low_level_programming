#include <stdio.h>

/**
 * _puts - Prints a string
 * @str: The string to print
 * Rturn: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	_putchar('\n');
}
