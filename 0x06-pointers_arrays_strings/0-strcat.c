#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int k;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[n] = src[k];
		n++;
		k++;
	}
	dest[n] = '\0';
	return (dest);
}
