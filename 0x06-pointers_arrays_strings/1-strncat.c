#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: number of bytes to concatenate
 * Return: pointer to designed string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[length] = '\0';
	return (dest);
}
