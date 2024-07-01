#include "main.h"
#include <unistd.h>
/**
 *_puts - prints a string, to stdout
 *@str: value to be evaluate.
 *Return: not.
 */
void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
