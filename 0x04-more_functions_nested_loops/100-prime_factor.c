#include <stdio.h>
/**
* main - entry block
* @void: no argument
* Return: 0
*/
int main(void)
{
	long a, number = 612852475143;

	for (a  = 2; a <= number; a++)
	{
		if (number % a == 0)
		{
			number = number / a;
			a--;
		}
	}
	printf("%lu\n", a);
	return (0);
}
