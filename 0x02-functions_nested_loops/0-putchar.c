#include "main.h"

/**
* main - Print the word "ALX"
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char p[] = "ALX";

	for (i = 0; i < 3; i++)
		{
		_putchar(p[i]);
		}
		_putchar('\n');
	return (0);
}
